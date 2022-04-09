# initial_pose_pub.py
import sys
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseWithCovarianceStamped
from custom_interface.srv import IniPose
from rclpy.qos import QoSDurabilityPolicy, QoSHistoryPolicy, QoSReliabilityPolicy, QoSLivelinessPolicy
from rclpy.qos import QoSProfile
from rclpy.duration import Duration

class Service_ini_pos(Node):
    '''
    Nodo publicador de la posición inicial que ocupa el robot (en desuso de momento)
    Atributes_
        self.publisher_ (Publisher): Indica el topic en el que publicará la información de la posición del robot
    '''
    
    def __init__(self):
        super().__init__('initial_pose_server')
        
        self.get_logger().info('Constructor de Initial_pose')
        
        self.srv = self.create_service(IniPose, 'pose_ini', self.cb_publicar_posicion_inicial)
        
         
        self.publisher_ = self.create_publisher(PoseWithCovarianceStamped, 'initialpose', 10)
        


    def cb_publicar_posicion_inicial(self, request, response):
        '''
        Publica la posicion inicial del robot a través de un objeto de tipo PoseWithCovarianceStamped()
        '''
        self.get_logger().info('Callback de Initial_pose')

        msg = PoseWithCovarianceStamped()
        msg.header.frame_id = 'map'
        msg.pose.pose.position.x = 0.0
        msg.pose.pose.position.y = 0.0
        msg.pose.pose.orientation.z = 0.0 
        msg.pose.pose.orientation.w = 1.0
        
        self.publisher_.publish(msg)
        self.get_logger().info('Publicando')
        
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
