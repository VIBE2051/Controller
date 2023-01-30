import rclpy
from rclpy.node import Node
from controller_interface.msg import Control

class Xbox_subscriber(Node):
    def __init__(self):
        super().__init__('Xbox_Subscriber')
        self.subscription = self.create_subscription(Control, 'topic', self.listener_callback, 10)
        self.subscription

    def listener_callback(self, msg):
        self.get_logger().info('I heard: %f, %f, %d, %d, %d' % msg.y, msg.x, msg.a_button, msg.b_button, msg.bumper_right)

def main(args=None):
    rclpy.init(args=args)

    subscriber = Xbox_subscriber()

    rclpy.spin(subscriber)
    subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == 'main':
    main()