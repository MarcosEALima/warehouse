# CMake generated Testfile for 
# Source directory: /home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros
# Build directory: /home/administrador/Desktop/dev_ws/build/tf2_ros
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/cppcheck.xunit.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/iron/bin/ament_cppcheck" "--xunit-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/cppcheck.xunit.xml" "--language" "c++")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;133;ament_cppcheck;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/cpplint.xunit.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_cpplint/cpplint.txt" "--command" "/opt/ros/iron/bin/ament_cpplint" "--xunit-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;134;ament_cpplint;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/lint_cmake.xunit.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/iron/bin/ament_lint_cmake" "--xunit-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;135;ament_lint_cmake;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/uncrustify.xunit.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/iron/bin/ament_uncrustify" "--xunit-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/uncrustify.xunit.xml" "--language" "C++")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;70;ament_add_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;136;ament_uncrustify;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
add_test(test_buffer "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/test_buffer.gtest.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_cmake_gtest/test_buffer.txt" "--command" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_buffer" "--gtest_output=xml:/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/test_buffer.gtest.xml")
set_tests_properties(test_buffer PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_buffer" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;140;ament_add_gtest;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
add_test(test_buffer_server "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/test_buffer_server.gtest.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_cmake_gtest/test_buffer_server.txt" "--command" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_buffer_server" "--gtest_output=xml:/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/test_buffer_server.gtest.xml")
set_tests_properties(test_buffer_server PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_buffer_server" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;147;ament_add_gtest;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
add_test(test_buffer_client "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/test_buffer_client.gtest.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_cmake_gtest/test_buffer_client.txt" "--command" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_buffer_client" "--gtest_output=xml:/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/test_buffer_client.gtest.xml")
set_tests_properties(test_buffer_client PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_buffer_client" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;156;ament_add_gtest;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
add_test(tf2_ros_test_message_filter "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/tf2_ros_test_message_filter.gtest.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_cmake_gtest/tf2_ros_test_message_filter.txt" "--command" "/home/administrador/Desktop/dev_ws/build/tf2_ros/tf2_ros_test_message_filter" "--gtest_output=xml:/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/tf2_ros_test_message_filter.gtest.xml")
set_tests_properties(tf2_ros_test_message_filter PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/administrador/Desktop/dev_ws/build/tf2_ros/tf2_ros_test_message_filter" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;167;ament_add_gtest;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
add_test(tf2_ros_test_transform_listener "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/tf2_ros_test_transform_listener.gtest.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_cmake_gtest/tf2_ros_test_transform_listener.txt" "--command" "/home/administrador/Desktop/dev_ws/build/tf2_ros/tf2_ros_test_transform_listener" "--gtest_output=xml:/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/tf2_ros_test_transform_listener.gtest.xml")
set_tests_properties(tf2_ros_test_transform_listener PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/administrador/Desktop/dev_ws/build/tf2_ros/tf2_ros_test_transform_listener" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;176;ament_add_gtest;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
add_test(tf2_ros_test_static_transform_broadcaster "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/tf2_ros_test_static_transform_broadcaster.gtest.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_cmake_gtest/tf2_ros_test_static_transform_broadcaster.txt" "--command" "/home/administrador/Desktop/dev_ws/build/tf2_ros/tf2_ros_test_static_transform_broadcaster" "--gtest_output=xml:/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/tf2_ros_test_static_transform_broadcaster.gtest.xml")
set_tests_properties(tf2_ros_test_static_transform_broadcaster PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/administrador/Desktop/dev_ws/build/tf2_ros/tf2_ros_test_static_transform_broadcaster" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;183;ament_add_gtest;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
add_test(tf2_ros_test_transform_broadcaster "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/tf2_ros_test_transform_broadcaster.gtest.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_cmake_gtest/tf2_ros_test_transform_broadcaster.txt" "--command" "/home/administrador/Desktop/dev_ws/build/tf2_ros/tf2_ros_test_transform_broadcaster" "--gtest_output=xml:/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/tf2_ros_test_transform_broadcaster.gtest.xml")
set_tests_properties(tf2_ros_test_transform_broadcaster PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/administrador/Desktop/dev_ws/build/tf2_ros/tf2_ros_test_transform_broadcaster" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;190;ament_add_gtest;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
add_test(tf2_ros_test_time_reset "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/tf2_ros_test_time_reset.gtest.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_cmake_gtest/tf2_ros_test_time_reset.txt" "--command" "/home/administrador/Desktop/dev_ws/build/tf2_ros/tf2_ros_test_time_reset" "--gtest_output=xml:/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/tf2_ros_test_time_reset.gtest.xml")
set_tests_properties(tf2_ros_test_time_reset PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/administrador/Desktop/dev_ws/build/tf2_ros/tf2_ros_test_time_reset" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;197;ament_add_gtest;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
add_test(tf2_ros_test_listener "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/tf2_ros_test_listener.gtest.xml" "--package-name" "tf2_ros" "--output-file" "/home/administrador/Desktop/dev_ws/build/tf2_ros/ament_cmake_gtest/tf2_ros_test_listener.txt" "--command" "/home/administrador/Desktop/dev_ws/build/tf2_ros/tf2_ros_test_listener" "--gtest_output=xml:/home/administrador/Desktop/dev_ws/build/tf2_ros/test_results/tf2_ros/tf2_ros_test_listener.gtest.xml")
set_tests_properties(tf2_ros_test_listener PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/administrador/Desktop/dev_ws/build/tf2_ros/tf2_ros_test_listener" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/tf2_ros" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;206;ament_add_gtest;/home/administrador/Desktop/dev_ws/src/geometry2/tf2_ros/CMakeLists.txt;0;")
subdirs("gtest")
