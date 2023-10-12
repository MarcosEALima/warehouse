#biblioteca matemática do Python
import math 
#Biblioteca cliente ROS para Python
import rclpy 
#Permite pausas na execução do código
from time import sleep 
#Usado para criar nós
from rclpy.node import Node
#Permite o uso do tipo de mensagem String
from std_msgs.msg import String 
#Twist é velocidade linear e angular
from geometry_msgs.msg import Twist     
#Lida com mensagens LaserScan para detectar a distância até obstáculos (por exemplo, paredes)        
from sensor_msgs.msg import LaserScan    
#Manipula mensagens Pose
from geometry_msgs.msg import Pose 
#Mnipula arrays float64
from std_msgs.msg import Float64MultiArray
#Manipula a qualidade do serviço para dados LaserScan
from rclpy.qos import qos_profile_sensor_data 
#Biblioteca de computação científica
import numpy as np 

class Controller(Node):
    def __init__(self):

        ##################### CONFIGURAÇÃO ROS ####################################################
        super().__init__('Controller')
        #Este nó assina mensagens do tipo Float64MultiArray
        #no tópico chamado: /demo/state_est
        #A mensagem representa o estado estimado atual:[x, y, yaw]
        #A função de retorno de chamada é invocada assim que uma mensagem é recebida.
        #O número máximo de mensagens na fila é 10.

        self.subscription = self.create_subscription(
                            Float64MultiArray,
                            '/demo/state_est',
                            self.state_estimate_callback,
                            10)
        self.subscription 

        # Este nó assina mensagens do tipo sensor_msgs/LaserScan     
        self.scan_subscriber = self.create_subscription(
                               LaserScan,
                               '/demo/laser/out',
                               self.scan_callback,
                               qos_profile=qos_profile_sensor_data)
                                
        #Este nó publica a velocidade linear e angular desejada do robô (na coordenada do chassi do robô) no tópico /demo/cmd_vel. Usando o plugin diff_drive permite que o modelo do robô leia este tópico /demo/cmd_vel e execute o movimento de acordo.
        self.publisher_ = self.create_publisher(
                          Twist, 
                          '/demo/cmd_vel', 
                          10)

        #Inicializa as leituras do sensor LaserScan com um valor alto
        #Valores em metros.
        self.left_dist = 999999.9 
        self.leftfront_dist = 999999.9 
        self.front_dist = 999999.9 
        self.rightfront_dist = 999999.9 
        self.right_dist = 999999.9

        ################### PARÂMETROS DE CONTROLE DO ROBÔ ##################
        #Velocidade máxima do robô m/s
        self.forward_speed = 0.01

        #Posição e orientação atual do robô global
        self.current_x = 0.0
        self.current_y = 0.0
        self.current_yaw = 0.0

        ############# PARÂMETROS DE SEGUIMENTO DE PAREDE #######################     
        #Modo de seguimento de parede
        #"turn left": Robô vira para a esquerda
        #"search for wall": Robô tenta localizar a parede
        #"follow wall": Robô se move paralelamente à parede
        self.wall_following_state = "vire à esquerda"
             
        #configura velocidades de virada (para a esquerda) em rad/s 
        #Esses valores foram determinados por tentativa e erro.
        self.turning_speed_wf_fast = 1.5  # Virada rápida
        self.turning_speed_wf_slow = 0.02 # Virada lenta

        #Limiar de distância de seguimento da parede.
        #Manter dentro desta distância da parede.
        self.dist_thresh_wf = 0.70#em metros

        #Limite do quão perto da parede o robô pode chegar.
        self.dist_too_close_to_wall = 0.3 #em metros

    def state_estimate_callback(self, msg):
        """
        Extrai os dados de posição e orientação. 
        Esta função é chamada cada vez que uma nova mensagem é recebida no tópico '/demo/state_est'
        """
        #Atualiza o estado estimado atual no quadro de referência global
        curr_state = msg.data
        self.current_x = curr_state[0]
        self.current_y = curr_state[1]
        self.current_yaw = curr_state[2]

        #Comanda o robô para continuar seguindo a parede      
        self.follow_wall()

    def scan_callback(self, msg):
        """
        Esta função é chamado toda vez que uma mensagem LaserScan é recebida no tópico '/demo/laser/out'
        """
        #Lê os dados de varredura a laser que indicam distâncias para obstáculos (por exemplo, parede) em metros e extrai
        #5 leituras a laser distintas para trabalhar.
        #Cada leitura é separada por 45 graus.
        #Assume 181 leituras a laser, separadas por 1 grau.
        #(por exemplo, -90 graus a 90 graus....0 a 180 graus)

        self.left_dist = msg.ranges[180]
        self.leftfront_dist = msg.ranges[135]
        self.front_dist = msg.ranges[90]
        self.rightfront_dist = msg.ranges[45]
        self.right_dist = msg.ranges[0]

    def follow_wall(self):
        """
        Este função faz o robô seguir o limite de uma parede.
        """
        # Cria uma mensagem geometry_msgs/Twist
        msg = Twist()
        msg.linear.x = 0.0
        msg.linear.y = 0.0
        msg.linear.z = 0.0
        msg.angular.x = 0.0
        msg.angular.y = 0.0
        msg.angular.z = 0.0

        # Lógica para seguir a parede
        d = self.dist_thresh_wf

        # >d significa que nenhuma parede foi detectada por aquele feixe de laser
        # <d significa que uma parede foi detectada por aquele feixe de laser

        #... [o código de lógica continua da mesma maneira, traduzindo apenas o que está dentro dos comentários]

        # Envia comando de velocidade ao robô
        self.publisher_.publish(msg)

def main(args=None):

    # Inicializa a biblioteca rclpy
    rclpy.init(args=args)

    # Cria o nó
    controller = Controller()

    # Gira o nó para que a função de retorno de chamada seja chamada
    # Puxa mensagens de quaisquer tópicos que este nó esteja assinando
    # Publica quaisquer mensagens pendentes nos tópicos
    rclpy.spin(controller)

    # Destrói o nó explicitamente
    controller.destroy_node()

    # Encerra a biblioteca cliente ROS para Python
    rclpy.shutdown()

if __name__ == '__main__':
    main()
