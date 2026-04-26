# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_daheng_simple_driver_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED daheng_simple_driver_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(daheng_simple_driver_FOUND FALSE)
  elseif(NOT daheng_simple_driver_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(daheng_simple_driver_FOUND FALSE)
  endif()
  return()
endif()
set(_daheng_simple_driver_CONFIG_INCLUDED TRUE)

# output package information
if(NOT daheng_simple_driver_FIND_QUIETLY)
  message(STATUS "Found daheng_simple_driver: 0.0.0 (${daheng_simple_driver_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'daheng_simple_driver' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${daheng_simple_driver_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(daheng_simple_driver_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${daheng_simple_driver_DIR}/${_extra}")
endforeach()
