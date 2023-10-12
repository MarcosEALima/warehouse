# Versão ROS: ROS 2 Iron

# Biblioteca matemática do Python
import math
 
# Biblioteca cliente ROS para Python
import rclpy
 
# Usado para criar nós
from rclpy.node import Node
 
# Twist é velocidade linear e angular
from geometry_msgs.msg import Twist
 
# Posição, orientação, velocidade linear, velocidade angular
from nav_msgs.msg import Odometry
 
# Manipula varredura a laser para detectar obstáculos
from sensor_msgs.msg import LaserScan
 
# Usado para varredura a laser
from rclpy.qos import qos_profile_sensor_data
 
# Permite o uso da mensagem std_msgs/Float64MultiArray
from std_msgs.msg import Float64MultiArray
 
# Biblioteca de computação científica para Python
import numpy as np

class Estimator(Node):
    """
    Construtor da classe para configurar o nó
    """
    def __init__(self):

        ############## INICIALIZA PUBLICADORES E ASSINANTES ROS ######
        super().__init__('Estimator')

        # Cria um assinante
        # Este nó assina mensagens do tipo
        # nav_msgs/Odometry (ou seja, posição e orientação do robô)
        self.odom_subscriber = self.create_subscription(
                                Odometry,
                                '/demo/odom',
                                self.odom_callback,
                                10)

        # Cria um assinante
        # Este nó assina mensagens do tipo 
        # geometry_msgs/Twist.msg. Estamos ouvindo os comandos de velocidade aqui.
        # O número máximo de mensagens na fila é 10.
        self.velocity_subscriber = self.create_subscription(
                                    Twist,
                                    '/demo/cmd_vel',
                                    self.velocity_callback,
                                    10)

        # Cria um publicador
        # Este nó publica a posição estimada (x, y, yaw)
        # O tipo de mensagem é std_msgs/Float64MultiArray
        self.publisher_state_est = self.create_publisher(
                                    Float64MultiArray, 
                                    '/demo/state_est', 
                                    10)

    def odom_callback(self, msg):
        """
        Recebe as informações de odometria contendo a posição e orientação
        do robô no quadro de referência global.
        A posição é x, y, z.
        A orientação é um quaternion x,y,z,w.
        """
        roll, pitch, yaw = self.euler_from_quaternion(
            msg.pose.pose.orientation.x,
            msg.pose.pose.orientation.y,
            msg.pose.pose.orientation.z,
            msg.pose.pose.orientation.w)

        obs_state_vector_x_y_yaw = [msg.pose.pose.position.x,msg.pose.pose.position.y,yaw]

        # Publica o estado estimado (posição x, posição y, ângulo yaw)
        self.publish_estimated_state(obs_state_vector_x_y_yaw)

    def publish_estimated_state(self, state_vector_x_y_yaw):
        """
        Publica a pose estimada (posição e orientação) do 
        robô no tópico '/demo/state_est'.
        :param: state_vector_x_y_yaw [x, y, yaw] 
        x está em metros, y está em metros, yaw está em radianos
        """
        msg = Float64MultiArray()
        msg.data = state_vector_x_y_yaw
        self.publisher_state_est.publish(msg)

    def euler_from_quaternion(self, x, y, z, w):
        """
        Converte um quaternion em ângulos euler (roll, pitch, yaw)
        roll é a rotação em torno de x em radianos (sentido anti-horário)
        pitch é a rotação em torno de y em radianos (sentido anti-horário)
        yaw é a rotação em torno de z em radianos (sentido anti-horário)
        """
        t0 = +2.0 * (w * x + y * z)
        t1 = +1.0 - 2.0 * (x * x + y * y)
        roll_x = math.atan2(t0, t1)

        t2 = +2.0 * (w * y - z * x)
        t2 = +1.0 if t2 > +1.0 else t2
        t2 = -1.0 if t2 < -1.0 else t2
        pitch_y = math.asin(t2)

        t3 = +2.0 * (w * z + x * y)
        t4 = +1.0 - 2.0 * (y * y + z * z)
        yaw_z = math.atan2(t3, t4)

        return roll_x, pitch_y, yaw_z # em radianos

    def velocity_callback(self, msg):
        """
        Escuta os comandos de velocidade (velocidade linear 
        na direção x no quadro de referência do robô e 
        velocidade angular (taxa de yaw) em torno do eixo z do robô.
        [v,taxa_yaw]
        [metros/segundo, radianos/segundo]
        """
        v = msg.linear.x

        yaw_rate = msg.angular.z

def main(args=None):
    """
    Ponto de entrada para o programa.
    """
    # Inicializa a biblioteca rclpy
    rclpy.init(args=args)

    # Cria o nó
    estimator = Estimator()

    # Gira o nó para que a função de retorno de chamada seja chamada.
    # Puxa mensagens de quaisquer tópicos que este nó esteja assinando.
    # Publica quaisquer mensagens pendentes nos tópicos.
    rclpy.spin(estimator)

    # Destrói o nó explicitamente
    estimator.destroy_node()

    # Encerra a biblioteca cliente ROS para Python
    rclpy.shutdown()

if __name__ == '__main__':
    main()
