# initial_pose_pub.py
import sys
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseWithCovarianceStamped
from sbock_custom_interface.srv import IniPose



class Service_ini_pos(Node):
    '''
    Nodo publicador de la posición inicial que ocupa el robot (en desuso de momento)
    Atributes_
        self.publisher_ (Publisher): Indica el topic en el que publicará la información de la posición del robot
    '''
    
    def __init__(self):
        super().__init__('initial_pose_server')
        
        self.__initial_pose_initialized = False
        
        self.get_logger().info('Constructor de Initial_pose')
        
        self.srv = self.create_service(IniPose, 'pose_ini', self.callback_ini_pose)
        
         
        self.publisher_ = self.create_publisher(PoseWithCovarianceStamped, 'initialpose', 10)
        

   
    def callback_ini_pose(self, request, response):
        
        #Dado que se implementa con la web a través de un botón, asegurarse quue no se puede localizar 
        #la posición inicial más de una vez por "sesión".
        if self.__initial_pose_initialized == False:
            msg = PoseWithCovarianceStamped()
            msg.header.frame_id = 'map'
            msg.pose.pose.position.x = request.pos_x
            msg.pose.pose.position.y = request.pos_y
            msg.pose.pose.orientation.w = request.orien_w

            self.get_logger().info('Publicando posición inicial...')
            self.publisher_.publish(msg)
            self.__initial_pose_initialized = True
            
        
        
        response.success = True
        return response


def main(args=None):
    # inicializa la comunicacion ROS2
    rclpy.init(args=args)
    # creamos el nodo
    service = Service_ini_pos()
    
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
