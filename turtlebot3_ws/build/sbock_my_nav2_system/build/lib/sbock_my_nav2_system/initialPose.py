# initial_pose_pub.py
import sys
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseWithCovarianceStamped
from rclpy.qos import QoSDurabilityPolicy, QoSHistoryPolicy, QoSReliabilityPolicy, QoSLivelinessPolicy
from rclpy.qos import QoSProfile
from rclpy.duration import Duration

class Publisher_ini_pos(Node):

    qos_profile = QoSProfile(depth = 10)
    qos_profile.reliability = QoSReliabilityPolicy.RELIABLE # RELIABLE o BEST_EFFORT
    qos_profile.durability = QoSDurabilityPolicy.VOLATILE # VOLATILE o TRANSIENT_LOCAL
    qos_profile.history = QoSHistoryPolicy.KEEP_LAST # KEEP_ALL o KEEP_LAST
    qos_profile.liveliness = QoSLivelinessPolicy.AUTOMATIC # MANUAL BY TOPIC o AUTOMATIC
    qos_profile.deadline = Duration(seconds = 2.0)

    def __init__(self):
        super().__init__('initial_pose_pub_node')
        self.publisher_ = self.create_publisher(PoseWithCovarianceStamped, 'initialpose', self.qos_profile)
        timer_period = 0.5  # seconds
        self.i = 0.0
        self.timer_ = self.create_timer(timer_period, self.callback)
        self.get_logger().info('Inicializando el timer')


    def callback(self):
        msg = PoseWithCovarianceStamped()
        msg.header.frame_id = 'map'
        msg.pose.pose.position.x = 0.0
        msg.pose.pose.position.y = 0.0
        msg.pose.pose.orientation.z = 0.0 
        msg.pose.pose.orientation.w = 1.0
        self.publisher_.publish(msg)
        self.get_logger().info('Publicando')


def main(args=None):
    rclpy.init(args=args)
    publisher = Publisher_ini_pos()
    try:
        rclpy.spin_once(publisher)
    except KeyboardInterrupt:
        publisher.destroy_node()
    finally:
        rclpy.shutdown()

if __name__ == '__main__':
    main()