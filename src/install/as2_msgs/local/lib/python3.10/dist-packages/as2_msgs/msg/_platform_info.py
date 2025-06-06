# generated from rosidl_generator_py/resource/_idl.py.em
# with input from as2_msgs:msg/PlatformInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlatformInfo(type):
    """Metaclass of message 'PlatformInfo'."""

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
            module = import_type_support('as2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'as2_msgs.msg.PlatformInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__platform_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__platform_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__platform_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__platform_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__platform_info

            from as2_msgs.msg import ControlMode
            if ControlMode.__class__._TYPE_SUPPORT is None:
                ControlMode.__class__.__import_type_support__()

            from as2_msgs.msg import PlatformStatus
            if PlatformStatus.__class__._TYPE_SUPPORT is None:
                PlatformStatus.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlatformInfo(metaclass=Metaclass_PlatformInfo):
    """Message class 'PlatformInfo'."""

    __slots__ = [
        '_header',
        '_connected',
        '_armed',
        '_offboard',
        '_status',
        '_current_control_mode',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'connected': 'boolean',
        'armed': 'boolean',
        'offboard': 'boolean',
        'status': 'as2_msgs/PlatformStatus',
        'current_control_mode': 'as2_msgs/ControlMode',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['as2_msgs', 'msg'], 'PlatformStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['as2_msgs', 'msg'], 'ControlMode'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.connected = kwargs.get('connected', bool())
        self.armed = kwargs.get('armed', bool())
        self.offboard = kwargs.get('offboard', bool())
        from as2_msgs.msg import PlatformStatus
        self.status = kwargs.get('status', PlatformStatus())
        from as2_msgs.msg import ControlMode
        self.current_control_mode = kwargs.get('current_control_mode', ControlMode())

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
        if self.header != other.header:
            return False
        if self.connected != other.connected:
            return False
        if self.armed != other.armed:
            return False
        if self.offboard != other.offboard:
            return False
        if self.status != other.status:
            return False
        if self.current_control_mode != other.current_control_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def connected(self):
        """Message field 'connected'."""
        return self._connected

    @connected.setter
    def connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connected' field must be of type 'bool'"
        self._connected = value

    @builtins.property
    def armed(self):
        """Message field 'armed'."""
        return self._armed

    @armed.setter
    def armed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'armed' field must be of type 'bool'"
        self._armed = value

    @builtins.property
    def offboard(self):
        """Message field 'offboard'."""
        return self._offboard

    @offboard.setter
    def offboard(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'offboard' field must be of type 'bool'"
        self._offboard = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from as2_msgs.msg import PlatformStatus
            assert \
                isinstance(value, PlatformStatus), \
                "The 'status' field must be a sub message of type 'PlatformStatus'"
        self._status = value

    @builtins.property
    def current_control_mode(self):
        """Message field 'current_control_mode'."""
        return self._current_control_mode

    @current_control_mode.setter
    def current_control_mode(self, value):
        if __debug__:
            from as2_msgs.msg import ControlMode
            assert \
                isinstance(value, ControlMode), \
                "The 'current_control_mode' field must be a sub message of type 'ControlMode'"
        self._current_control_mode = value
