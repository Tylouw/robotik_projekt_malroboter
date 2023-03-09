// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/PointTranslation3D.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/point_translation3_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
interfaces__msg__PointTranslation3D__init(interfaces__msg__PointTranslation3D * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
interfaces__msg__PointTranslation3D__fini(interfaces__msg__PointTranslation3D * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
interfaces__msg__PointTranslation3D__are_equal(const interfaces__msg__PointTranslation3D * lhs, const interfaces__msg__PointTranslation3D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
interfaces__msg__PointTranslation3D__copy(
  const interfaces__msg__PointTranslation3D * input,
  interfaces__msg__PointTranslation3D * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

interfaces__msg__PointTranslation3D *
interfaces__msg__PointTranslation3D__create()
{
  interfaces__msg__PointTranslation3D * msg = (interfaces__msg__PointTranslation3D *)malloc(sizeof(interfaces__msg__PointTranslation3D));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__PointTranslation3D));
  bool success = interfaces__msg__PointTranslation3D__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__PointTranslation3D__destroy(interfaces__msg__PointTranslation3D * msg)
{
  if (msg) {
    interfaces__msg__PointTranslation3D__fini(msg);
  }
  free(msg);
}


bool
interfaces__msg__PointTranslation3D__Sequence__init(interfaces__msg__PointTranslation3D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__msg__PointTranslation3D * data = NULL;
  if (size) {
    data = (interfaces__msg__PointTranslation3D *)calloc(size, sizeof(interfaces__msg__PointTranslation3D));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__PointTranslation3D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__PointTranslation3D__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces__msg__PointTranslation3D__Sequence__fini(interfaces__msg__PointTranslation3D__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__msg__PointTranslation3D__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces__msg__PointTranslation3D__Sequence *
interfaces__msg__PointTranslation3D__Sequence__create(size_t size)
{
  interfaces__msg__PointTranslation3D__Sequence * array = (interfaces__msg__PointTranslation3D__Sequence *)malloc(sizeof(interfaces__msg__PointTranslation3D__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__PointTranslation3D__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__msg__PointTranslation3D__Sequence__destroy(interfaces__msg__PointTranslation3D__Sequence * array)
{
  if (array) {
    interfaces__msg__PointTranslation3D__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces__msg__PointTranslation3D__Sequence__are_equal(const interfaces__msg__PointTranslation3D__Sequence * lhs, const interfaces__msg__PointTranslation3D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__PointTranslation3D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__PointTranslation3D__Sequence__copy(
  const interfaces__msg__PointTranslation3D__Sequence * input,
  interfaces__msg__PointTranslation3D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__PointTranslation3D);
    interfaces__msg__PointTranslation3D * data =
      (interfaces__msg__PointTranslation3D *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__PointTranslation3D__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__msg__PointTranslation3D__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__PointTranslation3D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
