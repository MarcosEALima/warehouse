import math 
import numpy as np 
import rclpy 
from time import sleep 
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


class Controller(Node):
    def __init__(self):
        super().__init__('Controller')
        #Este nó assina mensagens do tipo Float64MultiArray no tópico chamado: /demo/state_est
        #A mensagem representa o estado estimado atual:[x, y, yaw]
        #A função de retorno de chamada é invocada assim que uma mensagem é recebida.

        self.subscription = self.create_subscription(
                            Float64MultiArray,
                            '/demo/state_est',
                            self.state_estimate_callback,
                            10)
        self.subscription 
  
        self.scan_subscriber = self.create_subscription(
                               LaserScan,
                               '/demo/laser/out',
                               self.scan_callback,
                               qos_profile=qos_profile_sensor_data)
                                
        #Este nó publica a velocidade linear e angular desejada do robô 
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

        #Velocidade máxima do robô m/s
        self.forward_speed = 0.01

        #Posição e orientação atual do robô global
        self.current_x = 0.0
        self.current_y = 0.0
        self.current_yaw = 0.0

        #Modo de seguimento de parede inicial
        self.wall_following_state = "turn left"
             
        #configura velocidades de virada (para a esquerda) em rad/s 
        self.turning_speed_wf_fast = 1.5  # Virada rápida
        self.turning_speed_wf_slow = 0.02 # Virada lenta

        #Distância de seguimento da parede.
        self.dist_thresh_wf = 0.70#em metros

        #Limite do quão perto da parede o robô pode chegar.
        self.dist_too_close_to_wall = 0.3 #em metros

    def state_estimate_callback(self, msg):
        #Atualiza o estado estimado atual no quadro de referência global
        curr_state = msg.data
        self.current_x = curr_state[0]
        self.current_y = curr_state[1]
        self.current_yaw = curr_state[2]
        
        self.follow_wall()

    def scan_callback(self, msg):
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

    def follow_wall(self)
        # Cria uma mensagem geometry_msgs/Twist
        msg = Twist()
        msg.linear.x = 0.0
        msg.linear.y = 0.0
        msg.linear.z = 0.0
        msg.angular.x = 0.0
        msg.angular.y = 0.0
        msg.angular.z = 0.0

        d = self.dist_thresh_wf

        # >d significa que nenhuma parede foi detectada por aquele feixe de laser
        # <d significa que uma parede foi detectada por aquele feixe de laser
        
        #"turn left": Robô vira para a esquerda
        #"search for wall": Robô tenta localizar a parede
        #"follow wall": Robô se move paralelamente à parede

        if self.leftfront_dist > d and self.front_dist > d and self.rightfront_dist > d:
          self.wall_following_state = "search for wall"
          msg.linear.x = self.forward_speed
          msg.angular.z = -self.turning_speed_wf_slow # turn right to find wall
     
        elif self.leftfront_dist > d and self.front_dist < d and self.rightfront_dist > d:
          self.wall_following_state = "turn left"
          msg.angular.z = self.turning_speed_wf_fast
     
        elif (self.leftfront_dist > d and self.front_dist > d and self.rightfront_dist < d):
          if (self.rightfront_dist < self.dist_too_close_to_wall):
              
            self.wall_following_state = "turn left"
            msg.linear.x = self.forward_speed
            msg.angular.z = self.turning_speed_wf_fast    
              
          else:        
            self.wall_following_state = "follow wall" 
            msg.linear.x = self.forward_speed   
     
        elif self.leftfront_dist < d and self.front_dist > d and self.rightfront_dist > d:
          self.wall_following_state = "search for wall"
          msg.linear.x = self.forward_speed
          msg.angular.z = -self.turning_speed_wf_slow 
     
        elif self.leftfront_dist > d and self.front_dist < d and self.rightfront_dist < d:
          self.wall_following_state = "turn left"
          msg.angular.z = self.turning_speed_wf_fast
     
        elif self.leftfront_dist < d and self.front_dist < d and self.rightfront_dist > d:
          self.wall_following_state = "turn left"
          msg.angular.z = self.turning_speed_wf_fast
     
        elif self.leftfront_dist < d and self.front_dist < d and self.rightfront_dist < d:
          self.wall_following_state = "turn left"
          msg.angular.z = self.turning_speed_wf_fast
                 
        elif self.leftfront_dist < d and self.front_dist > d and self.rightfront_dist < d:
          self.wall_following_state = "search for wall"
          msg.linear.x = self.forward_speed
          msg.angular.z = -self.turning_speed_wf_slow 
         
        else:
          pass
            
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    controller = Controller()
    rclpy.spin(controller)
    controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
