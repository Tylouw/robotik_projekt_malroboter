import sys

from interfaces.srv import Getpose
import rclpy
from rclpy.node import Node


class TestClient(Node):

    def __init__(self):
        super().__init__('test_client')
        self.cli = self.create_client(Getpose, 'get_penhold_pose_service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Getpose.Request()

    def send_request(self, eingang):
        self.req.eingang = eingang
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)

    minimal_client = TestClient()
    response = minimal_client.send_request(bool(sys.argv[1]))
    print(response)
    #minimal_client.get_logger().info(response.point.y)
    #print("x: " + str(response.pointTranslation.x) + ", y: " + str(response.pointTranslation.y) + ", z: " + str(response.pointTranslation.z))

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()