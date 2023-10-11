# generated from rosidl_generator_py/resource/_idl.py.em
# with input from system_interfaces:msg/CheckNode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CheckNode(type):
    """Metaclass of message 'CheckNode'."""

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
            module = import_type_support('system_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'system_interfaces.msg.CheckNode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__check_node
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__check_node
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__check_node
            cls._TYPE_SUPPORT = module.type_support_msg__msg__check_node
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__check_node

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CheckNode(metaclass=Metaclass_CheckNode):
    """Message class 'CheckNode'."""

    __slots__ = [
        '_node_name',
        '_seconds',
        '_nanoseconds',
    ]

    _fields_and_field_types = {
        'node_name': 'string',
        'seconds': 'int32',
        'nanoseconds': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.node_name = kwargs.get('node_name', str())
        self.seconds = kwargs.get('seconds', int())
        self.nanoseconds = kwargs.get('nanoseconds', int())

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
        if self.node_name != other.node_name:
            return False
        if self.seconds != other.seconds:
            return False
        if self.nanoseconds != other.nanoseconds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def node_name(self):
        """Message field 'node_name'."""
        return self._node_name

    @node_name.setter
    def node_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'node_name' field must be of type 'str'"
        self._node_name = value

    @builtins.property
    def seconds(self):
        """Message field 'seconds'."""
        return self._seconds

    @seconds.setter
    def seconds(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seconds' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'seconds' field must be an integer in [-2147483648, 2147483647]"
        self._seconds = value

    @builtins.property
    def nanoseconds(self):
        """Message field 'nanoseconds'."""
        return self._nanoseconds

    @nanoseconds.setter
    def nanoseconds(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nanoseconds' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'nanoseconds' field must be an unsigned integer in [0, 4294967295]"
        self._nanoseconds = value
