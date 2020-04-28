cmake_minimum_required(VERSION 3.10)
project(calcapp)

file(GLOB SOURCES calcapp.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PUBLIC calc)
link_directories(${CMAKE_INSTALL_LIBDIR})
include_directories(${CMAKE_INSTALL_INCLUDEDIRa})
target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_INSTALL_LIBDIR})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_INSTALL_INCLUDEDIR})
