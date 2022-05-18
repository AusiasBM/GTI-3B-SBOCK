PACKAGE SBOCK_NAV_POSITION

Description:
Paquete para la navegación autónoma del robot. Consta de los siguientes ficheros
de lanzamiento:
	-sbock_tb3_sim_nav2.launch.py:  fichero para lanzar el entorno con el
	área de navegación.
	-sbock_initial_pose.launch.py:  fichero lanzar el robot a su posición
	inicial a través del fichero initial_pose_pub.py.
	-sbock_nav_to_pose.launch.py: fichero para lanzar una subscripción
	donde recibirá el punto a donde se debe dirigir a través del script
	nav_to_pose.py. 


Exports:

	Para robot real:
	export ROS_DOMAIN_ID=20

	Para ejecutar mundo:
	export GAZEBO_MODEL_PATH=$HOME/GTI-3B-SBOCK/turtlebot3_ws/src/sbock/sbock_my_world/models
	

Arrancar navegación:

Terminal 1:
ros2 launch sbock_nav_position sbock_tb3_sim_nav2.launch.py 
-si da error:
 cd GTI-3B-SBOCK/turtlebot3_ws
 source install/setup.bash

Terminal2:
ros2 launch sbock_nav_position sbock_nav_to_pose.launch.py 
-si da error:
 cd GTI-3B-SBOCK/turtlebot3_ws
 source install/setup.bash

Terminal 3:
ros2 launch sbock_position_publisher go_to_pose1.launch.py
ros2 launch sbock_position_publisher go_to_pose2.launch.py
ros2 launch sbock_position_publisher go_to_pose3.launch.py
-si da error:
 cd GTI-3B-SBOCK/turtlebot3_ws
 source install/setup.bash


