# generated from rosidl_generator_py/resource/_idl.py.em
# with input from as2_msgs:srv/GetOrigin.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetOrigin_Request(type):
    """Metaclass of message 'GetOrigin_Request'."""

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
                'as2_msgs.srv.GetOrigin_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_origin__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_origin__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_origin__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_origin__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_origin__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetOrigin_Request(metaclass=Metaclass_GetOrigin_Request):
    """Message class 'GetOrigin_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetOrigin_Response(type):
    """Metaclass of message 'GetOrigin_Response'."""

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
                'as2_msgs.srv.GetOrigin_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_origin__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_origin__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_origin__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_origin__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_origin__response

            from geographic_msgs.msg import GeoPoint
            if GeoPoint.__class__._TYPE_SUPPORT is None:
                GeoPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetOrigin_Response(metaclass=Metaclass_GetOrigin_Response):
    """Message class 'GetOrigin_Response'."""

    __slots__ = [
        '_success',
        '_origin',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'origin': 'geographic_msgs/GeoPoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geographic_msgs', 'msg'], 'GeoPoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        from geographic_msgs.msg import GeoPoint
        self.origin = kwargs.get('origin', GeoPoint())

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
        if self.success != other.success:
            return False
        if self.origin != other.origin:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def origin(self):
        """Message field 'origin'."""
        return self._origin

    @origin.setter
    def origin(self, value):
        if __debug__:
            from geographic_msgs.msg import GeoPoint
            assert \
                isinstance(value, GeoPoint), \
                "The 'origin' field must be a sub message of type 'GeoPoint'"
        self._origin = value


class Metaclass_GetOrigin(type):
    """Metaclass of service 'GetOrigin'."""

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
                'as2_msgs.srv.GetOrigin')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_origin

            from as2_msgs.srv import _get_origin
            if _get_origin.Metaclass_GetOrigin_Request._TYPE_SUPPORT is None:
                _get_origin.Metaclass_GetOrigin_Request.__import_type_support__()
            if _get_origin.Metaclass_GetOrigin_Response._TYPE_SUPPORT is None:
                _get_origin.Metaclass_GetOrigin_Response.__import_type_support__()


class GetOrigin(metaclass=Metaclass_GetOrigin):
    from as2_msgs.srv._get_origin import GetOrigin_Request as Request
    from as2_msgs.srv._get_origin import GetOrigin_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
