import os
import sys
import yaml
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import Command


def generate_launch_description():

    from launch_ros.descriptions import ComposableNode
    from launch_ros.actions import ComposableNodeContainer, Node, PushRosNamespace
    from launch.actions import TimerAction
    from launch import LaunchDescription

    # Load common launch params so user can reuse the same config
    launch_params = yaml.safe_load(open(os.path.join(
        get_package_share_directory('rm_bringup'), 'config', 'launch_params.yaml')))

    # robot/gimbal description (publish TF needed by armor_detector/solver)
    robot_gimbal_description = Command(['xacro ', os.path.join(
        get_package_share_directory('rm_robot_description'), 'urdf', 'rm_gimbal.urdf.xacro'),
        ' xyz:=', launch_params['odom2camera']['xyz'], ' rpy:=', launch_params['odom2camera']['rpy']])

    robot_gimbal_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_gimbal_description, 'publish_frequency': 1000.0}]
    )

    def get_params(name):
        return os.path.join(get_package_share_directory('rm_bringup'), 'config', 'node_params', '{}_params.yaml'.format(name))

    # Image node (video player or camera driver) as a composable node
    if launch_params.get('video_play', True):
        image_node = ComposableNode(
            package='rm_camera_driver',
            plugin='fyt::camera_driver::VideoPlayerNode',
            name='video_player',
            parameters=[get_params('video_player')],
            extra_arguments=[{'use_intra_process_comms': True}]
        )
    else:
        image_node = ComposableNode(
            package='rm_camera_driver',
            plugin='fyt::camera_driver::DahengCameraNode',
            name='camera_driver',
            parameters=[get_params('camera_driver')],
            extra_arguments=[{'use_intra_process_comms': True}]
        )

    # Armor detector as composable node
    armor_detector_node = ComposableNode(
        package='armor_detector',
        plugin='fyt::auto_aim::ArmorDetectorNode',
        name='armor_detector',
        parameters=[get_params('armor_detector')],
        extra_arguments=[{'use_intra_process_comms': True}]
    )

    # Container with image + detector for intra-process communication
    container = ComposableNodeContainer(
        name='camera_detector_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container_mt',
        composable_node_descriptions=[image_node, armor_detector_node],
        output='both',
        emulate_tty=True,
    )

    # Serial driver (virtual or real)
    if launch_params.get('virtual_serial', True):
        serial_driver_node = Node(
            package='rm_serial_driver',
            executable='virtual_serial_node',
            name='virtual_serial',
            output='both',
            emulate_tty=True,
            parameters=[get_params('virtual_serial')],
            ros_arguments=['--ros-args', '-p', 'has_rune:=false'],
        )
    else:
        serial_driver_node = Node(
            package='rm_serial_driver',
            executable='rm_serial_driver_node',
            name='serial_driver',
            output='both',
            emulate_tty=True,
            parameters=[get_params('serial_driver')],
        )

    # Armor solver node
    armor_solver_node = Node(
        package='armor_solver',
        executable='armor_solver_node',
        name='armor_solver',
        output='both',
        emulate_tty=True,
        parameters=[get_params('armor_solver')],
    )

    # Small delays to avoid race conditions on startup
    delay_serial_node = TimerAction(period=1.0, actions=[serial_driver_node])
    delay_container = TimerAction(period=1.5, actions=[container])
    delay_armor_solver_node = TimerAction(period=2.0, actions=[armor_solver_node])

    push_namespace = PushRosNamespace(launch_params.get('namespace', ''))

    ld = [robot_gimbal_publisher, push_namespace, delay_serial_node, delay_container, delay_armor_solver_node]

    return LaunchDescription(ld)
