# initial_pose_pub.py
import sys
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseWithCovarianceStamped


class Publisher_ini_pos(Node):
    '''
    Nodo publicador de la posición inicial que ocupa el robot
    Atributes_
        self.publisher_ (Publisher): Indica el topic en el que publicará la información de la posición del robot
    '''

    def __init__(self):
        super().__init__('initial_pose_pub_node')
        self.publisher_ = self.create_publisher(PoseWithCovarianceStamped, 'initialpose', 1)
        self.publicar_posicion_inicial()


    def publicar_posicion_inicial(self):
        '''
        Publica la posicion inicial del robot a través de un objeto de tipo PoseWithCovarianceStamped()
        '''
        msg = PoseWithCovarianceStamped()
        msg.header.frame_id = 'map'
        msg.pose.pose.position.x = -0.3
        msg.pose.pose.position.y = 1.1
        msg.pose.pose.orientation.z = 1.0 
        msg.pose.pose.orientation.w = 0.0 
        self.publisher_.publish(msg)
        exit(0)

def main(args=None):
    rclpy.init(args=args)
    Publisher_ini_pos()

if __name__ == '__main__':
    main()
