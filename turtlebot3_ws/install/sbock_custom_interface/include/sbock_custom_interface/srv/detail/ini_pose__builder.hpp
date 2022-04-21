// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbock_custom_interface:srv/IniPose.idl
// generated code does not contain a copyright notice

#ifndef SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__INI_POSE__BUILDER_HPP_
#define SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__INI_POSE__BUILDER_HPP_

#include "sbock_custom_interface/srv/detail/ini_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sbock_custom_interface
{

namespace srv
{

namespace builder
{

class Init_IniPose_Request_orien_w
{
public:
  explicit Init_IniPose_Request_orien_w(::sbock_custom_interface::srv::IniPose_Request & msg)
  : msg_(msg)
  {}
  ::sbock_custom_interface::srv::IniPose_Request orien_w(::sbock_custom_interface::srv::IniPose_Request::_orien_w_type arg)
  {
    msg_.orien_w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbock_custom_interface::srv::IniPose_Request msg_;
};

class Init_IniPose_Request_orien_z
{
public:
  explicit Init_IniPose_Request_orien_z(::sbock_custom_interface::srv::IniPose_Request & msg)
  : msg_(msg)
  {}
  Init_IniPose_Request_orien_w orien_z(::sbock_custom_interface::srv::IniPose_Request::_orien_z_type arg)
  {
    msg_.orien_z = std::move(arg);
    return Init_IniPose_Request_orien_w(msg_);
  }

private:
  ::sbock_custom_interface::srv::IniPose_Request msg_;
};

class Init_IniPose_Request_pos_y
{
public:
  explicit Init_IniPose_Request_pos_y(::sbock_custom_interface::srv::IniPose_Request & msg)
  : msg_(msg)
  {}
  Init_IniPose_Request_orien_z pos_y(::sbock_custom_interface::srv::IniPose_Request::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_IniPose_Request_orien_z(msg_);
  }

private:
  ::sbock_custom_interface::srv::IniPose_Request msg_;
};

class Init_IniPose_Request_pos_x
{
public:
  Init_IniPose_Request_pos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IniPose_Request_pos_y pos_x(::sbock_custom_interface::srv::IniPose_Request::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_IniPose_Request_pos_y(msg_);
  }

private:
  ::sbock_custom_interface::srv::IniPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbock_custom_interface::srv::IniPose_Request>()
{
  return sbock_custom_interface::srv::builder::Init_IniPose_Request_pos_x();
}

}  // namespace sbock_custom_interface


namespace sbock_custom_interface
{

namespace srv
{

namespace builder
{

class Init_IniPose_Response_success
{
public:
  Init_IniPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sbock_custom_interface::srv::IniPose_Response success(::sbock_custom_interface::srv::IniPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbock_custom_interface::srv::IniPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbock_custom_interface::srv::IniPose_Response>()
{
  return sbock_custom_interface::srv::builder::Init_IniPose_Response_success();
}

}  // namespace sbock_custom_interface

#endif  // SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__INI_POSE__BUILDER_HPP_
