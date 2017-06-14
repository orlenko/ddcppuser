cmake_minimum_required(VERSION 2.8)
set(CXX_STANDARD "c++11")
set(CXX_STANDARD_REQUIRED "c++11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_executable(main main.cpp node_modules/cpp_common/src/strtools.cpp)

include_directories(node_modules)
