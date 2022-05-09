import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from nav2_msgs.action import NavigateToPose
from geometry_msgs.msg import Pose, PoseStamped, PoseWithCovarianceStamped
from action_msgs.msg import GoalStatus
from rclpy.qos import ReliabilityPolicy, QoSProfile, QoSDurabilityPolicy, QoSHistoryPolicy, QoSReliabilityPolicy, QoSLivelinessPolicy
import sys
from rclpy.duration import Duration
import time


class Nav_To_Pose(Node):
    '''
    Nodo que crea una subscripcion al topic /pose del que se espera que se le pase una posicion del mapa
    a la que el robot se debera dirigir. La navegación se lanza a traves de la accion NavigateToPose

    Atributes:
        self.__goal_handle: Manejador de la accion
        self.__action_client: Acción de NavigateToPose
    '''
    
    #Politicas de confiabilidad de los mensajes
    qos_profile = QoSProfile(depth = 10)
    qos_profile.reliability = QoSReliabilityPolicy.RELIABLE # RELIABLE o BEST_EFFORT
    qos_profile.durability = QoSDurabilityPolicy.VOLATILE # VOLATILE o TRANSIENT_LOCAL
    qos_profile.history = QoSHistoryPolicy.KEEP_LAST # KEEP_ALL o KEEP_LAST
    qos_profile.liveliness = QoSLivelinessPolicy.AUTOMATIC # MANUAL BY TOPIC o AUTOMATIC
    qos_profile.deadline = Duration(seconds = 2.0)

    def __init__(self):
        super().__init__('nav_to_pose_node')

        self.__goal_handle = None
        self.__action_client = None
        
        '''
        self.publisher_ = self.create_publisher(PoseWithCovarianceStamped, 'initialpose', self.qos_profile)
        timer_period = 1  # seconds
        self.i = 0.0
        self.timer_ = self.create_timer(timer_period, self.__callback_initial_pose)'''

        #Creamos el objeto suscriptor que recibira un mensaje de tipo Pose con la posicion de destino:
        #nodo
        #topic
        #nombre de la accion a ejecutar
        #Confiabilidad de recibimiento de mensaje
        self.model_pose_sub = self.create_subscription(Pose,
                                                       'pose',
                                                       self.__goalPoseCallback,
                                                       QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))


    def __goalPoseCallback(self, msg):
        '''
        Callback que es llamado cuando se recibe un mensaje del topic /pose con la posición de destino, y se 
        lanza la accion.
        '''           
        #Creamos un cliente de la accion NavigateToPose
        self.__action_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')

        #Creamos objeto de tipo PoseStamped y pasamos a la variable .pose el mensaje que contiene la posicion de destino
        pose = PoseStamped()
        pose.header.frame_id = 'map'
        
        pose.pose.position.x = -4.0
        pose.pose.position.y = 0.0
        pose.pose.orientation.w = 0.0

        #Llamamos al metodo que iniciará el proceso para que el robot vaya a la posicion de desino
        self.__send_goal(pose)
    

        
    def __send_goal(self, pose):
        '''
        Metodo que lanza el objetivo que debe alcanzar

        Atr:
            pose: objeto de tipo PoseStamped
        '''
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

    
    def __goal_response_callback(self, future):
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
        self.status = future.result().status
        if self.status != GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('Navigation failed with status code: {0}'.format(self.status))
        else:
            self.get_logger().info('Goal success!')
        
        self.__reset_action()


    def __feedback_callback(self, feedback_msg):
        self.feedback = feedback_msg.feedback
        return
    

    def __reset_action(self):
        '''
        Metodo para borrar la accion y el manejador una vez termina la accion
        '''
        self.__goal_handle = None
        self.__action_client = None


def main(args=None):
    rclpy.init(args=args)

    action_client = Nav_To_Pose()

    rclpy.spin(action_client)


if __name__ == '__main__':
    main()
