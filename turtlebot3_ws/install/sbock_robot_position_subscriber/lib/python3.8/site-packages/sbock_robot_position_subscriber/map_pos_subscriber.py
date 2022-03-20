import rclpy
# importar ROS2 python lib
from rclpy.node import Node
# importar PoseStamped desde la interface geometry_nav
from geometry_msgs.msg import PoseWithCovarianceStamped
# importar la librería de calidad del servicio para fijar las políticas de calidad
from rclpy.qos import ReliabilityPolicy, QoSProfile
import time

class RobotMapPosition(Node):

    def __init__(self):
        # constructor
        #  super() ininicializa el Nodo
        super().__init__('map_pos_subscriber')
        # crear el objeto subscriptor
        # al topic /odom topic wcon una cola de 10 messages.
        # create_subscription(msg_type, topic, callback, qos_profile, callback_group, event_callbacks, raw)
        self.subscriber_pos_map = self.create_subscription(
            PoseWithCovarianceStamped,
            '/amcl_pose',
            self.pose_stamped_callback,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)
        )    

        self.subscriber_pos_map
    
    def pose_stamped_callback(self, msg):
        x = msg.position.x
        y = msg.position.y
        z = msg.orientation.z
        w = msg.orientation.w
        # imprime los datos leídos       
        self.get_logger().info('Se está recibiendo posicion sobre el mapa:\n x = {0} \n y = {1}\n Orientación z = {2}\n Orientacion w = {3}\n\n'.format(x, y, z, w))
        time.sleep(2)



def main(args=None):
    # inicializa la comunicacion ROS2
    rclpy.init(args=args)
    # declara el nodo
    robot_pos= RobotMapPosition()
    # dejamos abierto el nodo hasta ctr+c
    rclpy.spin(robot_pos)
    # Destruimos el nodo
    robot_pos.destroy_node()
    # se cierra la comunicacion ROS2
    rclpy.shutdown()

if __name__ == '__main__':
    main()
