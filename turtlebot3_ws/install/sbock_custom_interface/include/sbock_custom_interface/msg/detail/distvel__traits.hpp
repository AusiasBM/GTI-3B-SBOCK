// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sbock_custom_interface:msg/Distvel.idl
// generated code does not contain a copyright notice

#ifndef SBOCK_CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__TRAITS_HPP_
#define SBOCK_CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__TRAITS_HPP_

#include "sbock_custom_interface/msg/detail/distvel__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sbock_custom_interface::msg::Distvel>()
{
  return "sbock_custom_interface::msg::Distvel";
}

template<>
inline const char * name<sbock_custom_interface::msg::Distvel>()
{
  return "sbock_custom_interface/msg/Distvel";
}

template<>
struct has_fixed_size<sbock_custom_interface::msg::Distvel>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sbock_custom_interface::msg::Distvel>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sbock_custom_interface::msg::Distvel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SBOCK_CUSTOM_INTERFACE__MSG__DETAIL__DISTVEL__TRAITS_HPP_
