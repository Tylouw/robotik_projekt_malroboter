// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Pointcoords.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POINTCOORDS__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__POINTCOORDS__BUILDER_HPP_

#include "interfaces/msg/detail/pointcoords__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Pointcoords_size
{
public:
  explicit Init_Pointcoords_size(::interfaces::msg::Pointcoords & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Pointcoords size(::interfaces::msg::Pointcoords::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Pointcoords msg_;
};

class Init_Pointcoords_curves
{
public:
  explicit Init_Pointcoords_curves(::interfaces::msg::Pointcoords & msg)
  : msg_(msg)
  {}
  Init_Pointcoords_size curves(::interfaces::msg::Pointcoords::_curves_type arg)
  {
    msg_.curves = std::move(arg);
    return Init_Pointcoords_size(msg_);
  }

private:
  ::interfaces::msg::Pointcoords msg_;
};

class Init_Pointcoords_y
{
public:
  explicit Init_Pointcoords_y(::interfaces::msg::Pointcoords & msg)
  : msg_(msg)
  {}
  Init_Pointcoords_curves y(::interfaces::msg::Pointcoords::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pointcoords_curves(msg_);
  }

private:
  ::interfaces::msg::Pointcoords msg_;
};

class Init_Pointcoords_x
{
public:
  Init_Pointcoords_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pointcoords_y x(::interfaces::msg::Pointcoords::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pointcoords_y(msg_);
  }

private:
  ::interfaces::msg::Pointcoords msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Pointcoords>()
{
  return interfaces::msg::builder::Init_Pointcoords_x();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__POINTCOORDS__BUILDER_HPP_
