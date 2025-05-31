# generated from rosidl_generator_py/resource/_idl.py.em
# with input from crs_ros2_interfaces:msg/PwmCmd.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PwmCmd(type):
    """Metaclass of message 'PwmCmd'."""

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
            module = import_type_support('crs_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'crs_ros2_interfaces.msg.PwmCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pwm_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pwm_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pwm_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pwm_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pwm_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PwmCmd(metaclass=Metaclass_PwmCmd):
    """Message class 'PwmCmd'."""

    __slots__ = [
        '_pwm_flt',
        '_pwm_frt',
        '_pwm_rlt',
        '_pwm_rrt',
        '_pwm_flb',
        '_pwm_frb',
        '_pwm_rlb',
        '_pwm_rrb',
        '_is_timed',
        '_duration',
        '_is_overriding',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'pwm_flt': 'int32',
        'pwm_frt': 'int32',
        'pwm_rlt': 'int32',
        'pwm_rrt': 'int32',
        'pwm_flb': 'int32',
        'pwm_frb': 'int32',
        'pwm_rlb': 'int32',
        'pwm_rrb': 'int32',
        'is_timed': 'boolean',
        'duration': 'int64',
        'is_overriding': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pwm_flt = kwargs.get('pwm_flt', int())
        self.pwm_frt = kwargs.get('pwm_frt', int())
        self.pwm_rlt = kwargs.get('pwm_rlt', int())
        self.pwm_rrt = kwargs.get('pwm_rrt', int())
        self.pwm_flb = kwargs.get('pwm_flb', int())
        self.pwm_frb = kwargs.get('pwm_frb', int())
        self.pwm_rlb = kwargs.get('pwm_rlb', int())
        self.pwm_rrb = kwargs.get('pwm_rrb', int())
        self.is_timed = kwargs.get('is_timed', bool())
        self.duration = kwargs.get('duration', int())
        self.is_overriding = kwargs.get('is_overriding', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.pwm_flt != other.pwm_flt:
            return False
        if self.pwm_frt != other.pwm_frt:
            return False
        if self.pwm_rlt != other.pwm_rlt:
            return False
        if self.pwm_rrt != other.pwm_rrt:
            return False
        if self.pwm_flb != other.pwm_flb:
            return False
        if self.pwm_frb != other.pwm_frb:
            return False
        if self.pwm_rlb != other.pwm_rlb:
            return False
        if self.pwm_rrb != other.pwm_rrb:
            return False
        if self.is_timed != other.is_timed:
            return False
        if self.duration != other.duration:
            return False
        if self.is_overriding != other.is_overriding:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pwm_flt(self):
        """Message field 'pwm_flt'."""
        return self._pwm_flt

    @pwm_flt.setter
    def pwm_flt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pwm_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwm_flt' field must be an integer in [-2147483648, 2147483647]"
        self._pwm_flt = value

    @builtins.property
    def pwm_frt(self):
        """Message field 'pwm_frt'."""
        return self._pwm_frt

    @pwm_frt.setter
    def pwm_frt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pwm_frt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwm_frt' field must be an integer in [-2147483648, 2147483647]"
        self._pwm_frt = value

    @builtins.property
    def pwm_rlt(self):
        """Message field 'pwm_rlt'."""
        return self._pwm_rlt

    @pwm_rlt.setter
    def pwm_rlt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pwm_rlt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwm_rlt' field must be an integer in [-2147483648, 2147483647]"
        self._pwm_rlt = value

    @builtins.property
    def pwm_rrt(self):
        """Message field 'pwm_rrt'."""
        return self._pwm_rrt

    @pwm_rrt.setter
    def pwm_rrt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pwm_rrt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwm_rrt' field must be an integer in [-2147483648, 2147483647]"
        self._pwm_rrt = value

    @builtins.property
    def pwm_flb(self):
        """Message field 'pwm_flb'."""
        return self._pwm_flb

    @pwm_flb.setter
    def pwm_flb(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pwm_flb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwm_flb' field must be an integer in [-2147483648, 2147483647]"
        self._pwm_flb = value

    @builtins.property
    def pwm_frb(self):
        """Message field 'pwm_frb'."""
        return self._pwm_frb

    @pwm_frb.setter
    def pwm_frb(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pwm_frb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwm_frb' field must be an integer in [-2147483648, 2147483647]"
        self._pwm_frb = value

    @builtins.property
    def pwm_rlb(self):
        """Message field 'pwm_rlb'."""
        return self._pwm_rlb

    @pwm_rlb.setter
    def pwm_rlb(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pwm_rlb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwm_rlb' field must be an integer in [-2147483648, 2147483647]"
        self._pwm_rlb = value

    @builtins.property
    def pwm_rrb(self):
        """Message field 'pwm_rrb'."""
        return self._pwm_rrb

    @pwm_rrb.setter
    def pwm_rrb(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pwm_rrb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pwm_rrb' field must be an integer in [-2147483648, 2147483647]"
        self._pwm_rrb = value

    @builtins.property
    def is_timed(self):
        """Message field 'is_timed'."""
        return self._is_timed

    @is_timed.setter
    def is_timed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_timed' field must be of type 'bool'"
        self._is_timed = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'duration' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'duration' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._duration = value

    @builtins.property
    def is_overriding(self):
        """Message field 'is_overriding'."""
        return self._is_overriding

    @is_overriding.setter
    def is_overriding(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_overriding' field must be of type 'bool'"
        self._is_overriding = value
