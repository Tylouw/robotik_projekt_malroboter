from setuptools import setup

package_name = 'move_it_service_python'

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
    maintainer='prakt3',
    maintainer_email='prakt3@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [ 'service = move_it_service_python.move_it_service:main',
        'spirale = move_it_service_python.ex_pose_goal_ur:main',
        'ralf = move_it_service_python.get_matrices:main',
        'tf = move_it_service_python.tf_service:main',
        'collision_object = move_it_service_python.add_collision_objects:main',
        ],
    },
)
