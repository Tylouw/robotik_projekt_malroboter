// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/ChangeControlDimensions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__CHANGE_CONTROL_DIMENSIONS__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__CHANGE_CONTROL_DIMENSIONS__TRAITS_HPP_

#include "moveit_msgs/srv/detail/change_control_dimensions__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::ChangeControlDimensions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: control_x_translation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_x_translation: ";
    value_to_yaml(msg.control_x_translation, out);
    out << "\n";
  }

  // member: control_y_translation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_y_translation: ";
    value_to_yaml(msg.control_y_translation, out);
    out << "\n";
  }

  // member: control_z_translation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_z_translation: ";
    value_to_yaml(msg.control_z_translation, out);
    out << "\n";
  }

  // member: control_x_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_x_rotation: ";
    value_to_yaml(msg.control_x_rotation, out);
    out << "\n";
  }

  // member: control_y_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_y_rotation: ";
    value_to_yaml(msg.control_y_rotation, out);
    out << "\n";
  }

  // member: control_z_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_z_rotation: ";
    value_to_yaml(msg.control_z_rotation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::ChangeControlDimensions_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::ChangeControlDimensions_Request>()
{
  return "moveit_msgs::srv::ChangeControlDimensions_Request";
}

template<>
inline const char * name<moveit_msgs::srv::ChangeControlDimensions_Request>()
{
  return "moveit_msgs/srv/ChangeControlDimensions_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ChangeControlDimensions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ChangeControlDimensions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::srv::ChangeControlDimensions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::ChangeControlDimensions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::ChangeControlDimensions_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::ChangeControlDimensions_Response>()
{
  return "moveit_msgs::srv::ChangeControlDimensions_Response";
}

template<>
inline const char * name<moveit_msgs::srv::ChangeControlDimensions_Response>()
{
  return "moveit_msgs/srv/ChangeControlDimensions_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ChangeControlDimensions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ChangeControlDimensions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::srv::ChangeControlDimensions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ChangeControlDimensions>()
{
  return "moveit_msgs::srv::ChangeControlDimensions";
}

template<>
inline const char * name<moveit_msgs::srv::ChangeControlDimensions>()
{
  return "moveit_msgs/srv/ChangeControlDimensions";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ChangeControlDimensions>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::ChangeControlDimensions_Request>::value &&
    has_fixed_size<moveit_msgs::srv::ChangeControlDimensions_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::ChangeControlDimensions>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::ChangeControlDimensions_Request>::value &&
    has_bounded_size<moveit_msgs::srv::ChangeControlDimensions_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::ChangeControlDimensions>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::ChangeControlDimensions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::ChangeControlDimensions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__CHANGE_CONTROL_DIMENSIONS__TRAITS_HPP_
