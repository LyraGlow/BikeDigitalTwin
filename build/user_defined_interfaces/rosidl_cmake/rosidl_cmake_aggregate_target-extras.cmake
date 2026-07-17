# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target user_defined_interfaces::user_defined_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${user_defined_interfaces_TARGETS}.
if(user_defined_interfaces_TARGETS AND NOT TARGET user_defined_interfaces::user_defined_interfaces)
  add_library(user_defined_interfaces::user_defined_interfaces INTERFACE IMPORTED)
  set_target_properties(user_defined_interfaces::user_defined_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${user_defined_interfaces_TARGETS}")
endif()
