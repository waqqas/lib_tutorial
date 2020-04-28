cmake_minimum_required(VERSION 3.10)
project(lib1)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB HEADERS ${CMAKE_SOURCE_DIR}/include/*.h)
file(GLOB SOURCES *.cpp)

add_library(${PROJECT_NAME} ${SOURCES} ${HEADERS})