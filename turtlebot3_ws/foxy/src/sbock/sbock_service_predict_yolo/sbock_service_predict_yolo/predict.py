#! /usr/bin/env python

import sys
import rclpy
from rclpy.node import Node
from sbock_custom_interface.srv import Predict


import time
from absl import app, flags, logging
from absl.flags import FLAGS
import numpy as np
import tensorflow as tf
from .models import (
    YoloV3, YoloV3Tiny
)
from .dataset import transform_images, load_tfrecord_dataset
from .utils import draw_outputs


flags.DEFINE_string('classes', './data/new_names.names', 'path to classes file')
flags.DEFINE_string('classes_yolo', './data/coco.names', 'path to classes file')
flags.DEFINE_string('weights', './checkpoints/yolov3_train_44.tf','path to weights file')
flags.DEFINE_string('weights_yolo', './checkpoints/yolov3.tf','path to weights file')
flags.DEFINE_boolean('tiny', False, 'yolov3 or yolov3-tiny')
flags.DEFINE_integer('size', 416, 'resize images to')
flags.DEFINE_string('image', '../../sbock_web_ws/public/app/imgs/img.jpg', 'path to input image')
flags.DEFINE_string('tfrecord', None, 'tfrecord instead of image')
flags.DEFINE_string('output', './../sbock_web_ws/public/app/imgs/output.jpg', 'path to output image')
flags.DEFINE_integer('num_classes', 1, 'number of classes in the model')
flags.DEFINE_integer('num_classes_yolo', 80, 'number of classes in the model')


class Predict_Service(Node):


    def __init__(self):
        super().__init__('predict_yolo_server')
        
        
        self.srv = self.create_service(Predict, 'predict_yolo', self.callback_predict)
        

    
    def callback_predict(self, request, response):

        #Comprovar si detecta algo amb el model entrenat
        count_objects_trained, clase = self.predict_yolo_class(FLAGS.weights, FLAGS.classes, FLAGS.num_classes)

        #Comprovar si detecta algo amb el model de YOLO
        count_yolo_trained, clase = self.predict_yolo_class(FLAGS.weights_yolo, FLAGS.classes_yolo, FLAGS.num_classes_yolo)

        if count_objects_trained > 0:
            response.num_objetos = count_objects_trained
            response.clase = clase
            response.success = True
        elif count_yolo_trained > 0:
            response.num_objetos = count_yolo_trained
            response.clase = clase
            response.success = True
        else:
            response.num_objetos = 0
            response.success = False

        return response


    def predict_yolo_class(self, weights, classes_model, num_classes):
        physical_devices = tf.config.experimental.list_physical_devices('GPU')
        if len(physical_devices) > 0:
            tf.config.experimental.set_memory_growth(physical_devices[0], True)

        if FLAGS.tiny:
            yolo = YoloV3Tiny(classes=num_classes)
        else:
            yolo = YoloV3(classes=num_classes)

        yolo.load_weights(weights).expect_partial()
        self.get_logger().info('weights loaded')

        class_names = [c.strip() for c in open(classes_model).readlines()]
        self.get_logger().info('classes loaded')

        if FLAGS.tfrecord:
            dataset = load_tfrecord_dataset(
                FLAGS.tfrecord, classes_model, FLAGS.size)
            dataset = dataset.shuffle(512)
            img_raw, _label = next(iter(dataset.take(1)))
        else:
            img_raw = tf.image.decode_image(
                open(FLAGS.image, 'rb').read(), channels=3)

        img = tf.expand_dims(img_raw, 0)
        img = transform_images(img, FLAGS.size)

        t1 = time.time()
        boxes, scores, classes, nums = yolo(img)
        t2 = time.time()
        self.get_logger().info('time: {}'.format(t2 - t1))

        count = 0
        tipo_producto = ''

        self.get_logger().info('detections:')
        for i in range(nums[0]):
            count += 1
            tipo_producto = class_names[int(classes[0][i])]
            self.get_logger().info('\t{}, {}, {}'.format(class_names[int(classes[0][i])],
                                            np.array(scores[0][i]),
                                            np.array(boxes[0][i])))

        img = cv2.cvtColor(img_raw.numpy(), cv2.COLOR_RGB2BGR)
        img = draw_outputs(img, (boxes, scores, classes, nums), class_names)

        if count > 0:
            cv2.imwrite(FLAGS.output, img)
        
        return count, tipo_producto




def main(args=None):
    # inicializa la comunicacion ROS2
    rclpy.init(args=args)
    # creamos el nodo
    service = Predict_Service()
    
    try:
        #dejamos abierto el servicio
        rclpy.spin(service)
    except KeyboardInterrupt:
        service.get_logger().info('Cerrando el nodo service')
    finally:
        #destruimos el nodo
        service.destroy_node()
        #cerramos la comunicacion
        rclpy.shutdown()

#definimos el ejecutable
if __name__=='__main__':
    main()
