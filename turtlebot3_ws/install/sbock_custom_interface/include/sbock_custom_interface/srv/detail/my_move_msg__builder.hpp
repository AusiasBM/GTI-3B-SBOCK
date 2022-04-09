// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sbock_custom_interface:srv/MyMoveMsg.idl
// generated code does not contain a copyright notice

#ifndef SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__MY_MOVE_MSG__BUILDER_HPP_
#define SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__MY_MOVE_MSG__BUILDER_HPP_

#include "sbock_custom_interface/srv/detail/my_move_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sbock_custom_interface
{

namespace srv
{

namespace builder
{

class Init_MyMoveMsg_Request_move
{
public:
  Init_MyMoveMsg_Request_move()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sbock_custom_interface::srv::MyMoveMsg_Request move(::sbock_custom_interface::srv::MyMoveMsg_Request::_move_type arg)
  {
    msg_.move = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbock_custom_interface::srv::MyMoveMsg_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbock_custom_interface::srv::MyMoveMsg_Request>()
{
  return sbock_custom_interface::srv::builder::Init_MyMoveMsg_Request_move();
}

}  // namespace sbock_custom_interface


namespace sbock_custom_interface
{

namespace srv
{

namespace builder
{

class Init_MyMoveMsg_Response_success
{
public:
  Init_MyMoveMsg_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sbock_custom_interface::srv::MyMoveMsg_Response success(::sbock_custom_interface::srv::MyMoveMsg_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sbock_custom_interface::srv::MyMoveMsg_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sbock_custom_interface::srv::MyMoveMsg_Response>()
{
  return sbock_custom_interface::srv::builder::Init_MyMoveMsg_Response_success();
}

}  // namespace sbock_custom_interface

#endif  // SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__MY_MOVE_MSG__BUILDER_HPP_
