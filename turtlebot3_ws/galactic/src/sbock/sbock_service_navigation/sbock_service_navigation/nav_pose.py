#nav_to_pose.py

import sys
from sbock_custom_interface.srv import NavToPose
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from nav2_msgs.action import NavigateToPose
from geometry_msgs.msg import Pose, PoseStamped, PoseWithCovarianceStamped
from action_msgs.msg import GoalStatus
from rclpy.qos import ReliabilityPolicy, QoSProfile


class Service_Nav_To_Pose(Node):
    '''
    Nodo que ejecuta la posición inicial del robot y crea un servicio que espera la llegada 
    de una posició para que navegue a ella. El servicio llama al callback quee lanza la acció 
    de navegación. La navegación se lanza a traves de la accion NavigateToPose.

    Atributes:
        self.__goal_handle: Manejador de la accion
        self.__action_client: Acción de NavigateToPose
    '''

    def __init__(self):
        super().__init__('nav_service_node')
        
        self.get_logger().info('Entra al constructor de Nav')
        self.__goal_handle = None
        self.__action_client = None

        self.srv = self.create_service(NavToPose, 'nav_pose', self.goalPoseCallback)
        
      
                                                       


    def goalPoseCallback(self, request, response):
        '''
        Callback que es llamado cuando se recibe un mensaje del topic /pose con la posición de destino, y se 
        lanza la accion.
        '''
        #Creamos un cliente de la accion NavigateToPose
        self.__action_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')
        
        self.get_logger().info('Callback de goalPose')

        #Creamos objeto de tipo PoseStamped y pasamos a la variable .pose el mensaje que contiene la posicion de destino
        pose = PoseStamped()
        pose.header.frame_id = 'map'
        pose.pose.position.x = request.pos_x
        pose.pose.position.y = request.pos_y
        pose.pose.orientation.z = request.orien_z
        pose.pose.orientation.w = request.orien_w

        #Llamamos al metodo que iniciará el proceso para que el robot vaya a la posicion de desino
        response = self.__send_goal(pose, response)
        
        return response


    def __send_goal(self, pose, response):
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
        response.success = True
        return response

    
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
    # inicializa la comunicacion ROS2
    rclpy.init(args=args)
    # creamos el nodo
    service = Service_Nav_To_Pose()
    
    try:
        #dejamos abierto el servicio
        rclpy.spin(service)
    except KeyboardInterrupt:
        service.get_logger().info('Cerrando el nodo service')
    finally:
        #destruimos el nodo
        service.destroy_node()
        #cerramos la comunicacion
        rclpy.shutdown()

#definimos el ejecutable
if __name__=='__main__':
    main()
