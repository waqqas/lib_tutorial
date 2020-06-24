cmake_minimum_required(VERSION 3.12)

project(calc VERSION 0.0.1 DESCRIPTION "Calculator Library")

set(CMAKE_CXX_STANDARD 17)

include(GNUInstallDirs)

find_package(Threads REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB HEADERS ${CMAKE_SOURCE_DIR}/include/calc/*.h)
file(GLOB SOURCES *.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})
add_library(${PROJECT_NAME}-static STATIC ${SOURCES} ${HEADERS})

target_link_libraries(${PROJECT_NAME} PRIVATE Threads::Threads)

set_target_properties(${PROJECT_NAME} PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 1
    PUBLIC_HEADER "${HEADERS}")     # added in quotes

configure_file(${PROJECT_NAME}.pc.in ${PROJECT_NAME}.pc @ONLY)

target_include_directories(${PROJECT_NAME} PRIVATE .)

install(TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME})
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.pc
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)