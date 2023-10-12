# CMake generated Testfile for 
# Source directory: /home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater
# Build directory: /home/administrador/Desktop/dev_ws/build/diagnostic_updater
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(diagnostic_updater_test "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/diagnostic_updater_test.gtest.xml" "--package-name" "diagnostic_updater" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/ament_cmake_gtest/diagnostic_updater_test.txt" "--command" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/diagnostic_updater_test" "--gtest_output=xml:/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/diagnostic_updater_test.gtest.xml")
set_tests_properties(diagnostic_updater_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/diagnostic_updater_test" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;60;ament_add_gtest;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(diagnostic_status_wrapper_test "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/diagnostic_status_wrapper_test.gtest.xml" "--package-name" "diagnostic_updater" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/ament_cmake_gtest/diagnostic_status_wrapper_test.txt" "--command" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/diagnostic_status_wrapper_test" "--gtest_output=xml:/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/diagnostic_status_wrapper_test.gtest.xml")
set_tests_properties(diagnostic_status_wrapper_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/diagnostic_status_wrapper_test" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/iron/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;74;ament_add_gtest;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(diagnostic_updater_test.py "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/diagnostic_updater_test.py.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/ament_cmake_pytest/diagnostic_updater_test.py.txt" "--command" "/usr/bin/python3.10" "-u" "-m" "pytest" "/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/test/diagnostic_updater_test.py" "-o" "cache_dir=/home/administrador/Desktop/dev_ws/build/diagnostic_updater/ament_cmake_pytest/diagnostic_updater_test.py/.cache" "--junit-xml=/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/diagnostic_updater_test.py.xunit.xml" "--junit-prefix=diagnostic_updater")
set_tests_properties(diagnostic_updater_test.py PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;177;ament_add_test;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;89;ament_add_pytest_test;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(test_DiagnosticStatusWrapper.py "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/test_DiagnosticStatusWrapper.py.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/ament_cmake_pytest/test_DiagnosticStatusWrapper.py.txt" "--command" "/usr/bin/python3.10" "-u" "-m" "pytest" "/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/test/test_diagnostic_status_wrapper.py" "-o" "cache_dir=/home/administrador/Desktop/dev_ws/build/diagnostic_updater/ament_cmake_pytest/test_DiagnosticStatusWrapper.py/.cache" "--junit-xml=/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/test_DiagnosticStatusWrapper.py.xunit.xml" "--junit-prefix=diagnostic_updater")
set_tests_properties(test_DiagnosticStatusWrapper.py PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/build/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;177;ament_add_test;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;90;ament_add_pytest_test;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/cppcheck.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/iron/bin/ament_cppcheck" "--xunit-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/cppcheck.xunit.xml" "--include_dirs" "/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/iron/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/opt/ros/iron/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;119;ament_package;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/cpplint.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/ament_cpplint/cpplint.txt" "--command" "/opt/ros/iron/bin/ament_cpplint" "--xunit-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/opt/ros/iron/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;39;ament_cpplint;/opt/ros/iron/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;119;ament_package;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/lint_cmake.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/iron/bin/ament_lint_cmake" "--xunit-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/iron/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/iron/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;119;ament_package;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/pep257.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/ament_pep257/pep257.txt" "--command" "/opt/ros/iron/bin/ament_pep257" "--xunit-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/iron/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/iron/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;119;ament_package;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/uncrustify.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/iron/bin/ament_uncrustify" "--xunit-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;70;ament_add_test;/opt/ros/iron/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;43;ament_uncrustify;/opt/ros/iron/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;119;ament_package;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3.10" "-u" "/opt/ros/iron/share/ament_cmake_test/cmake/run_test.py" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/xmllint.xunit.xml" "--package-name" "diagnostic_updater" "--output-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/ament_xmllint/xmllint.txt" "--command" "/opt/ros/iron/bin/ament_xmllint" "--xunit-file" "/home/administrador/Desktop/dev_ws/build/diagnostic_updater/test_results/diagnostic_updater/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater" _BACKTRACE_TRIPLES "/opt/ros/iron/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/iron/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/iron/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/iron/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/iron/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/iron/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;119;ament_package;/home/administrador/Desktop/dev_ws/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
subdirs("gtest")
