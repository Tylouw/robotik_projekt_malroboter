// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:srv/Getpose.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "interfaces/srv/detail/getpose__struct.h"
#include "interfaces/srv/detail/getpose__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces__srv__getpose__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interfaces.srv._getpose.Getpose_Request", full_classname_dest, 39) == 0);
  }
  interfaces__srv__Getpose_Request * ros_message = _ros_message;
  {  // eingang
    PyObject * field = PyObject_GetAttrString(_pymsg, "eingang");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->eingang = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__srv__getpose__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Getpose_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.srv._getpose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Getpose_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__srv__Getpose_Request * ros_message = (interfaces__srv__Getpose_Request *)raw_ros_message;
  {  // eingang
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->eingang ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eingang", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "interfaces/srv/detail/getpose__struct.h"
// already included above
// #include "interfaces/srv/detail/getpose__functions.h"

bool interfaces__msg__point_translation3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interfaces__msg__point_translation3_d__convert_to_py(void * raw_ros_message);
bool interfaces__msg__point_orientation3_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interfaces__msg__point_orientation3_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaces__srv__getpose__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interfaces.srv._getpose.Getpose_Response", full_classname_dest, 40) == 0);
  }
  interfaces__srv__Getpose_Response * ros_message = _ros_message;
  {  // pointtranslation
    PyObject * field = PyObject_GetAttrString(_pymsg, "pointtranslation");
    if (!field) {
      return false;
    }
    if (!interfaces__msg__point_translation3_d__convert_from_py(field, &ros_message->pointtranslation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pointorientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "pointorientation");
    if (!field) {
      return false;
    }
    if (!interfaces__msg__point_orientation3_d__convert_from_py(field, &ros_message->pointorientation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__srv__getpose__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Getpose_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.srv._getpose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Getpose_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__srv__Getpose_Response * ros_message = (interfaces__srv__Getpose_Response *)raw_ros_message;
  {  // pointtranslation
    PyObject * field = NULL;
    field = interfaces__msg__point_translation3_d__convert_to_py(&ros_message->pointtranslation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pointtranslation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pointorientation
    PyObject * field = NULL;
    field = interfaces__msg__point_orientation3_d__convert_to_py(&ros_message->pointorientation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pointorientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
