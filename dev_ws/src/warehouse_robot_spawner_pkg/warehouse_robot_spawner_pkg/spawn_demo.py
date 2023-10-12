"""
Nó ROS 2 para gerar um robô móvel dentro de um armazém.

Autor:
  - Addison Sears-Collins
  - https://automaticaddison.com
"""
import os # Biblioteca do sistema operacional
import sys # Biblioteca do ambiente de execução do Python
import rclpy # Biblioteca de Cliente ROS para Python

# Biblioteca de Gerenciamento de Pacotes
from ament_index_python.packages import get_package_share_directory 

# Serviço do Gazebo para gerar um robô
from gazebo_msgs.srv import SpawnEntity

def main():

    """ Principal para gerar um nó de robô """
    # Obter argumentos de entrada do usuário
    argv = sys.argv[1:]

    # Iniciar nó
    rclpy.init()

    # Obter o caminho do arquivo para o modelo do robô
    sdf_file_path = os.path.join(
        get_package_share_directory("warehouse_robot_spawner_pkg"), "models",
        "mobile_warehouse_robot", "model.sdf")
        
    # Criar o nó
    node = rclpy.create_node("entity_spawner")

    # Mostrar progresso na janela do terminal
    node.get_logger().info(
        'Criando cliente de serviço para conectar a `/spawn_entity`')
    client = node.create_client(SpawnEntity, "/spawn_entity")

    # Obter o serviço spawn_entity
    node.get_logger().info("Conectando ao serviço `/spawn_entity`...")
    if not client.service_is_ready():
        client.wait_for_service()
        node.get_logger().info("...conectado!")

    # Obter caminho para o robô
    sdf_file_path = os.path.join(
        get_package_share_directory("warehouse_robot_spawner_pkg"), "models",
        "mobile_warehouse_robot", "model.sdf")

    # Mostrar caminho do arquivo
    print(f"robot_sdf={sdf_file_path}")
    
    # Definir dados para solicitação
    request = SpawnEntity.Request()
    request.name = argv[0]
    request.xml = open(sdf_file_path, 'r').read()
    request.robot_namespace = argv[1]
    request.initial_pose.position.x = float(argv[2])
    request.initial_pose.position.y = float(argv[3])
    request.initial_pose.position.z = float(argv[4])

    node.get_logger().info("Enviando solicitação de serviço para `/spawn_entity`")
    future = client.call_async(request)
    rclpy.spin_until_future_complete(node, future)
    if future.result() is not None:
        print('resposta: %r' % future.result())
    else:
        raise RuntimeError(
            'exceção ao chamar o serviço: %r' % future.exception())

    node.get_logger().info("Pronto! Encerrando o nó.")
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

