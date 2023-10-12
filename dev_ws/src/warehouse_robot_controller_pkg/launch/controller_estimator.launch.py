import os
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # Esta função retorna uma descrição de lançamento contendo os nós a serem executados.

    return LaunchDescription([
        # Cria um nó do pacote 'warehouse_robot_controller_pkg' com o executável 'robot_controller'
        # e exibe sua saída na tela.
        Node(package='warehouse_robot_controller_pkg', executable='robot_controller',
            output='screen'),

        # Cria um nó do pacote 'warehouse_robot_controller_pkg' com o executável 'robot_estimator'
        # e exibe sua saída na tela.
        Node(package='warehouse_robot_controller_pkg', executable='robot_estimator',
            output='screen'),
    ])

