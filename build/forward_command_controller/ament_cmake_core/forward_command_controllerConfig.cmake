# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_forward_command_controller_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED forward_command_controller_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(forward_command_controller_FOUND FALSE)
  elseif(NOT forward_command_controller_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(forward_command_controller_FOUND FALSE)
  endif()
  return()
endif()
set(_forward_command_controller_CONFIG_INCLUDED TRUE)

# output package information
if(NOT forward_command_controller_FIND_QUIETLY)
  message(STATUS "Found forward_command_controller: 2.24.0 (${forward_command_controller_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'forward_command_controller' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${forward_command_controller_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(forward_command_controller_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${forward_command_controller_DIR}/${_extra}")
endforeach()
