
find_package(GTest CONFIG REQUIRED)

add_test(all-tests hello-tests)

add_executable(hello-tests src/tests.cc)

target_link_libraries(hello-tests PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)