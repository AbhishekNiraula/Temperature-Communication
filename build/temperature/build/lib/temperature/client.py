import sys

from example_interfaces.srv import AddTwoInts
from interfaces.srv import Temperature
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(Temperature, 'Reading_Temperature')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Temperature.Request()

    def send_request(self, city):
        self.req.city = city
        return self.cli.call_async(self.req)


def main():
    rclpy.init()

    minimal_client = MinimalClientAsync()
    future = minimal_client.send_request((sys.argv[1]))
    rclpy.spin_until_future_complete(minimal_client, future)
    response = future.result()
    if response:
        minimal_client.get_logger().info(
            f'The temperature of {sys.argv[1]} is {response.temp}°C')
    else:
        minimal_client.get_logger().info(
            f'Failed to fetch temperature for {sys.argv[1]}')
        
    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()