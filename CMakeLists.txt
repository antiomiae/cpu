cmake_minimum_required(VERSION 3.8)

cmake_policy(SET CMP0042 NEW)

project(cpu)

include(ExternalProject)

file(
    DOWNLOAD https://github.com/catchorg/Catch2/releases/download/v2.2.2/catch.hpp
    ${CMAKE_BINARY_DIR}/catch/catch.hpp
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(
    cpu
    cpu/cpu.cpp
)

TARGET_INCLUDE_DIRECTORIES(
    cpu
    PRIVATE
    ${CMAKE_BINARY_DIR}/catch
)
