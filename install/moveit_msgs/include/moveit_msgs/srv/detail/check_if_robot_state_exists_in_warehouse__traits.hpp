// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/CheckIfRobotStateExistsInWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__CHECK_IF_ROBOT_STATE_EXISTS_IN_WAREHOUSE__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__CHECK_IF_ROBOT_STATE_EXISTS_IN_WAREHOUSE__TRAITS_HPP_

#include "moveit_msgs/srv/detail/check_if_robot_state_exists_in_warehouse__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot: ";
    value_to_yaml(msg.robot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>()
{
  return "moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request";
}

template<>
inline const char * name<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>()
{
  return "moveit_msgs/srv/CheckIfRobotStateExistsInWarehouse_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exists: ";
    value_to_yaml(msg.exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>()
{
  return "moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response";
}

template<>
inline const char * name<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>()
{
  return "moveit_msgs/srv/CheckIfRobotStateExistsInWarehouse_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse>()
{
  return "moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse";
}

template<>
inline const char * name<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse>()
{
  return "moveit_msgs/srv/CheckIfRobotStateExistsInWarehouse";
}

template<>
struct has_fixed_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>::value &&
    has_fixed_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>::value &&
    has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__CHECK_IF_ROBOT_STATE_EXISTS_IN_WAREHOUSE__TRAITS_HPP_
