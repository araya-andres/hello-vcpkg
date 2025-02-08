cmake_minimum_required(VERSION 3.28)

project(hello-vcpkg)

set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(fmt CONFIG REQUIRED)

add_executable(hello-vcpkg ${SRC_DIR}/main.cc)

target_link_libraries(hello-vcpkg PRIVATE fmt::fmt)