cmake_minimum_required(VERSION 3.3)
project(CppUtils)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

link_libraries(crypto)

file(GLOB SOURCE_FILES
        "*/*.cpp"
        )
add_executable(CppUtils main.cpp ${SOURCE_FILES})