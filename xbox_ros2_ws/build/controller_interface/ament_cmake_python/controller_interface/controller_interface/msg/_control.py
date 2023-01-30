# generated from rosidl_generator_py/resource/_idl.py.em
# with input from controller_interface:msg/Control.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Control(type):
    """Metaclass of message 'Control'."""

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
            module = import_type_support('controller_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'controller_interface.msg.Control')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Control(metaclass=Metaclass_Control):
    """Message class 'Control'."""

    __slots__ = [
        '_x',
        '_y',
        '_a_button',
        '_b_button',
        '_bumper_right',
    ]

    _fields_and_field_types = {
        'x': 'float',
        'y': 'float',
        'a_button': 'uint16',
        'b_button': 'uint16',
        'bumper_right': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.a_button = kwargs.get('a_button', int())
        self.b_button = kwargs.get('b_button', int())
        self.bumper_right = kwargs.get('bumper_right', int())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.a_button != other.a_button:
            return False
        if self.b_button != other.b_button:
            return False
        if self.bumper_right != other.bumper_right:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y = value

    @builtins.property
    def a_button(self):
        """Message field 'a_button'."""
        return self._a_button

    @a_button.setter
    def a_button(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'a_button' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'a_button' field must be an unsigned integer in [0, 65535]"
        self._a_button = value

    @builtins.property
    def b_button(self):
        """Message field 'b_button'."""
        return self._b_button

    @b_button.setter
    def b_button(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b_button' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'b_button' field must be an unsigned integer in [0, 65535]"
        self._b_button = value

    @builtins.property
    def bumper_right(self):
        """Message field 'bumper_right'."""
        return self._bumper_right

    @bumper_right.setter
    def bumper_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bumper_right' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'bumper_right' field must be an unsigned integer in [0, 65535]"
        self._bumper_right = value
