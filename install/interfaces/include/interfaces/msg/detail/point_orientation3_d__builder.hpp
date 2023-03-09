// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/PointOrientation3D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POINT_ORIENTATION3_D__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__POINT_ORIENTATION3_D__BUILDER_HPP_

#include "interfaces/msg/detail/point_orientation3_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_PointOrientation3D_w
{
public:
  explicit Init_PointOrientation3D_w(::interfaces::msg::PointOrientation3D & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::PointOrientation3D w(::interfaces::msg::PointOrientation3D::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::PointOrientation3D msg_;
};

class Init_PointOrientation3D_z
{
public:
  explicit Init_PointOrientation3D_z(::interfaces::msg::PointOrientation3D & msg)
  : msg_(msg)
  {}
  Init_PointOrientation3D_w z(::interfaces::msg::PointOrientation3D::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PointOrientation3D_w(msg_);
  }

private:
  ::interfaces::msg::PointOrientation3D msg_;
};

class Init_PointOrientation3D_y
{
public:
  explicit Init_PointOrientation3D_y(::interfaces::msg::PointOrientation3D & msg)
  : msg_(msg)
  {}
  Init_PointOrientation3D_z y(::interfaces::msg::PointOrientation3D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PointOrientation3D_z(msg_);
  }

private:
  ::interfaces::msg::PointOrientation3D msg_;
};

class Init_PointOrientation3D_x
{
public:
  Init_PointOrientation3D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointOrientation3D_y x(::interfaces::msg::PointOrientation3D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PointOrientation3D_y(msg_);
  }

private:
  ::interfaces::msg::PointOrientation3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::PointOrientation3D>()
{
  return interfaces::msg::builder::Init_PointOrientation3D_x();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__POINT_ORIENTATION3_D__BUILDER_HPP_
