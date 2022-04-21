# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbock_custom_interface:srv/IniPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IniPose_Request(type):
    """Metaclass of message 'IniPose_Request'."""

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
            module = import_type_support('sbock_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sbock_custom_interface.srv.IniPose_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ini_pose__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ini_pose__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ini_pose__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ini_pose__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ini_pose__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IniPose_Request(metaclass=Metaclass_IniPose_Request):
    """Message class 'IniPose_Request'."""

    __slots__ = [
        '_pos_x',
        '_pos_y',
        '_orien_z',
        '_orien_w',
    ]

    _fields_and_field_types = {
        'pos_x': 'double',
        'pos_y': 'double',
        'orien_z': 'double',
        'orien_w': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pos_x = kwargs.get('pos_x', float())
        self.pos_y = kwargs.get('pos_y', float())
        self.orien_z = kwargs.get('orien_z', float())
        self.orien_w = kwargs.get('orien_w', float())

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
        if self.pos_x != other.pos_x:
            return False
        if self.pos_y != other.pos_y:
            return False
        if self.orien_z != other.orien_z:
            return False
        if self.orien_w != other.orien_w:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pos_x(self):
        """Message field 'pos_x'."""
        return self._pos_x

    @pos_x.setter
    def pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_x' field must be of type 'float'"
        self._pos_x = value

    @property
    def pos_y(self):
        """Message field 'pos_y'."""
        return self._pos_y

    @pos_y.setter
    def pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_y' field must be of type 'float'"
        self._pos_y = value

    @property
    def orien_z(self):
        """Message field 'orien_z'."""
        return self._orien_z

    @orien_z.setter
    def orien_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orien_z' field must be of type 'float'"
        self._orien_z = value

    @property
    def orien_w(self):
        """Message field 'orien_w'."""
        return self._orien_w

    @orien_w.setter
    def orien_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orien_w' field must be of type 'float'"
        self._orien_w = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_IniPose_Response(type):
    """Metaclass of message 'IniPose_Response'."""

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
            module = import_type_support('sbock_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sbock_custom_interface.srv.IniPose_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ini_pose__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ini_pose__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ini_pose__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ini_pose__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ini_pose__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IniPose_Response(metaclass=Metaclass_IniPose_Response):
    """Message class 'IniPose_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
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


class Metaclass_IniPose(type):
    """Metaclass of service 'IniPose'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sbock_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sbock_custom_interface.srv.IniPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ini_pose

            from sbock_custom_interface.srv import _ini_pose
            if _ini_pose.Metaclass_IniPose_Request._TYPE_SUPPORT is None:
                _ini_pose.Metaclass_IniPose_Request.__import_type_support__()
            if _ini_pose.Metaclass_IniPose_Response._TYPE_SUPPORT is None:
                _ini_pose.Metaclass_IniPose_Response.__import_type_support__()


class IniPose(metaclass=Metaclass_IniPose):
    from sbock_custom_interface.srv._ini_pose import IniPose_Request as Request
    from sbock_custom_interface.srv._ini_pose import IniPose_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
