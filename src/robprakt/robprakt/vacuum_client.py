from robprakt_interfaces.srv import SetUrIo
import rclpy
from rclpy.node import Node
import time

class GripperControl(Node):
    
    def __init__(self):
        super().__init__('gripper_control_client')
        self.cli = self.create_client(SetUrIo, 'vacuum_control')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SetUrIo.Request()

    def send_request(self, set):
        self.req.set = set
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):
    rclpy.init(args=args)

    minimal_client = GripperControl()
    minimal_client.send_request(1)
    print("gucci ")
    time.sleep(5)
    minimal_client.send_request(0)

    minimal_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
