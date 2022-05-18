import rclpy
# importamos las librerias ROS2 de python 
from rclpy.node import Node
# importamos los mensajes tipo Twist
from geometry_msgs.msg import Pose

# creamos una clase pasándole como parámetro el Nodo
class Go_To_Pos3(Node):

    def __init__(self):
        super().__init__('pos3_publisher')
        # creamos el objeto publisher
        # que publicara en el topic /cmd_vel 
        # la cola del topic es de 10 mensajes
        self.goal_pose_publisher = self.create_publisher(Pose, 'pose', 10)
        self.publish_pos()
    
    def publish_pos(self):
        pose = Pose()
        pose.position.x = -1.4
        pose.position.y = 1.1
        pose.orientation.w = 1.0

        self.goal_pose_publisher.publish(pose)
        exit(0)
    	
                   
def main(args=None):
    # inicializa la comunicación
    rclpy.init(args=args)
    # declara el constructor del nodo 
    simple_publisher = Go_To_Pos3()

if __name__ == '__main__':
    main()
