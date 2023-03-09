// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/ListRobotStatesInWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__LIST_ROBOT_STATES_IN_WAREHOUSE__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__LIST_ROBOT_STATES_IN_WAREHOUSE__TRAITS_HPP_

#include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::ListRobotStatesInWarehouse_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: regex
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "regex: ";
    value_to_yaml(msg.regex, out);
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

inline std::string to_yaml(const moveit_msgs::srv::ListRobotStatesInWarehouse_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>()
{
  return "moveit_msgs::srv::ListRobotStatesInWarehouse_Request";
}

template<>
inline const char * name<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>()
{
  return "moveit_msgs/srv/ListRobotStatesInWarehouse_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::ListRobotStatesInWarehouse_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.states.size() == 0) {
      out << "states: []\n";
    } else {
      out << "states:\n";
      for (auto item : msg.states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::ListRobotStatesInWarehouse_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>()
{
  return "moveit_msgs::srv::ListRobotStatesInWarehouse_Response";
}

template<>
inline const char * name<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>()
{
  return "moveit_msgs/srv/ListRobotStatesInWarehouse_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ListRobotStatesInWarehouse>()
{
  return "moveit_msgs::srv::ListRobotStatesInWarehouse";
}

template<>
inline const char * name<moveit_msgs::srv::ListRobotStatesInWarehouse>()
{
  return "moveit_msgs/srv/ListRobotStatesInWarehouse";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>::value &&
    has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>::value &&
    has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::ListRobotStatesInWarehouse>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__LIST_ROBOT_STATES_IN_WAREHOUSE__TRAITS_HPP_
