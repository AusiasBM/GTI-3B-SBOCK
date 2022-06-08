from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        Node(
            package='sbock_service_predict_yolo',
            executable='predict_yolo',
            output='screen'
        ),
        
    ])
