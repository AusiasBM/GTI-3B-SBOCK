from setuptools import setup
import os 
from glob import glob

package_name = 'sbock_position_publisher'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='aibes',
    maintainer_email='aibes1001@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	'position1_publisher = sbock_position_publisher.go_to_pose1:main',
        	'position2_publisher = sbock_position_publisher.go_to_pose2:main',
        	'position3_publisher = sbock_position_publisher.go_to_pose3:main',
        ],
    },
)
