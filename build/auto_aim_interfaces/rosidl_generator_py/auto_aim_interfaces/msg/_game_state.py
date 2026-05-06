# generated from rosidl_generator_py/resource/_idl.py.em
# with input from auto_aim_interfaces:msg/GameState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GameState(type):
    """Metaclass of message 'GameState'."""

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
            module = import_type_support('auto_aim_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'auto_aim_interfaces.msg.GameState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__game_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__game_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__game_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__game_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__game_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GameState(metaclass=Metaclass_GameState):
    """Message class 'GameState'."""

    __slots__ = [
        '_current_hp',
        '_game_progress',
        '_stage_remain_time',
        '_armor_id',
        '_hurt_type',
        '_my_outpost_hp',
        '_enemy_outpost_hp',
        '_my_base_hp',
        '_enemy_base_hp',
        '_projectile_allowance_17mm',
        '_enemy_outpost_occupied',
    ]

    _fields_and_field_types = {
        'current_hp': 'uint16',
        'game_progress': 'uint8',
        'stage_remain_time': 'uint16',
        'armor_id': 'uint8',
        'hurt_type': 'uint8',
        'my_outpost_hp': 'uint16',
        'enemy_outpost_hp': 'uint16',
        'my_base_hp': 'uint16',
        'enemy_base_hp': 'uint16',
        'projectile_allowance_17mm': 'uint16',
        'enemy_outpost_occupied': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_hp = kwargs.get('current_hp', int())
        self.game_progress = kwargs.get('game_progress', int())
        self.stage_remain_time = kwargs.get('stage_remain_time', int())
        self.armor_id = kwargs.get('armor_id', int())
        self.hurt_type = kwargs.get('hurt_type', int())
        self.my_outpost_hp = kwargs.get('my_outpost_hp', int())
        self.enemy_outpost_hp = kwargs.get('enemy_outpost_hp', int())
        self.my_base_hp = kwargs.get('my_base_hp', int())
        self.enemy_base_hp = kwargs.get('enemy_base_hp', int())
        self.projectile_allowance_17mm = kwargs.get('projectile_allowance_17mm', int())
        self.enemy_outpost_occupied = kwargs.get('enemy_outpost_occupied', int())

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
        if self.current_hp != other.current_hp:
            return False
        if self.game_progress != other.game_progress:
            return False
        if self.stage_remain_time != other.stage_remain_time:
            return False
        if self.armor_id != other.armor_id:
            return False
        if self.hurt_type != other.hurt_type:
            return False
        if self.my_outpost_hp != other.my_outpost_hp:
            return False
        if self.enemy_outpost_hp != other.enemy_outpost_hp:
            return False
        if self.my_base_hp != other.my_base_hp:
            return False
        if self.enemy_base_hp != other.enemy_base_hp:
            return False
        if self.projectile_allowance_17mm != other.projectile_allowance_17mm:
            return False
        if self.enemy_outpost_occupied != other.enemy_outpost_occupied:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_hp(self):
        """Message field 'current_hp'."""
        return self._current_hp

    @current_hp.setter
    def current_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'current_hp' field must be an unsigned integer in [0, 65535]"
        self._current_hp = value

    @builtins.property
    def game_progress(self):
        """Message field 'game_progress'."""
        return self._game_progress

    @game_progress.setter
    def game_progress(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'game_progress' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'game_progress' field must be an unsigned integer in [0, 255]"
        self._game_progress = value

    @builtins.property
    def stage_remain_time(self):
        """Message field 'stage_remain_time'."""
        return self._stage_remain_time

    @stage_remain_time.setter
    def stage_remain_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stage_remain_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'stage_remain_time' field must be an unsigned integer in [0, 65535]"
        self._stage_remain_time = value

    @builtins.property
    def armor_id(self):
        """Message field 'armor_id'."""
        return self._armor_id

    @armor_id.setter
    def armor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'armor_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'armor_id' field must be an unsigned integer in [0, 255]"
        self._armor_id = value

    @builtins.property
    def hurt_type(self):
        """Message field 'hurt_type'."""
        return self._hurt_type

    @hurt_type.setter
    def hurt_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hurt_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hurt_type' field must be an unsigned integer in [0, 255]"
        self._hurt_type = value

    @builtins.property
    def my_outpost_hp(self):
        """Message field 'my_outpost_hp'."""
        return self._my_outpost_hp

    @my_outpost_hp.setter
    def my_outpost_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'my_outpost_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'my_outpost_hp' field must be an unsigned integer in [0, 65535]"
        self._my_outpost_hp = value

    @builtins.property
    def enemy_outpost_hp(self):
        """Message field 'enemy_outpost_hp'."""
        return self._enemy_outpost_hp

    @enemy_outpost_hp.setter
    def enemy_outpost_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enemy_outpost_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'enemy_outpost_hp' field must be an unsigned integer in [0, 65535]"
        self._enemy_outpost_hp = value

    @builtins.property
    def my_base_hp(self):
        """Message field 'my_base_hp'."""
        return self._my_base_hp

    @my_base_hp.setter
    def my_base_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'my_base_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'my_base_hp' field must be an unsigned integer in [0, 65535]"
        self._my_base_hp = value

    @builtins.property
    def enemy_base_hp(self):
        """Message field 'enemy_base_hp'."""
        return self._enemy_base_hp

    @enemy_base_hp.setter
    def enemy_base_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enemy_base_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'enemy_base_hp' field must be an unsigned integer in [0, 65535]"
        self._enemy_base_hp = value

    @builtins.property
    def projectile_allowance_17mm(self):
        """Message field 'projectile_allowance_17mm'."""
        return self._projectile_allowance_17mm

    @projectile_allowance_17mm.setter
    def projectile_allowance_17mm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'projectile_allowance_17mm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'projectile_allowance_17mm' field must be an unsigned integer in [0, 65535]"
        self._projectile_allowance_17mm = value

    @builtins.property
    def enemy_outpost_occupied(self):
        """Message field 'enemy_outpost_occupied'."""
        return self._enemy_outpost_occupied

    @enemy_outpost_occupied.setter
    def enemy_outpost_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enemy_outpost_occupied' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'enemy_outpost_occupied' field must be an unsigned integer in [0, 255]"
        self._enemy_outpost_occupied = value
