// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/PointTranslation3D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__POINT_TRANSLATION3_D__STRUCT_H_
#define INTERFACES__MSG__DETAIL__POINT_TRANSLATION3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PointTranslation3D in the package interfaces.
typedef struct interfaces__msg__PointTranslation3D
{
  double x;
  double y;
  double z;
} interfaces__msg__PointTranslation3D;

// Struct for a sequence of interfaces__msg__PointTranslation3D.
typedef struct interfaces__msg__PointTranslation3D__Sequence
{
  interfaces__msg__PointTranslation3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__PointTranslation3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__POINT_TRANSLATION3_D__STRUCT_H_
