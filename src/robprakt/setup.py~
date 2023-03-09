from setuptools import setup

package_name = 'robprakt'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rob',
    maintainer_email='bruder@rob.uni-luebeck.de',
    description='Package and node for vacuum gripper control',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'vacuum_control = robprakt.vacuum_control:main',
        ],
    },
)
