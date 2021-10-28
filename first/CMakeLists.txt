cmake_minimum_required(VERSION 3.1)

project(first)

set(first_SRC main.cpp CPoint.cpp CDist.cpp CPoint_CDist.cpp autotest.cpp)
set(first_HDR CPoint.hpp CDist.hpp Header.hpp CPCD.hpp)

#add_library(vector STATIC ${VECTOR_SRC} ${VECTOR_HDR})
add_executable(${PROJECT_NAME} ${first_SRC} ${first_HDR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 /std:c++14")