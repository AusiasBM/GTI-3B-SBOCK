from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='sbock_my_nav2_system',
            executable='nav_to_pose',
            output='screen'),
    ])