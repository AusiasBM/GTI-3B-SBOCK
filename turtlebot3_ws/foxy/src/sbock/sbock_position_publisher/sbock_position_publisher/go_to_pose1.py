import rclpy
# importamos las librerias ROS2 de python 
from rclpy.node import Node
# importamos los mensajes tipo Twist
from geometry_msgs.msg import Pose

# creamos una clase pasándole como parámetro el Nodo
class GoToPos(Node):
    '''
    Nodo que publica en el topic /cmd_vel la posicion a la que se debe dirigir el robot

    Atributes:
        self.goal_pose_publisher: Publicador
    '''
    def __init__(self):
        super().__init__('pos_publisher')
        # creamos el objeto publisher
        # que publicara en el topic /cmd_vel 
        # la cola del topic es de 10 mensajes
        self.goal_pose_publisher = self.create_publisher(Pose, 'pose', 100)
        self.publish_pos()
    
    def publish_pos(self):
        '''
        Metodo que crea un objeto de tipo Pose y lo publica
        '''
        pose = Pose()
        pose.position.x = -0.2
        pose.position.y = 1.1
        pose.orientation.w = 1.0

        self.goal_pose_publisher.publish(pose)
        exit(0)
        
        
            
def main(args=None):
    # inicializa la comunicación
    rclpy.init(args=args)
    # declara el constructor del nodo 
    GoToPos()

if __name__ == '__main__':
    main()
