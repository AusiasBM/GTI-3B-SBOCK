import rclpy
# importar ROS2 python lib
from rclpy.node import Node
# importar Odometry desde la interface nav_msgs
from sensor_msgs.msg import BatteryState
# importar la librería de calidad del servicio para fijar las políticas de calidad
from rclpy.qos import ReliabilityPolicy, QoSProfile, DurabilityPolicy, LivelinessPolicy

class SimpleSubscriber(Node):

    def __init__(self):
        # constructor
        #  super() ininicializa el Nodo
        super().__init__('batery_simple_suscriber')
        # crear el objeto subscriptor
        # al topic /odom topic wcon una cola de 10 messages.
        # create_subscription(msg_type, topic, callback, qos_profile, callback_group, event_callbacks, raw)
        self.subscriber= self.create_subscription(
            BatteryState,
            '/battery_state',
            self.listener_callback,
            QoSProfile(depth=10, liveliness= LivelinessPolicy.AUTOMATIC)) 
        # prevent unused variable warning
        self.subscriber       

    def listener_callback(self, msg):
        # imprime los datos leídos       
        self.get_logger().info('Se está recibiendo "%s"' % str(msg.percentage))

def main(args=None):
    # inicializa la comunicacion ROS2
    rclpy.init(args=args)
    # declara el nodo
    simple_subscriber = SimpleSubscriber()
    # dejamos abierto el nodo hasta ctr+c
    rclpy.spin(simple_subscriber)
    # Destruimos el nodo
    simple_subscriber.destroy_node()
    # se cierra la comunicacion ROS2
    rclpy.shutdown()

if __name__ == '__main__':
    main()
