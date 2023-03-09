// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:srv/Getpose.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/detail/getpose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
interfaces__srv__Getpose_Request__init(interfaces__srv__Getpose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // eingang
  return true;
}

void
interfaces__srv__Getpose_Request__fini(interfaces__srv__Getpose_Request * msg)
{
  if (!msg) {
    return;
  }
  // eingang
}

bool
interfaces__srv__Getpose_Request__are_equal(const interfaces__srv__Getpose_Request * lhs, const interfaces__srv__Getpose_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // eingang
  if (lhs->eingang != rhs->eingang) {
    return false;
  }
  return true;
}

bool
interfaces__srv__Getpose_Request__copy(
  const interfaces__srv__Getpose_Request * input,
  interfaces__srv__Getpose_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // eingang
  output->eingang = input->eingang;
  return true;
}

interfaces__srv__Getpose_Request *
interfaces__srv__Getpose_Request__create()
{
  interfaces__srv__Getpose_Request * msg = (interfaces__srv__Getpose_Request *)malloc(sizeof(interfaces__srv__Getpose_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__Getpose_Request));
  bool success = interfaces__srv__Getpose_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__Getpose_Request__destroy(interfaces__srv__Getpose_Request * msg)
{
  if (msg) {
    interfaces__srv__Getpose_Request__fini(msg);
  }
  free(msg);
}


bool
interfaces__srv__Getpose_Request__Sequence__init(interfaces__srv__Getpose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__srv__Getpose_Request * data = NULL;
  if (size) {
    data = (interfaces__srv__Getpose_Request *)calloc(size, sizeof(interfaces__srv__Getpose_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__Getpose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__Getpose_Request__fini(&data[i - 1]);
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
interfaces__srv__Getpose_Request__Sequence__fini(interfaces__srv__Getpose_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__srv__Getpose_Request__fini(&array->data[i]);
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

interfaces__srv__Getpose_Request__Sequence *
interfaces__srv__Getpose_Request__Sequence__create(size_t size)
{
  interfaces__srv__Getpose_Request__Sequence * array = (interfaces__srv__Getpose_Request__Sequence *)malloc(sizeof(interfaces__srv__Getpose_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__Getpose_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__srv__Getpose_Request__Sequence__destroy(interfaces__srv__Getpose_Request__Sequence * array)
{
  if (array) {
    interfaces__srv__Getpose_Request__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces__srv__Getpose_Request__Sequence__are_equal(const interfaces__srv__Getpose_Request__Sequence * lhs, const interfaces__srv__Getpose_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__srv__Getpose_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__srv__Getpose_Request__Sequence__copy(
  const interfaces__srv__Getpose_Request__Sequence * input,
  interfaces__srv__Getpose_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__srv__Getpose_Request);
    interfaces__srv__Getpose_Request * data =
      (interfaces__srv__Getpose_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__srv__Getpose_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__srv__Getpose_Request__fini(&data[i]);
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
    if (!interfaces__srv__Getpose_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pointtranslation`
#include "interfaces/msg/detail/point_translation3_d__functions.h"
// Member `pointorientation`
#include "interfaces/msg/detail/point_orientation3_d__functions.h"

bool
interfaces__srv__Getpose_Response__init(interfaces__srv__Getpose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // pointtranslation
  if (!interfaces__msg__PointTranslation3D__init(&msg->pointtranslation)) {
    interfaces__srv__Getpose_Response__fini(msg);
    return false;
  }
  // pointorientation
  if (!interfaces__msg__PointOrientation3D__init(&msg->pointorientation)) {
    interfaces__srv__Getpose_Response__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__srv__Getpose_Response__fini(interfaces__srv__Getpose_Response * msg)
{
  if (!msg) {
    return;
  }
  // pointtranslation
  interfaces__msg__PointTranslation3D__fini(&msg->pointtranslation);
  // pointorientation
  interfaces__msg__PointOrientation3D__fini(&msg->pointorientation);
}

bool
interfaces__srv__Getpose_Response__are_equal(const interfaces__srv__Getpose_Response * lhs, const interfaces__srv__Getpose_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pointtranslation
  if (!interfaces__msg__PointTranslation3D__are_equal(
      &(lhs->pointtranslation), &(rhs->pointtranslation)))
  {
    return false;
  }
  // pointorientation
  if (!interfaces__msg__PointOrientation3D__are_equal(
      &(lhs->pointorientation), &(rhs->pointorientation)))
  {
    return false;
  }
  return true;
}

bool
interfaces__srv__Getpose_Response__copy(
  const interfaces__srv__Getpose_Response * input,
  interfaces__srv__Getpose_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // pointtranslation
  if (!interfaces__msg__PointTranslation3D__copy(
      &(input->pointtranslation), &(output->pointtranslation)))
  {
    return false;
  }
  // pointorientation
  if (!interfaces__msg__PointOrientation3D__copy(
      &(input->pointorientation), &(output->pointorientation)))
  {
    return false;
  }
  return true;
}

interfaces__srv__Getpose_Response *
interfaces__srv__Getpose_Response__create()
{
  interfaces__srv__Getpose_Response * msg = (interfaces__srv__Getpose_Response *)malloc(sizeof(interfaces__srv__Getpose_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__srv__Getpose_Response));
  bool success = interfaces__srv__Getpose_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces__srv__Getpose_Response__destroy(interfaces__srv__Getpose_Response * msg)
{
  if (msg) {
    interfaces__srv__Getpose_Response__fini(msg);
  }
  free(msg);
}


bool
interfaces__srv__Getpose_Response__Sequence__init(interfaces__srv__Getpose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces__srv__Getpose_Response * data = NULL;
  if (size) {
    data = (interfaces__srv__Getpose_Response *)calloc(size, sizeof(interfaces__srv__Getpose_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__srv__Getpose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__srv__Getpose_Response__fini(&data[i - 1]);
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
interfaces__srv__Getpose_Response__Sequence__fini(interfaces__srv__Getpose_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces__srv__Getpose_Response__fini(&array->data[i]);
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

interfaces__srv__Getpose_Response__Sequence *
interfaces__srv__Getpose_Response__Sequence__create(size_t size)
{
  interfaces__srv__Getpose_Response__Sequence * array = (interfaces__srv__Getpose_Response__Sequence *)malloc(sizeof(interfaces__srv__Getpose_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces__srv__Getpose_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces__srv__Getpose_Response__Sequence__destroy(interfaces__srv__Getpose_Response__Sequence * array)
{
  if (array) {
    interfaces__srv__Getpose_Response__Sequence__fini(array);
  }
  free(array);
}

bool
interfaces__srv__Getpose_Response__Sequence__are_equal(const interfaces__srv__Getpose_Response__Sequence * lhs, const interfaces__srv__Getpose_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__srv__Getpose_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__srv__Getpose_Response__Sequence__copy(
  const interfaces__srv__Getpose_Response__Sequence * input,
  interfaces__srv__Getpose_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__srv__Getpose_Response);
    interfaces__srv__Getpose_Response * data =
      (interfaces__srv__Getpose_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__srv__Getpose_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          interfaces__srv__Getpose_Response__fini(&data[i]);
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
    if (!interfaces__srv__Getpose_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
