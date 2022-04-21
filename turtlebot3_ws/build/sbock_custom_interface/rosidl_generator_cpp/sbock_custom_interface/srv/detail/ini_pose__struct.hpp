// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sbock_custom_interface:srv/IniPose.idl
// generated code does not contain a copyright notice

#ifndef SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__INI_POSE__STRUCT_HPP_
#define SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__INI_POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__sbock_custom_interface__srv__IniPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__sbock_custom_interface__srv__IniPose_Request __declspec(deprecated)
#endif

namespace sbock_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IniPose_Request_
{
  using Type = IniPose_Request_<ContainerAllocator>;

  explicit IniPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0.0;
      this->pos_y = 0.0;
      this->orien_z = 0.0;
      this->orien_w = 0.0;
    }
  }

  explicit IniPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0.0;
      this->pos_y = 0.0;
      this->orien_z = 0.0;
      this->orien_w = 0.0;
    }
  }

  // field types and members
  using _pos_x_type =
    double;
  _pos_x_type pos_x;
  using _pos_y_type =
    double;
  _pos_y_type pos_y;
  using _orien_z_type =
    double;
  _orien_z_type orien_z;
  using _orien_w_type =
    double;
  _orien_w_type orien_w;

  // setters for named parameter idiom
  Type & set__pos_x(
    const double & _arg)
  {
    this->pos_x = _arg;
    return *this;
  }
  Type & set__pos_y(
    const double & _arg)
  {
    this->pos_y = _arg;
    return *this;
  }
  Type & set__orien_z(
    const double & _arg)
  {
    this->orien_z = _arg;
    return *this;
  }
  Type & set__orien_w(
    const double & _arg)
  {
    this->orien_w = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbock_custom_interface::srv::IniPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbock_custom_interface::srv::IniPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbock_custom_interface::srv::IniPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbock_custom_interface::srv::IniPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbock_custom_interface::srv::IniPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbock_custom_interface::srv::IniPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbock_custom_interface::srv::IniPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbock_custom_interface::srv::IniPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbock_custom_interface::srv::IniPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbock_custom_interface::srv::IniPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbock_custom_interface__srv__IniPose_Request
    std::shared_ptr<sbock_custom_interface::srv::IniPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbock_custom_interface__srv__IniPose_Request
    std::shared_ptr<sbock_custom_interface::srv::IniPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IniPose_Request_ & other) const
  {
    if (this->pos_x != other.pos_x) {
      return false;
    }
    if (this->pos_y != other.pos_y) {
      return false;
    }
    if (this->orien_z != other.orien_z) {
      return false;
    }
    if (this->orien_w != other.orien_w) {
      return false;
    }
    return true;
  }
  bool operator!=(const IniPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IniPose_Request_

// alias to use template instance with default allocator
using IniPose_Request =
  sbock_custom_interface::srv::IniPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sbock_custom_interface


#ifndef _WIN32
# define DEPRECATED__sbock_custom_interface__srv__IniPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__sbock_custom_interface__srv__IniPose_Response __declspec(deprecated)
#endif

namespace sbock_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IniPose_Response_
{
  using Type = IniPose_Response_<ContainerAllocator>;

  explicit IniPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit IniPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sbock_custom_interface::srv::IniPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sbock_custom_interface::srv::IniPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sbock_custom_interface::srv::IniPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sbock_custom_interface::srv::IniPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sbock_custom_interface::srv::IniPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sbock_custom_interface::srv::IniPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sbock_custom_interface::srv::IniPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sbock_custom_interface::srv::IniPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sbock_custom_interface::srv::IniPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sbock_custom_interface::srv::IniPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sbock_custom_interface__srv__IniPose_Response
    std::shared_ptr<sbock_custom_interface::srv::IniPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sbock_custom_interface__srv__IniPose_Response
    std::shared_ptr<sbock_custom_interface::srv::IniPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IniPose_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const IniPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IniPose_Response_

// alias to use template instance with default allocator
using IniPose_Response =
  sbock_custom_interface::srv::IniPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sbock_custom_interface

namespace sbock_custom_interface
{

namespace srv
{

struct IniPose
{
  using Request = sbock_custom_interface::srv::IniPose_Request;
  using Response = sbock_custom_interface::srv::IniPose_Response;
};

}  // namespace srv

}  // namespace sbock_custom_interface

#endif  // SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__INI_POSE__STRUCT_HPP_
