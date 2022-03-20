# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_sbock_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED sbock_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(sbock_FOUND FALSE)
  elseif(NOT sbock_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(sbock_FOUND FALSE)
  endif()
  return()
endif()
set(_sbock_CONFIG_INCLUDED TRUE)

# output package information
if(NOT sbock_FIND_QUIETLY)
  message(STATUS "Found sbock: 0.0.0 (${sbock_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'sbock' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${sbock_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(sbock_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${sbock_DIR}/${_extra}")
endforeach()
