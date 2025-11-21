# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mission_interfaces:srv/GetLawnmowerPath.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'polygon_x'
# Member 'polygon_y'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetLawnmowerPath_Request(type):
    """Metaclass of message 'GetLawnmowerPath_Request'."""

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
                'mission_interfaces.srv.GetLawnmowerPath_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_lawnmower_path__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_lawnmower_path__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_lawnmower_path__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_lawnmower_path__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_lawnmower_path__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetLawnmowerPath_Request(metaclass=Metaclass_GetLawnmowerPath_Request):
    """Message class 'GetLawnmowerPath_Request'."""

    __slots__ = [
        '_polygon_x',
        '_polygon_y',
        '_safe_margin',
        '_spacing',
        '_angle',
    ]

    _fields_and_field_types = {
        'polygon_x': 'sequence<double>',
        'polygon_y': 'sequence<double>',
        'safe_margin': 'double',
        'spacing': 'double',
        'angle': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.polygon_x = array.array('d', kwargs.get('polygon_x', []))
        self.polygon_y = array.array('d', kwargs.get('polygon_y', []))
        self.safe_margin = kwargs.get('safe_margin', float())
        self.spacing = kwargs.get('spacing', float())
        self.angle = kwargs.get('angle', float())

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
        if self.polygon_x != other.polygon_x:
            return False
        if self.polygon_y != other.polygon_y:
            return False
        if self.safe_margin != other.safe_margin:
            return False
        if self.spacing != other.spacing:
            return False
        if self.angle != other.angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def polygon_x(self):
        """Message field 'polygon_x'."""
        return self._polygon_x

    @polygon_x.setter
    def polygon_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'polygon_x' array.array() must have the type code of 'd'"
            self._polygon_x = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'polygon_x' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._polygon_x = array.array('d', value)

    @builtins.property
    def polygon_y(self):
        """Message field 'polygon_y'."""
        return self._polygon_y

    @polygon_y.setter
    def polygon_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'polygon_y' array.array() must have the type code of 'd'"
            self._polygon_y = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'polygon_y' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._polygon_y = array.array('d', value)

    @builtins.property
    def safe_margin(self):
        """Message field 'safe_margin'."""
        return self._safe_margin

    @safe_margin.setter
    def safe_margin(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'safe_margin' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'safe_margin' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._safe_margin = value

    @builtins.property
    def spacing(self):
        """Message field 'spacing'."""
        return self._spacing

    @spacing.setter
    def spacing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'spacing' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'spacing' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._spacing = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle = value


# Import statements for member types

# Member 'waypoint_x'
# Member 'waypoint_y'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_GetLawnmowerPath_Response(type):
    """Metaclass of message 'GetLawnmowerPath_Response'."""

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
                'mission_interfaces.srv.GetLawnmowerPath_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_lawnmower_path__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_lawnmower_path__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_lawnmower_path__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_lawnmower_path__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_lawnmower_path__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetLawnmowerPath_Response(metaclass=Metaclass_GetLawnmowerPath_Response):
    """Message class 'GetLawnmowerPath_Response'."""

    __slots__ = [
        '_waypoint_x',
        '_waypoint_y',
    ]

    _fields_and_field_types = {
        'waypoint_x': 'sequence<double>',
        'waypoint_y': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.waypoint_x = array.array('d', kwargs.get('waypoint_x', []))
        self.waypoint_y = array.array('d', kwargs.get('waypoint_y', []))

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
        if self.waypoint_x != other.waypoint_x:
            return False
        if self.waypoint_y != other.waypoint_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def waypoint_x(self):
        """Message field 'waypoint_x'."""
        return self._waypoint_x

    @waypoint_x.setter
    def waypoint_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'waypoint_x' array.array() must have the type code of 'd'"
            self._waypoint_x = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'waypoint_x' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._waypoint_x = array.array('d', value)

    @builtins.property
    def waypoint_y(self):
        """Message field 'waypoint_y'."""
        return self._waypoint_y

    @waypoint_y.setter
    def waypoint_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'waypoint_y' array.array() must have the type code of 'd'"
            self._waypoint_y = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'waypoint_y' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._waypoint_y = array.array('d', value)


class Metaclass_GetLawnmowerPath(type):
    """Metaclass of service 'GetLawnmowerPath'."""

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
                'mission_interfaces.srv.GetLawnmowerPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_lawnmower_path

            from mission_interfaces.srv import _get_lawnmower_path
            if _get_lawnmower_path.Metaclass_GetLawnmowerPath_Request._TYPE_SUPPORT is None:
                _get_lawnmower_path.Metaclass_GetLawnmowerPath_Request.__import_type_support__()
            if _get_lawnmower_path.Metaclass_GetLawnmowerPath_Response._TYPE_SUPPORT is None:
                _get_lawnmower_path.Metaclass_GetLawnmowerPath_Response.__import_type_support__()


class GetLawnmowerPath(metaclass=Metaclass_GetLawnmowerPath):
    from mission_interfaces.srv._get_lawnmower_path import GetLawnmowerPath_Request as Request
    from mission_interfaces.srv._get_lawnmower_path import GetLawnmowerPath_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
