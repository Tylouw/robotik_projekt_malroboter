// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/PointTranslation3D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POINT_TRANSLATION3_D__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__POINT_TRANSLATION3_D__BUILDER_HPP_

#include "interfaces/msg/detail/point_translation3_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_PointTranslation3D_z
{
public:
  explicit Init_PointTranslation3D_z(::interfaces::msg::PointTranslation3D & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::PointTranslation3D z(::interfaces::msg::PointTranslation3D::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::PointTranslation3D msg_;
};

class Init_PointTranslation3D_y
{
public:
  explicit Init_PointTranslation3D_y(::interfaces::msg::PointTranslation3D & msg)
  : msg_(msg)
  {}
  Init_PointTranslation3D_z y(::interfaces::msg::PointTranslation3D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PointTranslation3D_z(msg_);
  }

private:
  ::interfaces::msg::PointTranslation3D msg_;
};

class Init_PointTranslation3D_x
{
public:
  Init_PointTranslation3D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointTranslation3D_y x(::interfaces::msg::PointTranslation3D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PointTranslation3D_y(msg_);
  }

private:
  ::interfaces::msg::PointTranslation3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::PointTranslation3D>()
{
  return interfaces::msg::builder::Init_PointTranslation3D_x();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__POINT_TRANSLATION3_D__BUILDER_HPP_
