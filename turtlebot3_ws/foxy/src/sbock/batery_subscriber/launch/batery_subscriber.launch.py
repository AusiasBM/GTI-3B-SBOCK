from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='batery_subscriber',
            executable='batery_simple_suscriber',
            output='screen'),
    ])