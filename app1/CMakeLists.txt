cmake_minimum_required(VERSION 3.12)
project(calcapp)

find_package(PkgConfig REQUIRED) 

pkg_check_modules(CALC REQUIRED calc)

file(GLOB SOURCES calcapp.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PUBLIC ${CALC_LIBRARIES})
target_include_directories(${PROJECT_NAME} PUBLIC ${CALC_INCLUDE_DIRS})
target_compile_options(${PROJECT_NAME} PUBLIC ${CALC_CFLAGS_OTHER})

# link_directories(${CMAKE_INSTALL_LIBDIR})
# include_directories(${CMAKE_INSTALL_INCLUDEDIR})
# target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_INSTALL_LIBDIR})
# target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_INSTALL_INCLUDEDIR})
