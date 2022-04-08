from setuptools import setup
import os #incluir
from glob import glob #incluir

package_name = 'sbock_my_first_service'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')) #incluir
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='pere',
    maintainer_email='perette93@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'movement_server = sbock_my_first_service.movement_server:main', #incluir
            'movement_client = sbock_my_first_service.movement_client:main'
        ],
    },
)
