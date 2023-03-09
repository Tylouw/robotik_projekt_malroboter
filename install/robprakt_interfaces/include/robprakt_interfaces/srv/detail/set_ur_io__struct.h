// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robprakt_interfaces:srv/SetUrIo.idl
// generated code does not contain a copyright notice

#ifndef ROBPRAKT_INTERFACES__SRV__DETAIL__SET_UR_IO__STRUCT_H_
#define ROBPRAKT_INTERFACES__SRV__DETAIL__SET_UR_IO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetUrIo in the package robprakt_interfaces.
typedef struct robprakt_interfaces__srv__SetUrIo_Request
{
  int64_t set;
} robprakt_interfaces__srv__SetUrIo_Request;

// Struct for a sequence of robprakt_interfaces__srv__SetUrIo_Request.
typedef struct robprakt_interfaces__srv__SetUrIo_Request__Sequence
{
  robprakt_interfaces__srv__SetUrIo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robprakt_interfaces__srv__SetUrIo_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetUrIo in the package robprakt_interfaces.
typedef struct robprakt_interfaces__srv__SetUrIo_Response
{
  int64_t current;
} robprakt_interfaces__srv__SetUrIo_Response;

// Struct for a sequence of robprakt_interfaces__srv__SetUrIo_Response.
typedef struct robprakt_interfaces__srv__SetUrIo_Response__Sequence
{
  robprakt_interfaces__srv__SetUrIo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robprakt_interfaces__srv__SetUrIo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBPRAKT_INTERFACES__SRV__DETAIL__SET_UR_IO__STRUCT_H_
