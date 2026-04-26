from setuptools import find_packages
from setuptools import setup

setup(
    name='rm_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('rm_interfaces', 'rm_interfaces.*')),
)
