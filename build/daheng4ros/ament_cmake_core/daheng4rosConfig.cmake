# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_daheng4ros_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED daheng4ros_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(daheng4ros_FOUND FALSE)
  elseif(NOT daheng4ros_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(daheng4ros_FOUND FALSE)
  endif()
  return()
endif()
set(_daheng4ros_CONFIG_INCLUDED TRUE)

# output package information
if(NOT daheng4ros_FIND_QUIETLY)
  message(STATUS "Found daheng4ros: 0.0.1 (${daheng4ros_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'daheng4ros' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${daheng4ros_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(daheng4ros_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${daheng4ros_DIR}/${_extra}")
endforeach()
