from setuptools import find_packages
from setuptools import setup

setup(
    name='crs_ros2_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('crs_ros2_interfaces', 'crs_ros2_interfaces.*')),
)
