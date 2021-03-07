# CMake generated Testfile for 
# Source directory: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck
# Build directory: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(CTestTestMemcheckDummyPurify "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyPurify/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyPurify/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyPurify PROPERTIES  PASS_REGULAR_EXPRESSION "
1/1 MemCheck #1: RunCMake \\.+   Passed +[0-9]+\\.[0-9]+ sec

100% tests passed, 0 tests failed out of 1
.*
-- Processing memory checking output: 
Memory checking results:
(BullseyeCoverage[^
]*
)?\$")
ADD_TEST(CTestTestMemcheckDummyValgrind "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrind/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrind/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrind PROPERTIES  PASS_REGULAR_EXPRESSION "
1/1 MemCheck #1: RunCMake \\.+   Passed +[0-9]+\\.[0-9]+ sec

100% tests passed, 0 tests failed out of 1
.*
-- Processing memory checking output: 
Memory checking results:
(BullseyeCoverage[^
]*
)?\$")
ADD_TEST(CTestTestMemcheckDummyBC "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyBC/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyBC/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyBC PROPERTIES  PASS_REGULAR_EXPRESSION "
1/1 MemCheck #1: RunCMake \\.+   Passed +[0-9]+.[0-9]+ sec

100% tests passed, 0 tests failed out of 1
(.*
)?Error parsing XML in stream at line 1: no element found
")
ADD_TEST(CTestTestMemcheckDummyPurifyNoLogfile "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyPurifyNoLogfile/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyPurifyNoLogfile/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/NoLogDummyChecker/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/NoLogDummyChecker/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/NoLogDummyChecker/valgrind")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyPurifyNoLogfile PROPERTIES  PASS_REGULAR_EXPRESSION "
Cannot find memory tester output file: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/DummyPurifyNoLogfile/Testing/Temporary/MemoryChecker.1.log
(.*
)?Error in read script: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/DummyPurifyNoLogfile/test.cmake
")
ADD_TEST(CTestTestMemcheckDummyValgrindNoLogfile "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindNoLogfile/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindNoLogfile/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/NoLogDummyChecker/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/NoLogDummyChecker/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/NoLogDummyChecker/valgrind")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrindNoLogfile PROPERTIES  PASS_REGULAR_EXPRESSION "
Cannot find memory tester output file: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/DummyValgrindNoLogfile/Testing/Temporary/MemoryChecker.1.log
(.*
)?Error in read script: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/DummyValgrindNoLogfile/test.cmake
")
ADD_TEST(CTestTestMemcheckDummyBCNoLogfile "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyBCNoLogfile/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyBCNoLogfile/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/NoLogDummyChecker/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/NoLogDummyChecker/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/NoLogDummyChecker/valgrind")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyBCNoLogfile PROPERTIES  PASS_REGULAR_EXPRESSION "
Cannot find memory tester output file: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/DummyBCNoLogfile/Testing/Temporary/MemoryChecker.1.log
(.*
)?Error in read script: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/DummyBCNoLogfile/test.cmake
")
ADD_TEST(CTestTestMemcheckDummyValgrindPrePost "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindPrePost/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindPrePost/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrindPrePost PROPERTIES  PASS_REGULAR_EXPRESSION "
1/1 MemCheck #1: RunCMake \\.+   Passed +[0-9]+\\.[0-9]+ sec

100% tests passed, 0 tests failed out of 1
.*
-- Processing memory checking output: 
Memory checking results:
(BullseyeCoverage[^
]*
)?\$")
ADD_TEST(CTestTestMemcheckDummyValgrindFailPost "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindFailPost/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindFailPost/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrindFailPost PROPERTIES  PASS_REGULAR_EXPRESSION "
Problem running command: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck[^
]*fail[^
]*
(.*
)?Problem executing post-memcheck command\\(s\\).
(.*
)?Error in read script: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/DummyValgrindFailPost/test.cmake
")
ADD_TEST(CTestTestMemcheckDummyValgrindFailPre "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindFailPre/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindFailPre/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrindFailPre PROPERTIES  PASS_REGULAR_EXPRESSION "
Problem running command: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck[^
]*fail[^
]*
(.*
)?Problem executing pre-memcheck command\\(s\\).
(.*
)?Error in read script: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/DummyValgrindFailPre/test.cmake
")
ADD_TEST(CTestTestMemcheckDummyValgrindIgnoreMemcheck "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindIgnoreMemcheck/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindIgnoreMemcheck/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrindIgnoreMemcheck PROPERTIES  PASS_REGULAR_EXPRESSION "
2/2 Test #2: RunCMakeAgain .*
1/1 MemCheck #1: RunCMake \\.+   Passed +[0-9]+\\.[0-9]+ sec

100% tests passed, 0 tests failed out of 1
.*
-- Processing memory checking output: 
Memory checking results:
(BullseyeCoverage[^
]*
)?\$")
ADD_TEST(CTestTestMemcheckDummyValgrindTwoTargets "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindTwoTargets/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindTwoTargets/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/memcheck_fail" "-VV")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrindTwoTargets PROPERTIES  PASS_REGULAR_EXPRESSION "
Memory check project /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/DummyValgrindTwoTargets
.*
 *Start 1: RunCMake
(.*
)?Memory check command: .* \"--log-file=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/DummyValgrindTwoTargets/Testing/Temporary/MemoryChecker.1.log\" \"-q\".*
 *Start 2: RunCMakeAgain
(.*
)?Memory check command: .* \"--log-file=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/DummyValgrindTwoTargets/Testing/Temporary/MemoryChecker.2.log\" \"-q\".*
")
ADD_TEST(CTestTestMemcheckDummyValgrindInvalidSupFile "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindInvalidSupFile/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindInvalidSupFile/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrindInvalidSupFile PROPERTIES  PASS_REGULAR_EXPRESSION "
Cannot find memory checker suppression file: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/does-not-exist
")
ADD_TEST(CTestTestMemcheckDummyValgrindCustomOptions "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindCustomOptions/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindCustomOptions/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckDummyValgrindCustomOptions PROPERTIES  PASS_REGULAR_EXPRESSION "
Cannot find memory tester output file: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/DummyValgrindCustomOptions/Testing/Temporary/MemoryChecker.1.log
(.*
)?Error in read script: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/DummyValgrindCustomOptions/test.cmake
")
ADD_TEST(CTestTestMemcheckNotExist "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/NotExist/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/NotExist/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckNotExist PROPERTIES  PASS_REGULAR_EXPRESSION "Memory checker \\(MemoryCheckCommand\\) not set, or cannot find the specified program.")
ADD_TEST(CTestTestMemcheckUnknown "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/bin/ctest" "-C" "" "-S" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/Unknown/test.cmake" "-V" "--output-log" "/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/Unknown/testOutput.log" "-D" "PSEUDO_BC=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/BC" "-D" "PSEUDO_PURIFY=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/purify" "-D" "PSEUDO_VALGRIND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/valgrind" "-D" "ERROR_COMMAND=/home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Tests/CTestTestMemcheck/memcheck_fail")
SET_TESTS_PROPERTIES(CTestTestMemcheckUnknown PROPERTIES  PASS_REGULAR_EXPRESSION "Do not understand memory checker: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2.8.12.2/Bootstrap.cmk/cmake
(.*
)?Error in read script: /home/ubuntu/openwrt-sdk/build_dir/host/cmake-2\\.8\\.12\\.2/Tests/CTestTestMemcheck/Unknown/test.cmake
")
SUBDIRS(NoLogDummyChecker)
