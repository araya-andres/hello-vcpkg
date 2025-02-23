cmake_minimum_required(VERSION 3.28)

project(hello-vcpkg)

find_package(fmt CONFIG REQUIRED)

add_executable(hello-vcpkg src/main.cc)

target_link_libraries(hello-vcpkg PRIVATE fmt::fmt)

enable_testing()
add_subdirectory(tests)