from setuptools import setup
import os 
from glob import glob 

package_name = 'sbock_my_nav2_system'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'config'), glob('config/*.pgm')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
        (os.path.join('share', package_name, 'config'), glob('config/*.rviz')),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),  
        (os.path.join('share', package_name, 'config'), glob('config/*.lua')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')), 
        (os.path.join('share', package_name, 'config'), glob('config/*.xml')) 
        
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='pmarbar1@epsg.upv.es',
    maintainer_email='pmarbar1@epsg.upv.es@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'initialPose = sbock_my_nav2_system.initialPose:main',
            'nav_to_pose = sbock_my_nav2_system.nav_to_pose:main',
        ],
    },
)
