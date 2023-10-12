Versão do ROS 2 Iron

Digite os seguintes comandos para compilar no diretorio ~/dev_ws/

source /opt/ros/iron/setup.bash
source install/setup.bash
colcon build 

Digite os seguintes comandos para rodar a simulação no gazebo no diretorio ~/dev_ws/

ros2 launch warehouse_robot_spawner_pkg gazebo_world.launch.py
ros2 launch warehouse_robot_controller_pkg controller_estimator.launch.py
