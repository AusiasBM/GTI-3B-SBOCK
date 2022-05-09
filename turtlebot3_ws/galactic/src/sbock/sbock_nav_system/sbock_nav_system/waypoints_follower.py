import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from nav2_msgs.action import FollowWaypoints
from geometry_msgs.msg import PoseStamped
from action_msgs.msg import GoalStatus
from rclpy.qos import ReliabilityPolicy, QoSProfile
import sys


class NavToPoses(Node):


    def __init__(self):
        super().__init__('nav_to_pose_node')

        self.get_logger().info('2')

        self.__goal_handle = None
        self.follow_waypoints_client = ActionClient(self, FollowWaypoints, 'follow_waypoints')
   


    def followWaypoints(self, poses):
        # Sends a `FollowWaypoints` action request
        self.get_logger().info("Waiting for 'FollowWaypoints' action server")
        while not self.follow_waypoints_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info("'FollowWaypoints' action server not available, waiting...")

        goal_msg = FollowWaypoints.Goal()
        goal_msg.poses = poses

        self.get_logger().info('Following ' + str(len(goal_msg.poses)) + ' goals.' + '...')
        send_goal_future = self.follow_waypoints_client.send_goal_async(goal_msg,
                                                                        self.__feedback_callback)
        rclpy.spin_until_future_complete(self, send_goal_future)
        self.goal_handle = send_goal_future.result()

        if not self.goal_handle.accepted:
            self.get_logger().info('Following ' + str(len(poses)) + ' waypoints request was rejected!')
            return False

        self.result_future = self.goal_handle.get_result_async()
        return True



    #definimos la funcion de respuesta al feedback
    def __feedback_callback(self, feedback_msg):
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
    goal_pose.header.stamp = action_client.get_clock().now().to_msg()
    goal_pose.pose.position.x = -3.5
    goal_pose.pose.position.y = 0.0
    goal_pose.pose.orientation.z = 1.0
    goal_pose.pose.orientation.w = 0.0
    goal_poses.append(goal_pose)
    
    goal_pose = PoseStamped()
    goal_pose.header.frame_id = 'map'
    goal_pose.header.stamp = action_client.get_clock().now().to_msg()
    goal_pose.pose.position.x = -4.0
    goal_pose.pose.position.y = -2.0
    goal_pose.pose.orientation.z = 0.0
    goal_pose.pose.orientation.w = 1.0
    goal_poses.append(goal_pose)
    
    
    goal_pose = PoseStamped()
    goal_pose.header.frame_id = 'map'
    goal_pose.header.stamp = action_client.get_clock().now().to_msg()
    goal_pose.pose.position.x = -3.0
    goal_pose.pose.position.y = -2.2
    goal_pose.pose.orientation.z = 1.0
    goal_pose.pose.orientation.w = 1.0
    goal_poses.append(goal_pose)
    
    goal_pose = PoseStamped()
    goal_pose.header.frame_id = 'map'
    goal_pose.header.stamp = action_client.get_clock().now().to_msg()
    goal_pose.pose.position.x = 0.0
    goal_pose.pose.position.y = 0.0
    goal_pose.pose.orientation.z = 1.0
    goal_pose.pose.orientation.w = 0.0
    goal_poses.append(goal_pose)

    action_client.followWaypoints(goal_poses)
    rclpy.spin(action_client)
    


if __name__ == '__main__':
    main()
