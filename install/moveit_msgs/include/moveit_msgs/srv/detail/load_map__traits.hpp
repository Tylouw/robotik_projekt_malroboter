// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_

#include "moveit_msgs/srv/detail/load_map__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::LoadMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filename: ";
    value_to_yaml(msg.filename, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const moveit_msgs::srv::LoadMap_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::LoadMap_Request>()
{
  return "moveit_msgs::srv::LoadMap_Request";
}

template<>
inline const char * name<moveit_msgs::srv::LoadMap_Request>()
{
  return "moveit_msgs/srv/LoadMap_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::LoadMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::LoadMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::LoadMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const moveit_msgs::srv::LoadMap_Response & msg,
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

inline std::string to_yaml(const moveit_msgs::srv::LoadMap_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<moveit_msgs::srv::LoadMap_Response>()
{
  return "moveit_msgs::srv::LoadMap_Response";
}

template<>
inline const char * name<moveit_msgs::srv::LoadMap_Response>()
{
  return "moveit_msgs/srv/LoadMap_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::LoadMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::LoadMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::srv::LoadMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::LoadMap>()
{
  return "moveit_msgs::srv::LoadMap";
}

template<>
inline const char * name<moveit_msgs::srv::LoadMap>()
{
  return "moveit_msgs/srv/LoadMap";
}

template<>
struct has_fixed_size<moveit_msgs::srv::LoadMap>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::LoadMap_Request>::value &&
    has_fixed_size<moveit_msgs::srv::LoadMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::LoadMap>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::LoadMap_Request>::value &&
    has_bounded_size<moveit_msgs::srv::LoadMap_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::LoadMap>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::LoadMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::LoadMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_
