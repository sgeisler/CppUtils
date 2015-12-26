cmake_minimum_required(VERSION 3.3)
project(CppUtils)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Conversion/StringConverter.cpp Conversion/StringConverter.h Conversion/BasicStringConverter.cpp Conversion/BasicStringConverter.h Conversion/StringBaseConverter.cpp Conversion/StringBaseConverter.h Conversion/BasicStringBaseConverter.cpp Conversion/BasicStringBaseConverter.h)
add_executable(CppUtils ${SOURCE_FILES})