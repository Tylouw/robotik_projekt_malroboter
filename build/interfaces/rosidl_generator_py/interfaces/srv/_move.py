# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:srv/Move.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Move_Request(type):
    """Metaclass of message 'Move_Request'."""

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
                'interfaces.srv.Move_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move__request

            from interfaces.msg import PointOrientation3D
            if PointOrientation3D.__class__._TYPE_SUPPORT is None:
                PointOrientation3D.__class__.__import_type_support__()

            from interfaces.msg import Waypoints
            if Waypoints.__class__._TYPE_SUPPORT is None:
                Waypoints.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Move_Request(metaclass=Metaclass_Move_Request):
    """Message class 'Move_Request'."""

    __slots__ = [
        '_waypoints',
        '_planeorientation',
    ]

    _fields_and_field_types = {
        'waypoints': 'interfaces/Waypoints',
        'planeorientation': 'interfaces/PointOrientation3D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['interfaces', 'msg'], 'Waypoints'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interfaces', 'msg'], 'PointOrientation3D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from interfaces.msg import Waypoints
        self.waypoints = kwargs.get('waypoints', Waypoints())
        from interfaces.msg import PointOrientation3D
        self.planeorientation = kwargs.get('planeorientation', PointOrientation3D())

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
        if self.waypoints != other.waypoints:
            return False
        if self.planeorientation != other.planeorientation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from interfaces.msg import Waypoints
            assert \
                isinstance(value, Waypoints), \
                "The 'waypoints' field must be a sub message of type 'Waypoints'"
        self._waypoints = value

    @property
    def planeorientation(self):
        """Message field 'planeorientation'."""
        return self._planeorientation

    @planeorientation.setter
    def planeorientation(self, value):
        if __debug__:
            from interfaces.msg import PointOrientation3D
            assert \
                isinstance(value, PointOrientation3D), \
                "The 'planeorientation' field must be a sub message of type 'PointOrientation3D'"
        self._planeorientation = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Move_Response(type):
    """Metaclass of message 'Move_Response'."""

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
                'interfaces.srv.Move_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move__response

            from interfaces.msg import PointOrientation3D
            if PointOrientation3D.__class__._TYPE_SUPPORT is None:
                PointOrientation3D.__class__.__import_type_support__()

            from interfaces.msg import PointTranslation3D
            if PointTranslation3D.__class__._TYPE_SUPPORT is None:
                PointTranslation3D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Move_Response(metaclass=Metaclass_Move_Response):
    """Message class 'Move_Response'."""

    __slots__ = [
        '_pointtranslation',
        '_pointorientation',
    ]

    _fields_and_field_types = {
        'pointtranslation': 'interfaces/PointTranslation3D',
        'pointorientation': 'interfaces/PointOrientation3D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['interfaces', 'msg'], 'PointTranslation3D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interfaces', 'msg'], 'PointOrientation3D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from interfaces.msg import PointTranslation3D
        self.pointtranslation = kwargs.get('pointtranslation', PointTranslation3D())
        from interfaces.msg import PointOrientation3D
        self.pointorientation = kwargs.get('pointorientation', PointOrientation3D())

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
        if self.pointtranslation != other.pointtranslation:
            return False
        if self.pointorientation != other.pointorientation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pointtranslation(self):
        """Message field 'pointtranslation'."""
        return self._pointtranslation

    @pointtranslation.setter
    def pointtranslation(self, value):
        if __debug__:
            from interfaces.msg import PointTranslation3D
            assert \
                isinstance(value, PointTranslation3D), \
                "The 'pointtranslation' field must be a sub message of type 'PointTranslation3D'"
        self._pointtranslation = value

    @property
    def pointorientation(self):
        """Message field 'pointorientation'."""
        return self._pointorientation

    @pointorientation.setter
    def pointorientation(self, value):
        if __debug__:
            from interfaces.msg import PointOrientation3D
            assert \
                isinstance(value, PointOrientation3D), \
                "The 'pointorientation' field must be a sub message of type 'PointOrientation3D'"
        self._pointorientation = value


class Metaclass_Move(type):
    """Metaclass of service 'Move'."""

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
                'interfaces.srv.Move')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__move

            from interfaces.srv import _move
            if _move.Metaclass_Move_Request._TYPE_SUPPORT is None:
                _move.Metaclass_Move_Request.__import_type_support__()
            if _move.Metaclass_Move_Response._TYPE_SUPPORT is None:
                _move.Metaclass_Move_Response.__import_type_support__()


class Move(metaclass=Metaclass_Move):
    from interfaces.srv._move import Move_Request as Request
    from interfaces.srv._move import Move_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
