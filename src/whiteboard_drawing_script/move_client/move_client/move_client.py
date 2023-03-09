from interfaces.srv import Move
import rclpy
from rclpy.node import Node

class MoveClient(Node):

    def __init__(self):
        super().__init__('move_client')
        self.cli = self.create_client(Move, 'move_it_service')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Move.Request()

    def send_request(self, translation, orientation):
        self.req.waypoints.x = [translation[0]]
        self.req.waypoints.y = [translation[1]]
        self.req.waypoints.z = [translation[2]]
        self.req.planeorientation.x = orientation[0]
        self.req.planeorientation.y = orientation[1]
        self.req.planeorientation.z = orientation[2]
        self.req.planeorientation.w = orientation[3]
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):
    rclpy.init(args=args)

    minimal_client = MoveClient()

    spiraleTranslation = [-0.4,0,0.2] #[x,y,z]
    spiraleOrientierung = [0,0,0] #[rx,ry,rz] in Grad

    response = minimal_client.send_request(spiraleTranslation, spiraleOrientierung)
    minimal_client.get_logger().info((response.points))

    minimal_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
    
    