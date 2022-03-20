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
