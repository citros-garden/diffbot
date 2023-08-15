# CMake generated Testfile for 
# Source directory: /home/lulav/ros2_ws/src/ros2_control/transmission_interface
# Build directory: /home/lulav/ros2_ws/build/transmission_interface
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_simple_transmission "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_simple_transmission.gtest.xml" "--package-name" "transmission_interface" "--output-file" "/home/lulav/ros2_ws/build/transmission_interface/ament_cmake_gmock/test_simple_transmission.txt" "--command" "/home/lulav/ros2_ws/build/transmission_interface/test_simple_transmission" "--gtest_output=xml:/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_simple_transmission.gtest.xml")
set_tests_properties(test_simple_transmission PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/lulav/ros2_ws/build/transmission_interface/test_simple_transmission" TIMEOUT "60" WORKING_DIRECTORY "/home/lulav/ros2_ws/build/transmission_interface" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;44;ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;0;")
add_test(test_differential_transmission "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_differential_transmission.gtest.xml" "--package-name" "transmission_interface" "--output-file" "/home/lulav/ros2_ws/build/transmission_interface/ament_cmake_gmock/test_differential_transmission.txt" "--command" "/home/lulav/ros2_ws/build/transmission_interface/test_differential_transmission" "--gtest_output=xml:/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_differential_transmission.gtest.xml")
set_tests_properties(test_differential_transmission PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/lulav/ros2_ws/build/transmission_interface/test_differential_transmission" TIMEOUT "60" WORKING_DIRECTORY "/home/lulav/ros2_ws/build/transmission_interface" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;51;ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;0;")
add_test(test_four_bar_linkage_transmission "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_four_bar_linkage_transmission.gtest.xml" "--package-name" "transmission_interface" "--output-file" "/home/lulav/ros2_ws/build/transmission_interface/ament_cmake_gmock/test_four_bar_linkage_transmission.txt" "--command" "/home/lulav/ros2_ws/build/transmission_interface/test_four_bar_linkage_transmission" "--gtest_output=xml:/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_four_bar_linkage_transmission.gtest.xml")
set_tests_properties(test_four_bar_linkage_transmission PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/lulav/ros2_ws/build/transmission_interface/test_four_bar_linkage_transmission" TIMEOUT "60" WORKING_DIRECTORY "/home/lulav/ros2_ws/build/transmission_interface" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;58;ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;0;")
add_test(test_simple_transmission_loader "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_simple_transmission_loader.gtest.xml" "--package-name" "transmission_interface" "--output-file" "/home/lulav/ros2_ws/build/transmission_interface/ament_cmake_gmock/test_simple_transmission_loader.txt" "--command" "/home/lulav/ros2_ws/build/transmission_interface/test_simple_transmission_loader" "--gtest_output=xml:/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_simple_transmission_loader.gtest.xml")
set_tests_properties(test_simple_transmission_loader PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/lulav/ros2_ws/build/transmission_interface/test_simple_transmission_loader" TIMEOUT "60" WORKING_DIRECTORY "/home/lulav/ros2_ws/build/transmission_interface" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;65;ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;0;")
add_test(test_four_bar_linkage_transmission_loader "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_four_bar_linkage_transmission_loader.gtest.xml" "--package-name" "transmission_interface" "--output-file" "/home/lulav/ros2_ws/build/transmission_interface/ament_cmake_gmock/test_four_bar_linkage_transmission_loader.txt" "--command" "/home/lulav/ros2_ws/build/transmission_interface/test_four_bar_linkage_transmission_loader" "--gtest_output=xml:/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_four_bar_linkage_transmission_loader.gtest.xml")
set_tests_properties(test_four_bar_linkage_transmission_loader PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/lulav/ros2_ws/build/transmission_interface/test_four_bar_linkage_transmission_loader" TIMEOUT "60" WORKING_DIRECTORY "/home/lulav/ros2_ws/build/transmission_interface" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;72;ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;0;")
add_test(test_differential_transmission_loader "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_differential_transmission_loader.gtest.xml" "--package-name" "transmission_interface" "--output-file" "/home/lulav/ros2_ws/build/transmission_interface/ament_cmake_gmock/test_differential_transmission_loader.txt" "--command" "/home/lulav/ros2_ws/build/transmission_interface/test_differential_transmission_loader" "--gtest_output=xml:/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_differential_transmission_loader.gtest.xml")
set_tests_properties(test_differential_transmission_loader PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/lulav/ros2_ws/build/transmission_interface/test_differential_transmission_loader" TIMEOUT "60" WORKING_DIRECTORY "/home/lulav/ros2_ws/build/transmission_interface" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;79;ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;0;")
add_test(test_utils "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_utils.gtest.xml" "--package-name" "transmission_interface" "--output-file" "/home/lulav/ros2_ws/build/transmission_interface/ament_cmake_gmock/test_utils.txt" "--command" "/home/lulav/ros2_ws/build/transmission_interface/test_utils" "--gtest_output=xml:/home/lulav/ros2_ws/build/transmission_interface/test_results/transmission_interface/test_utils.gtest.xml")
set_tests_properties(test_utils PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/lulav/ros2_ws/build/transmission_interface/test_utils" TIMEOUT "60" WORKING_DIRECTORY "/home/lulav/ros2_ws/build/transmission_interface" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;86;ament_add_gmock;/home/lulav/ros2_ws/src/ros2_control/transmission_interface/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
