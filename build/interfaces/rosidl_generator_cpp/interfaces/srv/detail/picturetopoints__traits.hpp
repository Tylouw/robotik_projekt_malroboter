// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv/Picturetopoints.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__PICTURETOPOINTS__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__PICTURETOPOINTS__TRAITS_HPP_

#include "interfaces/srv/detail/picturetopoints__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::srv::Picturetopoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path: ";
    value_to_yaml(msg.path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces::srv::Picturetopoints_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::srv::Picturetopoints_Request>()
{
  return "interfaces::srv::Picturetopoints_Request";
}

template<>
inline const char * name<interfaces::srv::Picturetopoints_Request>()
{
  return "interfaces/srv/Picturetopoints_Request";
}

template<>
struct has_fixed_size<interfaces::srv::Picturetopoints_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::Picturetopoints_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::Picturetopoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'points'
#include "interfaces/msg/detail/pointcoords__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::srv::Picturetopoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "points:\n";
    to_yaml(msg.points, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces::srv::Picturetopoints_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::srv::Picturetopoints_Response>()
{
  return "interfaces::srv::Picturetopoints_Response";
}

template<>
inline const char * name<interfaces::srv::Picturetopoints_Response>()
{
  return "interfaces/srv/Picturetopoints_Response";
}

template<>
struct has_fixed_size<interfaces::srv::Picturetopoints_Response>
  : std::integral_constant<bool, has_fixed_size<interfaces::msg::Pointcoords>::value> {};

template<>
struct has_bounded_size<interfaces::srv::Picturetopoints_Response>
  : std::integral_constant<bool, has_bounded_size<interfaces::msg::Pointcoords>::value> {};

template<>
struct is_message<interfaces::srv::Picturetopoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::Picturetopoints>()
{
  return "interfaces::srv::Picturetopoints";
}

template<>
inline const char * name<interfaces::srv::Picturetopoints>()
{
  return "interfaces/srv/Picturetopoints";
}

template<>
struct has_fixed_size<interfaces::srv::Picturetopoints>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::Picturetopoints_Request>::value &&
    has_fixed_size<interfaces::srv::Picturetopoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::Picturetopoints>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::Picturetopoints_Request>::value &&
    has_bounded_size<interfaces::srv::Picturetopoints_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::Picturetopoints>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::Picturetopoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::Picturetopoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__PICTURETOPOINTS__TRAITS_HPP_
