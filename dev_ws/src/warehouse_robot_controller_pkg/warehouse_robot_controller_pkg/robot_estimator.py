import math
import numpy as np
import rclpy
from rclpy.node import Node
#Twist é velocidade linear e angular
from geometry_msgs.msg import Twist
#Posição, orientação, velocidade linear, velocidade angular
from nav_msgs.msg import Odometry
#Manipula varredura a laser para detectar obstáculos
from sensor_msgs.msg import LaserScan
#Usado para varredura a laser
from rclpy.qos import qos_profile_sensor_data
#Permite o uso da mensagem std_msgs/Float64MultiArray
from std_msgs.msg import Float64MultiArray
#Biblioteca de computação científica para Python

class Estimator(Node):
    def __init__(self):
        super().__init__('Estimator')

        self.odom_subscriber = self.create_subscription(
                                Odometry,
                                '/demo/odom',
                                self.odom_callback,
                                10)

        self.velocity_subscriber = self.create_subscription(
                                    Twist,
                                    '/demo/cmd_vel',
                                    self.velocity_callback,
                                    10)

        self.publisher_state_est = self.create_publisher(
                                    Float64MultiArray, 
                                    '/demo/state_est', 
                                    10)

    def odom_callback(self, msg):
        """
        Recebe as informações de odometria contendo a posição e orientação do robô no quadro de referência global.
        A posição é x, y, z.
        A orientação é um quaternion x,y,z,w.
        """
        roll, pitch, yaw = self.euler_from_quaternion(
            msg.pose.pose.orientation.x,
            msg.pose.pose.orientation.y,
            msg.pose.pose.orientation.z,
            msg.pose.pose.orientation.w)

        obs_state_vector_x_y_yaw = [msg.pose.pose.position.x,msg.pose.pose.position.y,yaw]
        self.publish_estimated_state(obs_state_vector_x_y_yaw)

    def publish_estimated_state(self, state_vector_x_y_yaw):
        """
        Publica a pose estimada (posição e orientação) do robô no tópico '/demo/state_est'.
        x em metros, y em metros, yaw em radianos
        """
        msg = Float64MultiArray()
        msg.data = state_vector_x_y_yaw
        self.publisher_state_est.publish(msg)

    def euler_from_quaternion(self, x, y, z, w):
        """
        Converte um quaternion em ângulos euler (roll, pitch, yaw))
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
        Escuta os comandos de velocidade (velocidade linear na direção x no quadro de referência do robô e velocidade angular (taxa de yaw) em torno do eixo z do robô.
        """
        v = msg.linear.x
        yaw_rate = msg.angular.z

def main(args=None):
    rclpy.init(args=args)
    estimator = Estimator()
    rclpy.spin(estimator)
    estimator.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
