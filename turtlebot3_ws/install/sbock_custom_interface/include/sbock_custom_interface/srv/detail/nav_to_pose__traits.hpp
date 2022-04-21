// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbock_custom_interface:srv/NavToPose.idl
// generated code does not contain a copyright notice

#ifndef SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__NAV_TO_POSE__TRAITS_HPP_
#define SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__NAV_TO_POSE__TRAITS_HPP_

#include "sbock_custom_interface/srv/detail/nav_to_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sbock_custom_interface::srv::NavToPose_Request>()
{
  return "sbock_custom_interface::srv::NavToPose_Request";
}

template<>
inline const char * name<sbock_custom_interface::srv::NavToPose_Request>()
{
  return "sbock_custom_interface/srv/NavToPose_Request";
}

template<>
struct has_fixed_size<sbock_custom_interface::srv::NavToPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbock_custom_interface::srv::NavToPose_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbock_custom_interface::srv::NavToPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sbock_custom_interface::srv::NavToPose_Response>()
{
  return "sbock_custom_interface::srv::NavToPose_Response";
}

template<>
inline const char * name<sbock_custom_interface::srv::NavToPose_Response>()
{
  return "sbock_custom_interface/srv/NavToPose_Response";
}

template<>
struct has_fixed_size<sbock_custom_interface::srv::NavToPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbock_custom_interface::srv::NavToPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbock_custom_interface::srv::NavToPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sbock_custom_interface::srv::NavToPose>()
{
  return "sbock_custom_interface::srv::NavToPose";
}

template<>
inline const char * name<sbock_custom_interface::srv::NavToPose>()
{
  return "sbock_custom_interface/srv/NavToPose";
}

template<>
struct has_fixed_size<sbock_custom_interface::srv::NavToPose>
  : std::integral_constant<
    bool,
    has_fixed_size<sbock_custom_interface::srv::NavToPose_Request>::value &&
    has_fixed_size<sbock_custom_interface::srv::NavToPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<sbock_custom_interface::srv::NavToPose>
  : std::integral_constant<
    bool,
    has_bounded_size<sbock_custom_interface::srv::NavToPose_Request>::value &&
    has_bounded_size<sbock_custom_interface::srv::NavToPose_Response>::value
  >
{
};

template<>
struct is_service<sbock_custom_interface::srv::NavToPose>
  : std::true_type
{
};

template<>
struct is_service_request<sbock_custom_interface::srv::NavToPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sbock_custom_interface::srv::NavToPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SBOCK_CUSTOM_INTERFACE__SRV__DETAIL__NAV_TO_POSE__TRAITS_HPP_
