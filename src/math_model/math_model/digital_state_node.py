from rclpy.node import Node
import rclpy
from user_defined_interfaces.msg import DigitalState
from math_model.math_model_state import KinematicBikeModel
import numpy as np

class DigitalStateNode(Node):
    def __init__(self):
        super().__init__('digital_state_node')
        self.dt = 0.01  # Time step for the simulation
        self.start_time = self.get_clock().now().nanoseconds / 1e9  # Start time in seconds
        self.bike_model = KinematicBikeModel(a=1.0, b=1.0, T=self.dt, v=0.0, theta=0.0)

        self.state_pub = self.create_publisher(DigitalState, '/digital_state', 10)
        self.timer = self.create_timer(self.dt, self.timer_callback)
        self.get_logger().info('Digital State Node has been started.')
        # Additional initialization code can go here

    def timer_callback(self):
        t = (self.get_clock().now().nanoseconds / 1e9) - self.start_time  # Current time in seconds

        acc =  np.exp(-t/100)# Example acceleration input
        delta = 0.4 * np.sin(0.5 * t)  # Example steering angle input
        u = np.array([acc, delta])
        x, y, v, theta = self.bike_model.update_rk4(u)
        beta = np.arctan(self.bike_model.a * np.tan(delta) / self.bike_model.L)

        # Publish the digital state
        msg = DigitalState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = 'world'
        msg.pose.position.x = x
        msg.pose.position.y = y
        msg.pose.position.z = 0.0  # Assuming the bike is moving on a plane
        msg.pose.orientation.x = 0.0
        msg.pose.orientation.y = 0.0
        msg.pose.orientation.z = np.sin(theta / 2.0)
        msg.pose.orientation.w = np.cos(theta / 2.0)
        msg.twist.linear.x = v * np.cos(theta+beta)
        msg.twist.linear.y = v * np.sin(theta+beta)
        msg.twist.linear.z = 0.0
        msg.twist.angular.x = 0.0
        msg.twist.angular.y = 0.0
        msg.twist.angular.z = v * np.tan(delta) * np.cos(beta) / self.bike_model.L
        self.state_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    digital_state_node = DigitalStateNode()

    try:
        rclpy.spin(digital_state_node)
    except KeyboardInterrupt:
        digital_state_node.get_logger().info('KeyboardInterrupt, shutting down...')
    finally:
        digital_state_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()