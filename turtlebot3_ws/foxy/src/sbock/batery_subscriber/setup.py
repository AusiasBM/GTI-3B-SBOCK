from setuptools import setup
import os #incluir
from glob import glob #incluir
package_name = 'batery_subscriber'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='natxo',
    maintainer_email='natxetgarcia@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'batery_simple_suscriber = batery_subscriber.batery_simple_suscriber:main' #incluir
        ],
    },
)
