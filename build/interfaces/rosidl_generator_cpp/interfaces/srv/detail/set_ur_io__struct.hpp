// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/SetUrIo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__SET_UR_IO__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__SET_UR_IO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__SetUrIo_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__SetUrIo_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetUrIo_Request_
{
  using Type = SetUrIo_Request_<ContainerAllocator>;

  explicit SetUrIo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set = 0ll;
    }
  }

  explicit SetUrIo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set = 0ll;
    }
  }

  // field types and members
  using _set_type =
    int64_t;
  _set_type set;

  // setters for named parameter idiom
  Type & set__set(
    const int64_t & _arg)
  {
    this->set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::SetUrIo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::SetUrIo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::SetUrIo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::SetUrIo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetUrIo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetUrIo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetUrIo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetUrIo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::SetUrIo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::SetUrIo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__SetUrIo_Request
    std::shared_ptr<interfaces::srv::SetUrIo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__SetUrIo_Request
    std::shared_ptr<interfaces::srv::SetUrIo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetUrIo_Request_ & other) const
  {
    if (this->set != other.set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetUrIo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetUrIo_Request_

// alias to use template instance with default allocator
using SetUrIo_Request =
  interfaces::srv::SetUrIo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__SetUrIo_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__SetUrIo_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetUrIo_Response_
{
  using Type = SetUrIo_Response_<ContainerAllocator>;

  explicit SetUrIo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current = 0ll;
    }
  }

  explicit SetUrIo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current = 0ll;
    }
  }

  // field types and members
  using _current_type =
    int64_t;
  _current_type current;

  // setters for named parameter idiom
  Type & set__current(
    const int64_t & _arg)
  {
    this->current = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::SetUrIo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::SetUrIo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::SetUrIo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::SetUrIo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetUrIo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetUrIo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::SetUrIo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::SetUrIo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::SetUrIo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::SetUrIo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__SetUrIo_Response
    std::shared_ptr<interfaces::srv::SetUrIo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__SetUrIo_Response
    std::shared_ptr<interfaces::srv::SetUrIo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetUrIo_Response_ & other) const
  {
    if (this->current != other.current) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetUrIo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetUrIo_Response_

// alias to use template instance with default allocator
using SetUrIo_Response =
  interfaces::srv::SetUrIo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct SetUrIo
{
  using Request = interfaces::srv::SetUrIo_Request;
  using Response = interfaces::srv::SetUrIo_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__SET_UR_IO__STRUCT_HPP_
