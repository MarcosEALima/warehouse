from setuptools import find_packages
from setuptools import setup

setup(
    name='tf2_geometry_msgs',
    version='0.33.2',
    packages=find_packages(
        include=('tf2_geometry_msgs', 'tf2_geometry_msgs.*')),
)
