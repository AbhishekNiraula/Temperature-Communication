from interfaces.srv import Temperature
import requests
import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(Temperature, 'Reading_Temperature', self.add_two_ints_callback)
    def get_temperature(self, city):
          url = f'http://api.openweathermap.org/data/2.5/weather?q={city}&appid=75dd3fb2f18a1981abab7bc2ae88590a&units=metric'
          res = requests.get(url)
          data = res.json()
          return data['main']['temp']

    def add_two_ints_callback(self, request, response):
        city = request.city
        temperature = float(self.get_temperature(city))
        if temperature is not None:
            response.temp = temperature
            self.get_logger().info('The temperature of %s is %f' % (city, temperature))
        else:
            response.temp = -1
            self.get_logger().info('Failed to fetch temperature for %s' % (city))

        return response


def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()