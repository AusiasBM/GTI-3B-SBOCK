import rclpy
# importar ROS2 python lib
from rclpy.node import Node
# importar Odometry desde la interface nav_msgs
from nav_msgs.msg import Odometry
# importar la librería de calidad del servicio para fijar las políticas de calidad
from rclpy.qos import ReliabilityPolicy, QoSProfile
import time

class RobotOdomPosition(Node):

    def __init__(self):
        # constructor
        #  super() ininicializa el Nodo
        super().__init__('odom_pos_subscriber')
        # crear el objeto subscriptor
        # al topic /odom topic wcon una cola de 10 messages.
        # create_subscription(msg_type, topic, callback, qos_profile, callback_group, event_callbacks, raw)
        self.subscriber= self.create_subscription(
            Odometry,
            '/odom',
            self.odometry_callback,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)) 
        # prevent unused variable warning
        self.subscriber 
     

    def odometry_callback(self, msg):
        x = msg.pose.pose.position.x
        y = msg.pose.pose.position.y
        z = msg.pose.pose.position.z
        v = msg.twist.twist.linear.x
        a = msg.twist.twist.angular.z
        # imprime los datos leídos       
        self.get_logger().info('Se está recibiendo posicion odom del robot:\n x = {0} \n y = {1}\n z = {2}\n Velocidad lineal= {3}\n Velocidad angular = {4}\n\n '.format(x, y, z, v, a))
        time.sleep(2)
    


def main(args=None):
    # inicializa la comunicacion ROS2
    rclpy.init(args=args)
    # declara el nodo
    robot_pos= RobotOdomPosition()
    # dejamos abierto el nodo hasta ctr+c
    rclpy.spin(robot_pos)
    # Destruimos el nodo
    robot_pos.destroy_node()
    # se cierra la comunicacion ROS2
    rclpy.shutdown()

if __name__ == '__main__':
    main()
