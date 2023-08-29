import rclpy
from rclpy.node import Node
import time
from geometry_msgs.msg import Twist

class controller(Node):

    def __init__(self):
        super().__init__('controller') #node name
        self.get_logger().info('controller node started')
        self.state_pub = self.create_publisher(Twist , '/diffbot_base_controller/cmd_vel_unstamped', 10)

        self.state_msg = Twist()

        self.declare_parameters(
            namespace='',
            parameters=[('dt', 0.01),
                        ('linear_x',2.0),
                        ('linear_y',0.0),
                        ('linear_z',0.0),
                        ('angular_x',0.0),
                        ('angular_y',0.0),
                        ('angular_z',0.0),
                        ])

        time.sleep(5)
        
        self.linear_x = self.get_parameter('linear_x').get_parameter_value().double_value
        self.linear_y = self.get_parameter('linear_y').get_parameter_value().double_value
        self.linear_z = self.get_parameter('linear_z').get_parameter_value().double_value
        self.angular_x = self.get_parameter('angular_x').get_parameter_value().double_value
        self.angular_y = self.get_parameter('angular_y').get_parameter_value().double_value
        self.angular_z = self.get_parameter('angular_z').get_parameter_value().double_value
        self.dt = self.get_parameter('dt').get_parameter_value().double_value

        self.timer = self.create_timer(1.0, self.step)

    
    def match(self):
        self.state_msg.linear.x = self.linear_x
        self.state_msg.linear.y = self.linear_y
        self.state_msg.linear.z = self.linear_z
        self.state_msg.angular.x = self.angular_x
        self.state_msg.angular.y = self.angular_y
        self.state_msg.angular.z = self.angular_z
    
    def pub(self):
        self.state_pub.publish(self.state_msg)
    
    def step(self):
        self.match()
        self.pub()
        
def main(args=None):
    rclpy.init(args=args)
    movment = controller()
    rclpy.spin(movment)
    rclpy.shutdown()

if __name__ == '__main__':
    main()