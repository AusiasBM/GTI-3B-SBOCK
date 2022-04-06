

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from nav2_msgs.action import NavigateToPose
from geometry_msgs.msg import Pose, PoseStamped
from action_msgs.msg import GoalStatus
from rclpy.qos import ReliabilityPolicy, QoSProfile


class NavToPose(Node):


    def __init__(self):
        super().__init__('nav_to_pose_node')

        self.get_logger().info('2')


        self.__goal_handle = None
        self.__action_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        #Creamos el objeto suscriptor que recibira un mensaje de tipo Pose con la posición de destino:
        #nodo
        #topic
        #nombre de la accion a ejecutar
        #Confiabilidad de recibimiento de mensaje
        #self.model_pose_sub = self.create_subscription(Pose,
         #                                              'pose',
          #                                             self.__goalPoseCallback,
           #                                            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))

    def __goalPoseCallback(self, msg):

        self.get_logger().info('3')

        #Creamos un cliente de la accion NavigateToPose

        #Creamos objeto de tipo PoseStamped y pasamos a la variable .pose el mensaje que contiene la posicion de destino
        pose = PoseStamped()
        pose.header.frame_id = 'map'
        pose.pose = msg

        #Llamamos al metodo que iniciará el proceso para que el robot vaya a la posicion de desino
        self.send_goal(pose)


    #definimos la funcion de mandar goal
    def send_goal(self, pose):
        self.get_logger().info('4')

        #espera a que el servidor este listo
        self.get_logger().info("Waiting for 'NavigateToPose' action server")
        while not self.__action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info("'NavigateToPose' action server not available, waiting...")

        # crea el mensaje tipo Goal
        # y lo rellena con el argumento pose (de tipo PoseStamped)
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose = pose
        
        self.get_logger().info('Navigating to goal: ' + str(pose.pose.position.x) + ' ' +
                      str(pose.pose.position.y) + '...')
                      
        # envia el goal
        self._send_goal_future = self.__action_client.send_goal_async(goal_msg,feedback_callback=self.__feedback_callback)

        
        self.get_logger().info('Going to final position...')
        #rclpy.spin_until_future_complete(self, self._send_goal_future)

        self._send_goal_future.add_done_callback(self.__goal_response_callback)

    
    #definimos la funcion de respuesta al goal
    def __goal_response_callback(self, future):
        self.get_logger().info('5')


        self.__goal_handle = future.result()
        if not self.__goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            self.__goal_handle.cancel_goal_async()

            #Si sale mal reiniciamos los atributos de __acion_client y __goal_handle 
            self.__reset_action()
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = self.__goal_handle.get_result_async()
        #rclpy.spin_until_future_complete(self, self._get_result_future)
        self._get_result_future.add_done_callback(self.__get_result_callback)
    
    #definimos la funcion de respuesta al resultado
    def __get_result_callback(self, future):
        self.get_logger().info('6')


        self.status = future.result().status
        if self.status != GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('Navigation failed with status code: {0}'.format(self.status))
        else:
            self.get_logger().info('Goal success!')
        
        self.__reset_action()

        #rclpy.shutdown()

    #definimos la funcion de respuesta al feedback
    def __feedback_callback(self, feedback_msg):
        self.get_logger().info('7')

        self.feedback = feedback_msg.feedback
        return
    
    #Metodo para resetear los atributos __goal_handle y __action_client
    def __reset_action(self):
        self.get_logger().info('8')

        self.__goal_handle = None
        self.__action_client = None


def main(args=None):

    rclpy.init(args=args)

    action_client = NavToPose()
    
    # Crear la posicion de tipo PoseStamped (para pasar al Goal de la accion NavigateToPose)
    goal_pose = PoseStamped()
    # Header
    goal_pose.header.frame_id = 'map'
    goal_pose.header.stamp = action_client.get_clock().now().to_msg()
    #Pose
    goal_pose.pose.position.x = -2.6
    goal_pose.pose.position.y = 0.7
    goal_pose.pose.orientation.w = 1.0

    action_client.send_goal(goal_pose)
    rclpy.spin(action_client)
    


if __name__ == '__main__':
    main()