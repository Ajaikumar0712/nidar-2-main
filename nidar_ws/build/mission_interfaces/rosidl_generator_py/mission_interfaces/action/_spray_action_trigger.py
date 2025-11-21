# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mission_interfaces:action/SprayActionTrigger.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SprayActionTrigger_Goal(type):
    """Metaclass of message 'SprayActionTrigger_Goal'."""

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
                'mission_interfaces.action.SprayActionTrigger_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__spray_action_trigger__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__spray_action_trigger__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__spray_action_trigger__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__spray_action_trigger__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__spray_action_trigger__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SprayActionTrigger_Goal(metaclass=Metaclass_SprayActionTrigger_Goal):
    """Message class 'SprayActionTrigger_Goal'."""

    __slots__ = [
        '_latitude',
        '_longitude',
        '_altitude',
        '_spray_rate',
        '_spray_volume',
        '_area_radius',
        '_hold_position',
        '_pattern',
    ]

    _fields_and_field_types = {
        'latitude': 'double',
        'longitude': 'double',
        'altitude': 'double',
        'spray_rate': 'float',
        'spray_volume': 'float',
        'area_radius': 'double',
        'hold_position': 'boolean',
        'pattern': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.altitude = kwargs.get('altitude', float())
        self.spray_rate = kwargs.get('spray_rate', float())
        self.spray_volume = kwargs.get('spray_volume', float())
        self.area_radius = kwargs.get('area_radius', float())
        self.hold_position = kwargs.get('hold_position', bool())
        self.pattern = kwargs.get('pattern', str())

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
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.altitude != other.altitude:
            return False
        if self.spray_rate != other.spray_rate:
            return False
        if self.spray_volume != other.spray_volume:
            return False
        if self.area_radius != other.area_radius:
            return False
        if self.hold_position != other.hold_position:
            return False
        if self.pattern != other.pattern:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude = value

    @builtins.property
    def spray_rate(self):
        """Message field 'spray_rate'."""
        return self._spray_rate

    @spray_rate.setter
    def spray_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'spray_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'spray_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._spray_rate = value

    @builtins.property
    def spray_volume(self):
        """Message field 'spray_volume'."""
        return self._spray_volume

    @spray_volume.setter
    def spray_volume(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'spray_volume' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'spray_volume' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._spray_volume = value

    @builtins.property
    def area_radius(self):
        """Message field 'area_radius'."""
        return self._area_radius

    @area_radius.setter
    def area_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'area_radius' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'area_radius' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._area_radius = value

    @builtins.property
    def hold_position(self):
        """Message field 'hold_position'."""
        return self._hold_position

    @hold_position.setter
    def hold_position(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hold_position' field must be of type 'bool'"
        self._hold_position = value

    @builtins.property
    def pattern(self):
        """Message field 'pattern'."""
        return self._pattern

    @pattern.setter
    def pattern(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pattern' field must be of type 'str'"
        self._pattern = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SprayActionTrigger_Result(type):
    """Metaclass of message 'SprayActionTrigger_Result'."""

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
                'mission_interfaces.action.SprayActionTrigger_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__spray_action_trigger__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__spray_action_trigger__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__spray_action_trigger__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__spray_action_trigger__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__spray_action_trigger__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SprayActionTrigger_Result(metaclass=Metaclass_SprayActionTrigger_Result):
    """Message class 'SprayActionTrigger_Result'."""

    __slots__ = [
        '_success',
        '_sprayed_volume',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'double',
        'sprayed_volume': 'float',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', float())
        self.sprayed_volume = kwargs.get('sprayed_volume', float())
        self.message = kwargs.get('message', str())

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
        if self.sprayed_volume != other.sprayed_volume:
            return False
        if self.message != other.message:
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
                isinstance(value, float), \
                "The 'success' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'success' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._success = value

    @builtins.property
    def sprayed_volume(self):
        """Message field 'sprayed_volume'."""
        return self._sprayed_volume

    @sprayed_volume.setter
    def sprayed_volume(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sprayed_volume' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sprayed_volume' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sprayed_volume = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SprayActionTrigger_Feedback(type):
    """Metaclass of message 'SprayActionTrigger_Feedback'."""

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
                'mission_interfaces.action.SprayActionTrigger_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__spray_action_trigger__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__spray_action_trigger__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__spray_action_trigger__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__spray_action_trigger__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__spray_action_trigger__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SprayActionTrigger_Feedback(metaclass=Metaclass_SprayActionTrigger_Feedback):
    """Message class 'SprayActionTrigger_Feedback'."""

    __slots__ = [
        '_current_lat',
        '_current_lon',
        '_current_alt',
        '_sprayed_percent',
    ]

    _fields_and_field_types = {
        'current_lat': 'double',
        'current_lon': 'double',
        'current_alt': 'double',
        'sprayed_percent': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_lat = kwargs.get('current_lat', float())
        self.current_lon = kwargs.get('current_lon', float())
        self.current_alt = kwargs.get('current_alt', float())
        self.sprayed_percent = kwargs.get('sprayed_percent', float())

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
        if self.current_lat != other.current_lat:
            return False
        if self.current_lon != other.current_lon:
            return False
        if self.current_alt != other.current_alt:
            return False
        if self.sprayed_percent != other.sprayed_percent:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_lat(self):
        """Message field 'current_lat'."""
        return self._current_lat

    @current_lat.setter
    def current_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_lat = value

    @builtins.property
    def current_lon(self):
        """Message field 'current_lon'."""
        return self._current_lon

    @current_lon.setter
    def current_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_lon = value

    @builtins.property
    def current_alt(self):
        """Message field 'current_alt'."""
        return self._current_alt

    @current_alt.setter
    def current_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_alt' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_alt' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_alt = value

    @builtins.property
    def sprayed_percent(self):
        """Message field 'sprayed_percent'."""
        return self._sprayed_percent

    @sprayed_percent.setter
    def sprayed_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sprayed_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sprayed_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sprayed_percent = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SprayActionTrigger_SendGoal_Request(type):
    """Metaclass of message 'SprayActionTrigger_SendGoal_Request'."""

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
                'mission_interfaces.action.SprayActionTrigger_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__spray_action_trigger__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__spray_action_trigger__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__spray_action_trigger__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__spray_action_trigger__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__spray_action_trigger__send_goal__request

            from mission_interfaces.action import SprayActionTrigger
            if SprayActionTrigger.Goal.__class__._TYPE_SUPPORT is None:
                SprayActionTrigger.Goal.__class__.__import_type_support__()

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


class SprayActionTrigger_SendGoal_Request(metaclass=Metaclass_SprayActionTrigger_SendGoal_Request):
    """Message class 'SprayActionTrigger_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'mission_interfaces/SprayActionTrigger_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mission_interfaces', 'action'], 'SprayActionTrigger_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_Goal
        self.goal = kwargs.get('goal', SprayActionTrigger_Goal())

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
            from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_Goal
            assert \
                isinstance(value, SprayActionTrigger_Goal), \
                "The 'goal' field must be a sub message of type 'SprayActionTrigger_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SprayActionTrigger_SendGoal_Response(type):
    """Metaclass of message 'SprayActionTrigger_SendGoal_Response'."""

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
                'mission_interfaces.action.SprayActionTrigger_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__spray_action_trigger__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__spray_action_trigger__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__spray_action_trigger__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__spray_action_trigger__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__spray_action_trigger__send_goal__response

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


class SprayActionTrigger_SendGoal_Response(metaclass=Metaclass_SprayActionTrigger_SendGoal_Response):
    """Message class 'SprayActionTrigger_SendGoal_Response'."""

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


class Metaclass_SprayActionTrigger_SendGoal(type):
    """Metaclass of service 'SprayActionTrigger_SendGoal'."""

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
                'mission_interfaces.action.SprayActionTrigger_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__spray_action_trigger__send_goal

            from mission_interfaces.action import _spray_action_trigger
            if _spray_action_trigger.Metaclass_SprayActionTrigger_SendGoal_Request._TYPE_SUPPORT is None:
                _spray_action_trigger.Metaclass_SprayActionTrigger_SendGoal_Request.__import_type_support__()
            if _spray_action_trigger.Metaclass_SprayActionTrigger_SendGoal_Response._TYPE_SUPPORT is None:
                _spray_action_trigger.Metaclass_SprayActionTrigger_SendGoal_Response.__import_type_support__()


class SprayActionTrigger_SendGoal(metaclass=Metaclass_SprayActionTrigger_SendGoal):
    from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_SendGoal_Request as Request
    from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SprayActionTrigger_GetResult_Request(type):
    """Metaclass of message 'SprayActionTrigger_GetResult_Request'."""

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
                'mission_interfaces.action.SprayActionTrigger_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__spray_action_trigger__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__spray_action_trigger__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__spray_action_trigger__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__spray_action_trigger__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__spray_action_trigger__get_result__request

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


class SprayActionTrigger_GetResult_Request(metaclass=Metaclass_SprayActionTrigger_GetResult_Request):
    """Message class 'SprayActionTrigger_GetResult_Request'."""

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


class Metaclass_SprayActionTrigger_GetResult_Response(type):
    """Metaclass of message 'SprayActionTrigger_GetResult_Response'."""

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
                'mission_interfaces.action.SprayActionTrigger_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__spray_action_trigger__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__spray_action_trigger__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__spray_action_trigger__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__spray_action_trigger__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__spray_action_trigger__get_result__response

            from mission_interfaces.action import SprayActionTrigger
            if SprayActionTrigger.Result.__class__._TYPE_SUPPORT is None:
                SprayActionTrigger.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SprayActionTrigger_GetResult_Response(metaclass=Metaclass_SprayActionTrigger_GetResult_Response):
    """Message class 'SprayActionTrigger_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'mission_interfaces/SprayActionTrigger_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mission_interfaces', 'action'], 'SprayActionTrigger_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_Result
        self.result = kwargs.get('result', SprayActionTrigger_Result())

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
            from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_Result
            assert \
                isinstance(value, SprayActionTrigger_Result), \
                "The 'result' field must be a sub message of type 'SprayActionTrigger_Result'"
        self._result = value


class Metaclass_SprayActionTrigger_GetResult(type):
    """Metaclass of service 'SprayActionTrigger_GetResult'."""

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
                'mission_interfaces.action.SprayActionTrigger_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__spray_action_trigger__get_result

            from mission_interfaces.action import _spray_action_trigger
            if _spray_action_trigger.Metaclass_SprayActionTrigger_GetResult_Request._TYPE_SUPPORT is None:
                _spray_action_trigger.Metaclass_SprayActionTrigger_GetResult_Request.__import_type_support__()
            if _spray_action_trigger.Metaclass_SprayActionTrigger_GetResult_Response._TYPE_SUPPORT is None:
                _spray_action_trigger.Metaclass_SprayActionTrigger_GetResult_Response.__import_type_support__()


class SprayActionTrigger_GetResult(metaclass=Metaclass_SprayActionTrigger_GetResult):
    from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_GetResult_Request as Request
    from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SprayActionTrigger_FeedbackMessage(type):
    """Metaclass of message 'SprayActionTrigger_FeedbackMessage'."""

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
                'mission_interfaces.action.SprayActionTrigger_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__spray_action_trigger__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__spray_action_trigger__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__spray_action_trigger__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__spray_action_trigger__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__spray_action_trigger__feedback_message

            from mission_interfaces.action import SprayActionTrigger
            if SprayActionTrigger.Feedback.__class__._TYPE_SUPPORT is None:
                SprayActionTrigger.Feedback.__class__.__import_type_support__()

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


class SprayActionTrigger_FeedbackMessage(metaclass=Metaclass_SprayActionTrigger_FeedbackMessage):
    """Message class 'SprayActionTrigger_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'mission_interfaces/SprayActionTrigger_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mission_interfaces', 'action'], 'SprayActionTrigger_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_Feedback
        self.feedback = kwargs.get('feedback', SprayActionTrigger_Feedback())

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
            from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_Feedback
            assert \
                isinstance(value, SprayActionTrigger_Feedback), \
                "The 'feedback' field must be a sub message of type 'SprayActionTrigger_Feedback'"
        self._feedback = value


class Metaclass_SprayActionTrigger(type):
    """Metaclass of action 'SprayActionTrigger'."""

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
                'mission_interfaces.action.SprayActionTrigger')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__spray_action_trigger

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from mission_interfaces.action import _spray_action_trigger
            if _spray_action_trigger.Metaclass_SprayActionTrigger_SendGoal._TYPE_SUPPORT is None:
                _spray_action_trigger.Metaclass_SprayActionTrigger_SendGoal.__import_type_support__()
            if _spray_action_trigger.Metaclass_SprayActionTrigger_GetResult._TYPE_SUPPORT is None:
                _spray_action_trigger.Metaclass_SprayActionTrigger_GetResult.__import_type_support__()
            if _spray_action_trigger.Metaclass_SprayActionTrigger_FeedbackMessage._TYPE_SUPPORT is None:
                _spray_action_trigger.Metaclass_SprayActionTrigger_FeedbackMessage.__import_type_support__()


class SprayActionTrigger(metaclass=Metaclass_SprayActionTrigger):

    # The goal message defined in the action definition.
    from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_Goal as Goal
    # The result message defined in the action definition.
    from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_Result as Result
    # The feedback message defined in the action definition.
    from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from mission_interfaces.action._spray_action_trigger import SprayActionTrigger_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
