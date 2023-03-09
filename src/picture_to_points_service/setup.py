from setuptools import setup

package_name = 'picture_to_points_service'

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
        'console_scripts': ['service = picture_to_points_service.service_member_function:main',
        'client = picture_to_points_service.client_member_function:main',
        ],
    },
)
