from setuptools import find_packages
from setuptools import setup

setup(
    name='as2_platform_crazyflie',
    version='1.1.0',
    packages=find_packages(
        include=('as2_platform_crazyflie', 'as2_platform_crazyflie.*')),
)
