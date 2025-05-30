# generated from rosidl_generator_py/resource/_idl.py.em
# with input from as2_msgs:action/GeneratePolynomialTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GeneratePolynomialTrajectory_Goal(type):
    """Metaclass of message 'GeneratePolynomialTrajectory_Goal'."""

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
                'as2_msgs.action.GeneratePolynomialTrajectory_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__generate_polynomial_trajectory__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__generate_polynomial_trajectory__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__generate_polynomial_trajectory__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__generate_polynomial_trajectory__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__generate_polynomial_trajectory__goal

            from as2_msgs.msg import PoseWithID
            if PoseWithID.__class__._TYPE_SUPPORT is None:
                PoseWithID.__class__.__import_type_support__()

            from as2_msgs.msg import YawMode
            if YawMode.__class__._TYPE_SUPPORT is None:
                YawMode.__class__.__import_type_support__()

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


class GeneratePolynomialTrajectory_Goal(metaclass=Metaclass_GeneratePolynomialTrajectory_Goal):
    """Message class 'GeneratePolynomialTrajectory_Goal'."""

    __slots__ = [
        '_header',
        '_yaw',
        '_path',
        '_max_speed',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'yaw': 'as2_msgs/YawMode',
        'path': 'sequence<as2_msgs/PoseWithID>',
        'max_speed': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['as2_msgs', 'msg'], 'YawMode'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['as2_msgs', 'msg'], 'PoseWithID')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from as2_msgs.msg import YawMode
        self.yaw = kwargs.get('yaw', YawMode())
        self.path = kwargs.get('path', [])
        self.max_speed = kwargs.get('max_speed', float())

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
        if self.yaw != other.yaw:
            return False
        if self.path != other.path:
            return False
        if self.max_speed != other.max_speed:
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
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            from as2_msgs.msg import YawMode
            assert \
                isinstance(value, YawMode), \
                "The 'yaw' field must be a sub message of type 'YawMode'"
        self._yaw = value

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from as2_msgs.msg import PoseWithID
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PoseWithID) for v in value) and
                 True), \
                "The 'path' field must be a set or sequence and each value of type 'PoseWithID'"
        self._path = value

    @builtins.property
    def max_speed(self):
        """Message field 'max_speed'."""
        return self._max_speed

    @max_speed.setter
    def max_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_speed = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GeneratePolynomialTrajectory_Result(type):
    """Metaclass of message 'GeneratePolynomialTrajectory_Result'."""

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
                'as2_msgs.action.GeneratePolynomialTrajectory_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__generate_polynomial_trajectory__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__generate_polynomial_trajectory__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__generate_polynomial_trajectory__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__generate_polynomial_trajectory__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__generate_polynomial_trajectory__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeneratePolynomialTrajectory_Result(metaclass=Metaclass_GeneratePolynomialTrajectory_Result):
    """Message class 'GeneratePolynomialTrajectory_Result'."""

    __slots__ = [
        '_trajectory_generator_success',
    ]

    _fields_and_field_types = {
        'trajectory_generator_success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.trajectory_generator_success = kwargs.get('trajectory_generator_success', bool())

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
        if self.trajectory_generator_success != other.trajectory_generator_success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def trajectory_generator_success(self):
        """Message field 'trajectory_generator_success'."""
        return self._trajectory_generator_success

    @trajectory_generator_success.setter
    def trajectory_generator_success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'trajectory_generator_success' field must be of type 'bool'"
        self._trajectory_generator_success = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GeneratePolynomialTrajectory_Feedback(type):
    """Metaclass of message 'GeneratePolynomialTrajectory_Feedback'."""

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
                'as2_msgs.action.GeneratePolynomialTrajectory_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__generate_polynomial_trajectory__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__generate_polynomial_trajectory__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__generate_polynomial_trajectory__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__generate_polynomial_trajectory__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__generate_polynomial_trajectory__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeneratePolynomialTrajectory_Feedback(metaclass=Metaclass_GeneratePolynomialTrajectory_Feedback):
    """Message class 'GeneratePolynomialTrajectory_Feedback'."""

    __slots__ = [
        '_next_waypoint_id',
        '_remaining_waypoints',
    ]

    _fields_and_field_types = {
        'next_waypoint_id': 'string',
        'remaining_waypoints': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.next_waypoint_id = kwargs.get('next_waypoint_id', str())
        self.remaining_waypoints = kwargs.get('remaining_waypoints', int())

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
        if self.next_waypoint_id != other.next_waypoint_id:
            return False
        if self.remaining_waypoints != other.remaining_waypoints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def next_waypoint_id(self):
        """Message field 'next_waypoint_id'."""
        return self._next_waypoint_id

    @next_waypoint_id.setter
    def next_waypoint_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'next_waypoint_id' field must be of type 'str'"
        self._next_waypoint_id = value

    @builtins.property
    def remaining_waypoints(self):
        """Message field 'remaining_waypoints'."""
        return self._remaining_waypoints

    @remaining_waypoints.setter
    def remaining_waypoints(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remaining_waypoints' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'remaining_waypoints' field must be an unsigned integer in [0, 65535]"
        self._remaining_waypoints = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GeneratePolynomialTrajectory_SendGoal_Request(type):
    """Metaclass of message 'GeneratePolynomialTrajectory_SendGoal_Request'."""

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
                'as2_msgs.action.GeneratePolynomialTrajectory_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__generate_polynomial_trajectory__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__generate_polynomial_trajectory__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__generate_polynomial_trajectory__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__generate_polynomial_trajectory__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__generate_polynomial_trajectory__send_goal__request

            from as2_msgs.action import GeneratePolynomialTrajectory
            if GeneratePolynomialTrajectory.Goal.__class__._TYPE_SUPPORT is None:
                GeneratePolynomialTrajectory.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeneratePolynomialTrajectory_SendGoal_Request(metaclass=Metaclass_GeneratePolynomialTrajectory_SendGoal_Request):
    """Message class 'GeneratePolynomialTrajectory_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'as2_msgs/GeneratePolynomialTrajectory_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['as2_msgs', 'action'], 'GeneratePolynomialTrajectory_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_Goal
        self.goal = kwargs.get('goal', GeneratePolynomialTrajectory_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_Goal
            assert \
                isinstance(value, GeneratePolynomialTrajectory_Goal), \
                "The 'goal' field must be a sub message of type 'GeneratePolynomialTrajectory_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GeneratePolynomialTrajectory_SendGoal_Response(type):
    """Metaclass of message 'GeneratePolynomialTrajectory_SendGoal_Response'."""

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
                'as2_msgs.action.GeneratePolynomialTrajectory_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__generate_polynomial_trajectory__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__generate_polynomial_trajectory__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__generate_polynomial_trajectory__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__generate_polynomial_trajectory__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__generate_polynomial_trajectory__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeneratePolynomialTrajectory_SendGoal_Response(metaclass=Metaclass_GeneratePolynomialTrajectory_SendGoal_Response):
    """Message class 'GeneratePolynomialTrajectory_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_GeneratePolynomialTrajectory_SendGoal(type):
    """Metaclass of service 'GeneratePolynomialTrajectory_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('as2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'as2_msgs.action.GeneratePolynomialTrajectory_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__generate_polynomial_trajectory__send_goal

            from as2_msgs.action import _generate_polynomial_trajectory
            if _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_SendGoal_Request._TYPE_SUPPORT is None:
                _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_SendGoal_Request.__import_type_support__()
            if _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_SendGoal_Response._TYPE_SUPPORT is None:
                _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_SendGoal_Response.__import_type_support__()


class GeneratePolynomialTrajectory_SendGoal(metaclass=Metaclass_GeneratePolynomialTrajectory_SendGoal):
    from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_SendGoal_Request as Request
    from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GeneratePolynomialTrajectory_GetResult_Request(type):
    """Metaclass of message 'GeneratePolynomialTrajectory_GetResult_Request'."""

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
                'as2_msgs.action.GeneratePolynomialTrajectory_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__generate_polynomial_trajectory__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__generate_polynomial_trajectory__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__generate_polynomial_trajectory__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__generate_polynomial_trajectory__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__generate_polynomial_trajectory__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeneratePolynomialTrajectory_GetResult_Request(metaclass=Metaclass_GeneratePolynomialTrajectory_GetResult_Request):
    """Message class 'GeneratePolynomialTrajectory_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GeneratePolynomialTrajectory_GetResult_Response(type):
    """Metaclass of message 'GeneratePolynomialTrajectory_GetResult_Response'."""

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
                'as2_msgs.action.GeneratePolynomialTrajectory_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__generate_polynomial_trajectory__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__generate_polynomial_trajectory__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__generate_polynomial_trajectory__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__generate_polynomial_trajectory__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__generate_polynomial_trajectory__get_result__response

            from as2_msgs.action import GeneratePolynomialTrajectory
            if GeneratePolynomialTrajectory.Result.__class__._TYPE_SUPPORT is None:
                GeneratePolynomialTrajectory.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeneratePolynomialTrajectory_GetResult_Response(metaclass=Metaclass_GeneratePolynomialTrajectory_GetResult_Response):
    """Message class 'GeneratePolynomialTrajectory_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'as2_msgs/GeneratePolynomialTrajectory_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['as2_msgs', 'action'], 'GeneratePolynomialTrajectory_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_Result
        self.result = kwargs.get('result', GeneratePolynomialTrajectory_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_Result
            assert \
                isinstance(value, GeneratePolynomialTrajectory_Result), \
                "The 'result' field must be a sub message of type 'GeneratePolynomialTrajectory_Result'"
        self._result = value


class Metaclass_GeneratePolynomialTrajectory_GetResult(type):
    """Metaclass of service 'GeneratePolynomialTrajectory_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('as2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'as2_msgs.action.GeneratePolynomialTrajectory_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__generate_polynomial_trajectory__get_result

            from as2_msgs.action import _generate_polynomial_trajectory
            if _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_GetResult_Request._TYPE_SUPPORT is None:
                _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_GetResult_Request.__import_type_support__()
            if _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_GetResult_Response._TYPE_SUPPORT is None:
                _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_GetResult_Response.__import_type_support__()


class GeneratePolynomialTrajectory_GetResult(metaclass=Metaclass_GeneratePolynomialTrajectory_GetResult):
    from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_GetResult_Request as Request
    from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GeneratePolynomialTrajectory_FeedbackMessage(type):
    """Metaclass of message 'GeneratePolynomialTrajectory_FeedbackMessage'."""

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
                'as2_msgs.action.GeneratePolynomialTrajectory_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__generate_polynomial_trajectory__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__generate_polynomial_trajectory__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__generate_polynomial_trajectory__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__generate_polynomial_trajectory__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__generate_polynomial_trajectory__feedback_message

            from as2_msgs.action import GeneratePolynomialTrajectory
            if GeneratePolynomialTrajectory.Feedback.__class__._TYPE_SUPPORT is None:
                GeneratePolynomialTrajectory.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeneratePolynomialTrajectory_FeedbackMessage(metaclass=Metaclass_GeneratePolynomialTrajectory_FeedbackMessage):
    """Message class 'GeneratePolynomialTrajectory_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'as2_msgs/GeneratePolynomialTrajectory_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['as2_msgs', 'action'], 'GeneratePolynomialTrajectory_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_Feedback
        self.feedback = kwargs.get('feedback', GeneratePolynomialTrajectory_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_Feedback
            assert \
                isinstance(value, GeneratePolynomialTrajectory_Feedback), \
                "The 'feedback' field must be a sub message of type 'GeneratePolynomialTrajectory_Feedback'"
        self._feedback = value


class Metaclass_GeneratePolynomialTrajectory(type):
    """Metaclass of action 'GeneratePolynomialTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('as2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'as2_msgs.action.GeneratePolynomialTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__generate_polynomial_trajectory

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from as2_msgs.action import _generate_polynomial_trajectory
            if _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_SendGoal._TYPE_SUPPORT is None:
                _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_SendGoal.__import_type_support__()
            if _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_GetResult._TYPE_SUPPORT is None:
                _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_GetResult.__import_type_support__()
            if _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_FeedbackMessage._TYPE_SUPPORT is None:
                _generate_polynomial_trajectory.Metaclass_GeneratePolynomialTrajectory_FeedbackMessage.__import_type_support__()


class GeneratePolynomialTrajectory(metaclass=Metaclass_GeneratePolynomialTrajectory):

    # The goal message defined in the action definition.
    from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_Goal as Goal
    # The result message defined in the action definition.
    from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_Result as Result
    # The feedback message defined in the action definition.
    from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from as2_msgs.action._generate_polynomial_trajectory import GeneratePolynomialTrajectory_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
