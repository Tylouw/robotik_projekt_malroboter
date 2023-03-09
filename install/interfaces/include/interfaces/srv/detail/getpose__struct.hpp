// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/Getpose.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__GETPOSE__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__GETPOSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Getpose_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Getpose_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Getpose_Request_
{
  using Type = Getpose_Request_<ContainerAllocator>;

  explicit Getpose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eingang = false;
    }
  }

  explicit Getpose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eingang = false;
    }
  }

  // field types and members
  using _eingang_type =
    bool;
  _eingang_type eingang;

  // setters for named parameter idiom
  Type & set__eingang(
    const bool & _arg)
  {
    this->eingang = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Getpose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Getpose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Getpose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Getpose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Getpose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Getpose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Getpose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Getpose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Getpose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Getpose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Getpose_Request
    std::shared_ptr<interfaces::srv::Getpose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Getpose_Request
    std::shared_ptr<interfaces::srv::Getpose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Getpose_Request_ & other) const
  {
    if (this->eingang != other.eingang) {
      return false;
    }
    return true;
  }
  bool operator!=(const Getpose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Getpose_Request_

// alias to use template instance with default allocator
using Getpose_Request =
  interfaces::srv::Getpose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


// Include directives for member types
// Member 'pointtranslation'
#include "interfaces/msg/detail/point_translation3_d__struct.hpp"
// Member 'pointorientation'
#include "interfaces/msg/detail/point_orientation3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Getpose_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Getpose_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Getpose_Response_
{
  using Type = Getpose_Response_<ContainerAllocator>;

  explicit Getpose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pointtranslation(_init),
    pointorientation(_init)
  {
    (void)_init;
  }

  explicit Getpose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pointtranslation(_alloc, _init),
    pointorientation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pointtranslation_type =
    interfaces::msg::PointTranslation3D_<ContainerAllocator>;
  _pointtranslation_type pointtranslation;
  using _pointorientation_type =
    interfaces::msg::PointOrientation3D_<ContainerAllocator>;
  _pointorientation_type pointorientation;

  // setters for named parameter idiom
  Type & set__pointtranslation(
    const interfaces::msg::PointTranslation3D_<ContainerAllocator> & _arg)
  {
    this->pointtranslation = _arg;
    return *this;
  }
  Type & set__pointorientation(
    const interfaces::msg::PointOrientation3D_<ContainerAllocator> & _arg)
  {
    this->pointorientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Getpose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Getpose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Getpose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Getpose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Getpose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Getpose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Getpose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Getpose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Getpose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Getpose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Getpose_Response
    std::shared_ptr<interfaces::srv::Getpose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Getpose_Response
    std::shared_ptr<interfaces::srv::Getpose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Getpose_Response_ & other) const
  {
    if (this->pointtranslation != other.pointtranslation) {
      return false;
    }
    if (this->pointorientation != other.pointorientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Getpose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Getpose_Response_

// alias to use template instance with default allocator
using Getpose_Response =
  interfaces::srv::Getpose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct Getpose
{
  using Request = interfaces::srv::Getpose_Request;
  using Response = interfaces::srv::Getpose_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__GETPOSE__STRUCT_HPP_
