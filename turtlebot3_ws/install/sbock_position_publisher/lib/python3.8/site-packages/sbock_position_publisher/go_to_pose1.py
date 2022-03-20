import rclpy
# importamos las librerias ROS2 de python 
from rclpy.node import Node
# importamos los mensajes tipo Twist
from geometry_msgs.msg import Pose

# creamos una clase pasándole como parámetro el Nodo
class GoToPos(Node):

    def __init__(self):
        # Constructor de la clase
        # ejecutamos super() para inicializar el Nodo
        # introducimos le nombre del nodo como parámetro
        super().__init__('pos_publisher')
        # creamos el objeto publisher
        # que publicara en el topic /cmd_vel 
        # la cola del topic es de 10 mensajes
        self.goal_pose_publisher = self.create_publisher(Pose, 'pose', 100)
        self.publish_pos()
    
    def publish_pos(self):
        pose = Pose()
        # Header
        #pose.header.frame_id = 'map'

        #Pose
        pose.position.x = -0.2
        pose.position.y = 1.1
        pose.orientation.w = 1.0

        self.goal_pose_publisher.publish(pose)
        exit(0)
        
        
            
def main(args=None):
    # inicializa la comunicación
    rclpy.init(args=args)
    # declara el constructor del nodo 
    simple_publisher = GoToPos()
    # dejamos vivo el nodo
    # para parar el programa habrá que matar el node (ctrl+c)
    rclpy.spin(simple_publisher)
    # destruye en nodo
    simple_publisher.destroy_node()
    # se cierra la comunicacion ROS
    rclpy.shutdown()

if __name__ == '__main__':
    main()
