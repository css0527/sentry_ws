# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_interfaces:msg/SentryCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SentryCmd(type):
    """Metaclass of message 'SentryCmd'."""

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
            module = import_type_support('rm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rm_interfaces.msg.SentryCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sentry_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sentry_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sentry_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sentry_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sentry_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SentryCmd(metaclass=Metaclass_SentryCmd):
    """Message class 'SentryCmd'."""

    __slots__ = [
        '_resurrection_en',
        '_buy_resurrection_en',
        '_buy_projectile_allowance',
        '_buy_projectile_times',
        '_buy_hp_times',
    ]

    _fields_and_field_types = {
        'resurrection_en': 'boolean',
        'buy_resurrection_en': 'boolean',
        'buy_projectile_allowance': 'uint16',
        'buy_projectile_times': 'uint16',
        'buy_hp_times': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.resurrection_en = kwargs.get('resurrection_en', bool())
        self.buy_resurrection_en = kwargs.get('buy_resurrection_en', bool())
        self.buy_projectile_allowance = kwargs.get('buy_projectile_allowance', int())
        self.buy_projectile_times = kwargs.get('buy_projectile_times', int())
        self.buy_hp_times = kwargs.get('buy_hp_times', int())

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
        if self.resurrection_en != other.resurrection_en:
            return False
        if self.buy_resurrection_en != other.buy_resurrection_en:
            return False
        if self.buy_projectile_allowance != other.buy_projectile_allowance:
            return False
        if self.buy_projectile_times != other.buy_projectile_times:
            return False
        if self.buy_hp_times != other.buy_hp_times:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def resurrection_en(self):
        """Message field 'resurrection_en'."""
        return self._resurrection_en

    @resurrection_en.setter
    def resurrection_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'resurrection_en' field must be of type 'bool'"
        self._resurrection_en = value

    @builtins.property
    def buy_resurrection_en(self):
        """Message field 'buy_resurrection_en'."""
        return self._buy_resurrection_en

    @buy_resurrection_en.setter
    def buy_resurrection_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'buy_resurrection_en' field must be of type 'bool'"
        self._buy_resurrection_en = value

    @builtins.property
    def buy_projectile_allowance(self):
        """Message field 'buy_projectile_allowance'."""
        return self._buy_projectile_allowance

    @buy_projectile_allowance.setter
    def buy_projectile_allowance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'buy_projectile_allowance' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'buy_projectile_allowance' field must be an unsigned integer in [0, 65535]"
        self._buy_projectile_allowance = value

    @builtins.property
    def buy_projectile_times(self):
        """Message field 'buy_projectile_times'."""
        return self._buy_projectile_times

    @buy_projectile_times.setter
    def buy_projectile_times(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'buy_projectile_times' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'buy_projectile_times' field must be an unsigned integer in [0, 65535]"
        self._buy_projectile_times = value

    @builtins.property
    def buy_hp_times(self):
        """Message field 'buy_hp_times'."""
        return self._buy_hp_times

    @buy_hp_times.setter
    def buy_hp_times(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'buy_hp_times' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'buy_hp_times' field must be an unsigned integer in [0, 65535]"
        self._buy_hp_times = value
