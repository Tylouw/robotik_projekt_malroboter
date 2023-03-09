// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MOVE__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__MOVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'waypoints'
#include "interfaces/msg/detail/waypoints__struct.hpp"
// Member 'planeorientation'
#include "interfaces/msg/detail/point_orientation3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Move_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Move_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Request_
{
  using Type = Move_Request_<ContainerAllocator>;

  explicit Move_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_init),
    planeorientation(_init)
  {
    (void)_init;
  }

  explicit Move_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_alloc, _init),
    planeorientation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _waypoints_type =
    interfaces::msg::Waypoints_<ContainerAllocator>;
  _waypoints_type waypoints;
  using _planeorientation_type =
    interfaces::msg::PointOrientation3D_<ContainerAllocator>;
  _planeorientation_type planeorientation;

  // setters for named parameter idiom
  Type & set__waypoints(
    const interfaces::msg::Waypoints_<ContainerAllocator> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__planeorientation(
    const interfaces::msg::PointOrientation3D_<ContainerAllocator> & _arg)
  {
    this->planeorientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::Move_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Move_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Move_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Move_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Move_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Move_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Move_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Move_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Move_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Move_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Move_Request
    std::shared_ptr<interfaces::srv::Move_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Move_Request
    std::shared_ptr<interfaces::srv::Move_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Request_ & other) const
  {
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->planeorientation != other.planeorientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Request_

// alias to use template instance with default allocator
using Move_Request =
  interfaces::srv::Move_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


// Include directives for member types
// Member 'pointtranslation'
#include "interfaces/msg/detail/point_translation3_d__struct.hpp"
// Member 'pointorientation'
// already included above
// #include "interfaces/msg/detail/point_orientation3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__srv__Move_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__Move_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Response_
{
  using Type = Move_Response_<ContainerAllocator>;

  explicit Move_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pointtranslation(_init),
    pointorientation(_init)
  {
    (void)_init;
  }

  explicit Move_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces::srv::Move_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::Move_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::Move_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::Move_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Move_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Move_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::Move_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::Move_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::Move_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::Move_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__Move_Response
    std::shared_ptr<interfaces::srv::Move_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__Move_Response
    std::shared_ptr<interfaces::srv::Move_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Response_ & other) const
  {
    if (this->pointtranslation != other.pointtranslation) {
      return false;
    }
    if (this->pointorientation != other.pointorientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Response_

// alias to use template instance with default allocator
using Move_Response =
  interfaces::srv::Move_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct Move
{
  using Request = interfaces::srv::Move_Request;
  using Response = interfaces::srv::Move_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__MOVE__STRUCT_HPP_
