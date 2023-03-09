// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/PointOrientation3D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POINT_ORIENTATION3_D__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__POINT_ORIENTATION3_D__TRAITS_HPP_

#include "interfaces/msg/detail/point_orientation3_d__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const interfaces::msg::PointOrientation3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w: ";
    value_to_yaml(msg.w, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const interfaces::msg::PointOrientation3D & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<interfaces::msg::PointOrientation3D>()
{
  return "interfaces::msg::PointOrientation3D";
}

template<>
inline const char * name<interfaces::msg::PointOrientation3D>()
{
  return "interfaces/msg/PointOrientation3D";
}

template<>
struct has_fixed_size<interfaces::msg::PointOrientation3D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::msg::PointOrientation3D>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::msg::PointOrientation3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__POINT_ORIENTATION3_D__TRAITS_HPP_
