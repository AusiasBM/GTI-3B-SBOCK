from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='sbock_capture_image',
            executable='capture_image',
            output='screen'),
    ])
