// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__MOVE__STRUCT_H_
#define INTERFACES__SRV__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "interfaces/msg/detail/waypoints__struct.h"
// Member 'planeorientation'
#include "interfaces/msg/detail/point_orientation3_d__struct.h"

// Struct defined in srv/Move in the package interfaces.
typedef struct interfaces__srv__Move_Request
{
  interfaces__msg__Waypoints waypoints;
  interfaces__msg__PointOrientation3D planeorientation;
} interfaces__srv__Move_Request;

// Struct for a sequence of interfaces__srv__Move_Request.
typedef struct interfaces__srv__Move_Request__Sequence
{
  interfaces__srv__Move_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Move_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pointtranslation'
#include "interfaces/msg/detail/point_translation3_d__struct.h"
// Member 'pointorientation'
// already included above
// #include "interfaces/msg/detail/point_orientation3_d__struct.h"

// Struct defined in srv/Move in the package interfaces.
typedef struct interfaces__srv__Move_Response
{
  interfaces__msg__PointTranslation3D pointtranslation;
  interfaces__msg__PointOrientation3D pointorientation;
} interfaces__srv__Move_Response;

// Struct for a sequence of interfaces__srv__Move_Response.
typedef struct interfaces__srv__Move_Response__Sequence
{
  interfaces__srv__Move_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__Move_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__MOVE__STRUCT_H_
