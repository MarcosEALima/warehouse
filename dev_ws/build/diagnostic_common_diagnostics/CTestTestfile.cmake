# CMake generated Testfile for 
# Source directory: /home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_common_diagnostics
# Build directory: /home/administrador/Desktop/dev_ws/build/diagnostic_common_diagnostics
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_ntp_monitor "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_common_diagnostics/test_results/diagnostic_common_diagnostics/test_ntp_monitor.xunit.xml" "--package-name" "diagnostic_common_diagnostics" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_common_diagnostics/ament_cmake_pytest/test_ntp_monitor.txt" "--command" "/usr/bin/python3.10" "-u" "-m" "pytest" "/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_common_diagnostics/test/systemtest/test_ntp_monitor.py" "-o" "cache_dir=/home/administrador/Desktop/dev_ws/build/diagnostic_common_diagnostics/ament_cmake_pytest/test_ntp_monitor/.cache" "--junit-xml=/home/administrador/Desktop/dev_ws/build/diagnostic_common_diagnostics/test_results/diagnostic_common_diagnostics/test_ntp_monitor.xunit.xml" "--junit-prefix=diagnostic_common_diagnostics")
set_tests_properties(test_ntp_monitor PROPERTIES  LABELS "pytest" TIMEOUT "10" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/diagnostic_common_diagnostics" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;177;ament_add_test;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_common_diagnostics/CMakeLists.txt;20;ament_add_pytest_test;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_common_diagnostics/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_common_diagnostics/test_results/diagnostic_common_diagnostics/xmllint.xunit.xml" "--package-name" "diagnostic_common_diagnostics" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_common_diagnostics/ament_xmllint/xmllint.txt" "--command" "/opt/ros/iron/bin/ament_xmllint" "--xunit-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_common_diagnostics/test_results/diagnostic_common_diagnostics/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_common_diagnostics" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/iron/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/iron/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_common_diagnostics/CMakeLists.txt;26;ament_package;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_common_diagnostics/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_common_diagnostics/test_results/diagnostic_common_diagnostics/lint_cmake.xunit.xml" "--package-name" "diagnostic_common_diagnostics" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_common_diagnostics/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/iron/bin/ament_lint_cmake" "--xunit-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_common_diagnostics/test_results/diagnostic_common_diagnostics/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_common_diagnostics" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/iron/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/iron/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_common_diagnostics/CMakeLists.txt;26;ament_package;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_common_diagnostics/CMakeLists.txt;0;")
