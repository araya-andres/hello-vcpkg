cmake_minimum_required(VERSION 3.28)

project(hello-vcpkg)

find_package(fmt CONFIG REQUIRED)

add_subdirectory(mylib)

add_executable(hello-vcpkg src/main.cc)

target_include_directories(hello-vcpkg PRIVATE mylib)

target_link_libraries(hello-vcpkg PRIVATE fmt::fmt mylib)

enable_testing()
add_subdirectory(${CMAKE_SOURCE_DIR}/tests)