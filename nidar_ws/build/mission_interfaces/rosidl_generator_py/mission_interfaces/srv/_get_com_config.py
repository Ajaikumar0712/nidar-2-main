# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mission_interfaces:srv/GetComConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetComConfig_Request(type):
    """Metaclass of message 'GetComConfig_Request'."""

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
            module = import_type_support('mission_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mission_interfaces.srv.GetComConfig_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_com_config__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_com_config__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_com_config__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_com_config__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_com_config__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetComConfig_Request(metaclass=Metaclass_GetComConfig_Request):
    """Message class 'GetComConfig_Request'."""

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


class Metaclass_GetComConfig_Response(type):
    """Metaclass of message 'GetComConfig_Response'."""

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
            module = import_type_support('mission_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mission_interfaces.srv.GetComConfig_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_com_config__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_com_config__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_com_config__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_com_config__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_com_config__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetComConfig_Response(metaclass=Metaclass_GetComConfig_Response):
    """Message class 'GetComConfig_Response'."""

    __slots__ = [
        '_ros_ip',
        '_ros_port',
        '_scout_video_port',
        '_scout_video_ip',
        '_delivery_video_port',
        '_delivery_video_ip',
        '_message',
        '_success',
    ]

    _fields_and_field_types = {
        'ros_ip': 'string',
        'ros_port': 'string',
        'scout_video_port': 'string',
        'scout_video_ip': 'string',
        'delivery_video_port': 'string',
        'delivery_video_ip': 'string',
        'message': 'string',
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ros_ip = kwargs.get('ros_ip', str())
        self.ros_port = kwargs.get('ros_port', str())
        self.scout_video_port = kwargs.get('scout_video_port', str())
        self.scout_video_ip = kwargs.get('scout_video_ip', str())
        self.delivery_video_port = kwargs.get('delivery_video_port', str())
        self.delivery_video_ip = kwargs.get('delivery_video_ip', str())
        self.message = kwargs.get('message', str())
        self.success = kwargs.get('success', bool())

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
        if self.ros_ip != other.ros_ip:
            return False
        if self.ros_port != other.ros_port:
            return False
        if self.scout_video_port != other.scout_video_port:
            return False
        if self.scout_video_ip != other.scout_video_ip:
            return False
        if self.delivery_video_port != other.delivery_video_port:
            return False
        if self.delivery_video_ip != other.delivery_video_ip:
            return False
        if self.message != other.message:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ros_ip(self):
        """Message field 'ros_ip'."""
        return self._ros_ip

    @ros_ip.setter
    def ros_ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ros_ip' field must be of type 'str'"
        self._ros_ip = value

    @builtins.property
    def ros_port(self):
        """Message field 'ros_port'."""
        return self._ros_port

    @ros_port.setter
    def ros_port(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ros_port' field must be of type 'str'"
        self._ros_port = value

    @builtins.property
    def scout_video_port(self):
        """Message field 'scout_video_port'."""
        return self._scout_video_port

    @scout_video_port.setter
    def scout_video_port(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'scout_video_port' field must be of type 'str'"
        self._scout_video_port = value

    @builtins.property
    def scout_video_ip(self):
        """Message field 'scout_video_ip'."""
        return self._scout_video_ip

    @scout_video_ip.setter
    def scout_video_ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'scout_video_ip' field must be of type 'str'"
        self._scout_video_ip = value

    @builtins.property
    def delivery_video_port(self):
        """Message field 'delivery_video_port'."""
        return self._delivery_video_port

    @delivery_video_port.setter
    def delivery_video_port(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'delivery_video_port' field must be of type 'str'"
        self._delivery_video_port = value

    @builtins.property
    def delivery_video_ip(self):
        """Message field 'delivery_video_ip'."""
        return self._delivery_video_ip

    @delivery_video_ip.setter
    def delivery_video_ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'delivery_video_ip' field must be of type 'str'"
        self._delivery_video_ip = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

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


class Metaclass_GetComConfig(type):
    """Metaclass of service 'GetComConfig'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mission_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mission_interfaces.srv.GetComConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_com_config

            from mission_interfaces.srv import _get_com_config
            if _get_com_config.Metaclass_GetComConfig_Request._TYPE_SUPPORT is None:
                _get_com_config.Metaclass_GetComConfig_Request.__import_type_support__()
            if _get_com_config.Metaclass_GetComConfig_Response._TYPE_SUPPORT is None:
                _get_com_config.Metaclass_GetComConfig_Response.__import_type_support__()


class GetComConfig(metaclass=Metaclass_GetComConfig):
    from mission_interfaces.srv._get_com_config import GetComConfig_Request as Request
    from mission_interfaces.srv._get_com_config import GetComConfig_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
