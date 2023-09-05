# CMake generated Testfile for 
# Source directory: /workspaces/diffbot/ros2_ws/src/ros2_controllers/steering_controllers_library
# Build directory: /workspaces/diffbot/ros2_ws/build/steering_controllers_library
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_steering_controllers_library "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/workspaces/diffbot/ros2_ws/build/steering_controllers_library/test_results/steering_controllers_library/test_steering_controllers_library.gtest.xml" "--package-name" "steering_controllers_library" "--output-file" "/workspaces/diffbot/ros2_ws/build/steering_controllers_library/test_results/steering_controllers_library/test_steering_controllers_library.txt" "--command" "/workspaces/diffbot/ros2_ws/build/steering_controllers_library/test_steering_controllers_library" "--ros-args" "--params-file" "/workspaces/diffbot/ros2_ws/src/ros2_controllers/steering_controllers_library/test/steering_controllers_library_params.yaml" "--" "--gtest_output=xml:/workspaces/diffbot/ros2_ws/build/steering_controllers_library/test_results/steering_controllers_library/test_steering_controllers_library.gtest.xml")
set_tests_properties(test_steering_controllers_library PROPERTIES  TIMEOUT "60" WORKING_DIRECTORY "/workspaces/diffbot/ros2_ws/build/steering_controllers_library" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/generate_parameter_library/cmake/generate_parameter_library.cmake;119;ament_add_test;/workspaces/diffbot/ros2_ws/src/ros2_controllers/steering_controllers_library/CMakeLists.txt;60;add_rostest_with_parameters_gmock;/workspaces/diffbot/ros2_ws/src/ros2_controllers/steering_controllers_library/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
