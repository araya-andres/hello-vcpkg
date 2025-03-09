
find_package(GTest CONFIG REQUIRED)

add_executable(mylib-tests tests.cc)

add_dependencies(mylib-tests mylib)

add_test(mylib-tests ${CMAKE_BINARY_DIR}/tests/mylib-tests)

target_include_directories(mylib-tests PRIVATE ../mylib)

target_link_libraries(mylib-tests PRIVATE mylib GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)