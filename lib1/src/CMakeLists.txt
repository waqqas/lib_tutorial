cmake_minimum_required(VERSION 3.10)
project(calc VERSION 0.0.1 DESCRIPTION "Calculator Library")

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB HEADERS ${CMAKE_SOURCE_DIR}/include/**/*.h)
file(GLOB SOURCES *.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})

set_target_properties(${PROJECT_NAME} PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 1
    PUBLIC_HEADER "${HEADERS}")     # added in quotes