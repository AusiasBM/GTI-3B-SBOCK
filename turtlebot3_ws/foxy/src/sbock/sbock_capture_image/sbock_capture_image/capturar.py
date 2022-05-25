import rclpy
import cv2
import numpy as np
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image
from rclpy.node import Node
from rclpy.qos import ReliabilityPolicy, QoSProfile

class Ros2OpenCVImageConverter(Node):   

    def __init__(self):

        super().__init__('Ros2OpenCVImageConverter')
        
        self.bridge_object = CvBridge()
        self.image_sub = self.create_subscription(Image,'/image',self.camera_callback,QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))
        
    def camera_callback(self,data):

        try:
            # Seleccionamos bgr8 porque es la codificacion de OpenCV por defecto
            cv_image = self.bridge_object.imgmsg_to_cv2(data, desired_encoding="bgr8")
        except CvBridgeError as e:
            print(e)
        
        cv2.imwrite('/home/pere/GTI-3B-SBOCK/sbock_web_ws/public/app/imgs/img.jpg', cv_image)
        cv2.imshow("Imagen capturada", cv_image)
        cv2.waitKey(0) #aprieta una tecla 
        cv2.destroyAllWindows()
        
        #Convertim la imatge a escala de grisos
        gray = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)
        cv2.imshow("Imagen capturada", gray)
        cv2.waitKey(0) #aprieta una tecla 
        cv2.destroyAllWindows()

        #Apliquem filtre gaussià amb màscara de 11x11
        blur = cv2.GaussianBlur(gray, (11, 11), 0)
        cv2.imshow("Imagen capturada", blur)
        cv2.waitKey(0) #aprieta una tecla 
        cv2.destroyAllWindows()

        #Apliquem umbralització de la imatge amb mètode de Otsu
        ret, otsu = cv2.threshold(blur,0,255,cv2.THRESH_BINARY+cv2.THRESH_OTSU)
        cv2.imshow("Imagen capturada", otsu)
        cv2.waitKey(0) #aprieta una tecla 
        cv2.destroyAllWindows()
        
        #Operació d'erosió per a eliminar bordes eixints 
        eroded = cv2.erode(otsu, (1, 1), iterations=30)
        cv2.imshow("Imagen capturada", eroded)
        cv2.waitKey(0) #aprieta una tecla 
        cv2.destroyAllWindows()

        #Operació dilate per a rellenar huecos en els bordes
        dilated = cv2.dilate(eroded, (1, 1), iterations=20)
        cv2.imshow("Imagen capturada", dilated)
        cv2.waitKey(0) #aprieta una tecla 
        cv2.destroyAllWindows()

        #Apliquem detector de bordes de Canny
        canny = cv2.Canny(dilated, 70, 100)
        
        cv2.imshow("Imagen capturada", canny)
        cv2.waitKey(0) #aprieta una tecla 
        cv2.destroyAllWindows()
        
        #Comptabilitzem bordes per a determinar el nº de objectes
        (cnt, hierarchy) = cv2.findContours(
            canny.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
        
        #Dibuixem els bordes i mostrem la imatge a color captada amb els bordes detectats
        rgb = cv2.cvtColor(cv_image, cv2.COLOR_BGR2RGB)
        cv2.drawContours(rgb, cnt, -1, (0, 255, 0), 2)

        cv2.imshow("My Image",rgb)
        cv2.waitKey(0)
        cv2.destroyAllWindows()
 

        self.get_logger().info("Objetos detectados: " + str(len(cnt)))


def main(args=None):

    rclpy.init(args=args)    
    img_converter_object = Ros2OpenCVImageConverter()    
       
    try:
        #rclpy.spin(img_converter_object)
        rclpy.spin_once(img_converter_object)
    except KeyboardInterrupt:
        img_converter_object.destroy_node()
        print("Fin del programa!")
    
    cv2.destroyAllWindows() 
    

if __name__ == '__main__':
    main()
