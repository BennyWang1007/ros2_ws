from setuptools import find_packages
from setuptools import setup

setup(
    name='system_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('system_interfaces', 'system_interfaces.*')),
)
