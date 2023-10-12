from setuptools import find_packages
from setuptools import setup

setup(
    name='test_bond',
    version='4.0.0',
    packages=find_packages(
        include=('test_bond', 'test_bond.*')),
)
