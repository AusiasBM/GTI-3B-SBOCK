from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='sbock_robot_position_subscriber',
            executable='map_pos_subscriber',
            output='screen'),
    ])
