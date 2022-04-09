from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='sbock_position_publisher',
            executable='position2_publisher',
            output='screen'),
    ])
