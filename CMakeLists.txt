cmake_minimum_required(VERSION 3.24)

project(SerialComunication)

set(CMAKE_SYSTEM_VERSION 1)

set(CMAKE_CXX_COMPILER "g++")

set(CMAKE_BUILD_TYPE Debug)

set(PROJECT_BINARY_DIR ${PROJECT_SOURCE_DIR}/build)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)