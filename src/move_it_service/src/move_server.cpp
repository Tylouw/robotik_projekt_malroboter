#include "rclcpp/rclcpp.hpp"
#include "interfaces/srv/move.hpp"
#include <moveit/move_group_interface/move_group_interface.h>

#include <memory>

rclcpp::NodeOptions node_options;
static const std::string PLANNING_GROUP = "ur_manipulator";

void move(const std::shared_ptr<interfaces::srv::Move::Request> request,
          std::shared_ptr<interfaces::srv::Move::Response>      response)
  {
  auto move_group_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);
  moveit::planning_interface::MoveGroupInterface move_group(move_group_node,PLANNING_GROUP);


  geometry_msgs::msg::Pose targetPose;
  targetPose.orientation.x = request -> planeorientation.x;
  targetPose.orientation.y = request -> planeorientation.y;
  targetPose.orientation.z = request -> planeorientation.z;
  targetPose.orientation.w = request -> planeorientation.w;

  if(request -> waypoints.x.size() == 1){
    targetPose.position.x = request -> waypoints.x[0];
    targetPose.position.y = request -> waypoints.y[0];
    targetPose.position.z = request -> waypoints.z[0];
    move_group.setPoseTarget(targetPose);

    move_group.move();
  }

  else{
    std::vector<geometry_msgs::msg::Pose> waypoints;

    for(unsigned int i = 0; i < sizeof(request -> waypoints.x)/sizeof(request -> waypoints.x[0]); i = i + 1){

      targetPose.position.x = request -> waypoints.x[i];
      targetPose.position.y = request -> waypoints.y[i];
      targetPose.position.z = request -> waypoints.z[i];

      waypoints.push_back(targetPose);  

    }

    // Cartesian motions are frequently needed to be slower for actions such as approach and retreat
    // grasp motions. Here we demonstrate how to reduce the speed of the robot arm via a scaling factor
    // of the maxiumum speed of each joint. Note this is not the speed of the end effector point.
    move_group.setMaxVelocityScalingFactor(0.1);

    // We want the Cartesian path to be interpolated at a resolution of 1 cm
    // which is why we will specify 0.01 as the max step in Cartesian
    // translation.  We will specify the jump threshold as 0.0, effectively disabling it.
    // Warning - disabling the jump threshold while operating real hardware can cause
    // large unpredictable motions of redundant joints and could be a safety issue
    moveit_msgs::msg::RobotTrajectory trajectory;
    const double jump_threshold = 0.0;
    const double eef_step = 0.01;
    move_group.computeCartesianPath(waypoints, eef_step, jump_threshold, trajectory);

  }
    response -> pointtranslation.x =  move_group.getCurrentPose().pose.position.x;
    response -> pointtranslation.y =  move_group.getCurrentPose().pose.position.y;
    response -> pointtranslation.z =  move_group.getCurrentPose().pose.position.z;
    response -> pointorientation.x =  move_group.getCurrentPose().pose.orientation.x;
    response -> pointorientation.y =  move_group.getCurrentPose().pose.orientation.y;
    response -> pointorientation.z =  move_group.getCurrentPose().pose.orientation.z;
    response -> pointorientation.w =  move_group.getCurrentPose().pose.orientation.w;
  
}

int main(int argc, char **argv)
{
  //RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "vor init.");
  rclcpp::init(argc, argv);

  //RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "1");

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("move_server");

  //RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "2");

  rclcpp::Service<interfaces::srv::Move>::SharedPtr service =
  node->create_service<interfaces::srv::Move>("move", &move);

  //RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to move.");

  rclcpp::spin(node);
  rclcpp::shutdown();
}

