import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from nav2_msgs.action import FollowWaypoints
from geometry_msgs.msg import PoseStamped
from action_msgs.msg import GoalStatus
from rclpy.qos import ReliabilityPolicy, QoSProfile


class NavToPoses(Node):


    def __init__(self):
        super().__init__('nav_to_pose_node')

        self.get_logger().info('2')


        self.__goal_handle = None
        self.__action_client = ActionClient(self, FollowWaypoints, 'follow_waypoints')
        #Creamos el objeto suscriptor que recibira un mensaje de tipo Pose con la posición de destino:
        #nodo
        #topic
        #nombre de la accion a ejecutar
        #Confiabilidad de recibimiento de mensaje
        #self.model_pose_sub = self.create_subscription(Pose,
         #                                              'pose',
          #                                             self.__goalPoseCallback,
           #                                            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT


    def followWaypoints(self, poses):
        # Sends a `FollowWaypoints` action request
        self.get_logger().info("Waiting for 'FollowWaypoints' action server")
        while not self.__action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info("'FollowerWaypoints' action server not available, waiting...")

        goal_msg = FollowWaypoints.Goal()
        goal_msg.poses = poses

        self.get_logger().info('Following ' + str(len(goal_msg.poses)) + ' goals.' + '...')
               

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

    action_client = NavToPoses()
    
    goal_poses = []

    goal_pose = PoseStamped()
    goal_pose.header.frame_id = 'map'
    goal_pose.pose.position.x = -3.5
    goal_pose.pose.position.y = 3.0
    goal_pose.pose.position.z = 0.0
    goal_pose.pose.orientation.x = 0.0
    goal_pose.pose.orientation.y = 0.0
    goal_pose.pose.orientation.z = 0.0
    goal_pose.pose.orientation.w = 1.0
    goal_poses.append(goal_pose)
    
    goal_pose = PoseStamped()
    goal_pose.pose.position.x = -4.0
    goal_pose.pose.position.y = 2.0
    goal_pose.pose.position.z = 0.0
    goal_pose.pose.orientation.x = 0.0
    goal_pose.pose.orientation.y = 0.0
    goal_pose.pose.orientation.z = 1.0
    goal_pose.pose.orientation.w = 1.0
    goal_poses.append(goal_pose)
    
    goal_pose = PoseStamped()
    goal_pose.header.frame_id = 'map'
    goal_pose.pose.position.x = -3.5
    goal_pose.pose.position.y = 3.5
    goal_pose.pose.position.z = 0.0
    goal_pose.pose.orientation.x = 0.0
    goal_pose.pose.orientation.y = 0.0
    goal_pose.pose.orientation.z = 0.92
    goal_pose.pose.orientation.w = -0.38
    goal_poses.append(goal_pose)

    action_client.followWaypoints(goal_poses)
    rclpy.spin(action_client)
    


if __name__ == '__main__':
    main()