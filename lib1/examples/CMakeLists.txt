cmake_minimum_required(VERSION 3.10)

project(calcapp)

file(GLOB sources calcapp.cpp)
add_executable(${PROJECT_NAME} ${sources})

add_dependencies(${PROJECT_NAME} calc)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME} calc)
