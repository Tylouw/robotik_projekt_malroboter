# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv/Picturetopoints.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Picturetopoints_Request(type):
    """Metaclass of message 'Picturetopoints_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.Picturetopoints_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__picturetopoints__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__picturetopoints__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__picturetopoints__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__picturetopoints__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__picturetopoints__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Picturetopoints_Request(metaclass=Metaclass_Picturetopoints_Request):
    """Message class 'Picturetopoints_Request'."""

    __slots__ = [
        '_path',
    ]

    _fields_and_field_types = {
        'path': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.path = kwargs.get('path', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.path != other.path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'path' field must be of type 'str'"
        self._path = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Picturetopoints_Response(type):
    """Metaclass of message 'Picturetopoints_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.Picturetopoints_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__picturetopoints__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__picturetopoints__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__picturetopoints__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__picturetopoints__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__picturetopoints__response

            from interfaces.msg import Pointcoords
            if Pointcoords.__class__._TYPE_SUPPORT is None:
                Pointcoords.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Picturetopoints_Response(metaclass=Metaclass_Picturetopoints_Response):
    """Message class 'Picturetopoints_Response'."""

    __slots__ = [
        '_points',
    ]

    _fields_and_field_types = {
        'points': 'interfaces/Pointcoords',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['interfaces', 'msg'], 'Pointcoords'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from interfaces.msg import Pointcoords
        self.points = kwargs.get('points', Pointcoords())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.points != other.points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from interfaces.msg import Pointcoords
            assert \
                isinstance(value, Pointcoords), \
                "The 'points' field must be a sub message of type 'Pointcoords'"
        self._points = value


class Metaclass_Picturetopoints(type):
    """Metaclass of service 'Picturetopoints'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.srv.Picturetopoints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__picturetopoints

            from interfaces.srv import _picturetopoints
            if _picturetopoints.Metaclass_Picturetopoints_Request._TYPE_SUPPORT is None:
                _picturetopoints.Metaclass_Picturetopoints_Request.__import_type_support__()
            if _picturetopoints.Metaclass_Picturetopoints_Response._TYPE_SUPPORT is None:
                _picturetopoints.Metaclass_Picturetopoints_Response.__import_type_support__()


class Picturetopoints(metaclass=Metaclass_Picturetopoints):
    from interfaces.srv._picturetopoints import Picturetopoints_Request as Request
    from interfaces.srv._picturetopoints import Picturetopoints_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
