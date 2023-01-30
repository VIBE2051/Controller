from setuptools import setup

package_name = 'xbox_control'

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
    maintainer='cisco',
    maintainer_email='ejorquera2051@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'xbox_pub = xbox_control.xbox_pub:main',
            'xbox_sub = xbox_control.xbox_sub:main',
        ],
    },
)
