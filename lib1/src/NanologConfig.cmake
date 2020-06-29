
include(ExternalProject)

ExternalProject_Add(Nanolog_project
GIT_REPOSITORY https://github.com/PlatformLab/NanoLog.git
PREFIX ${CMAKE_CURRENT_BINARY_DIR}/Nanolog
BUILD_IN_SOURCE 1
CONFIGURE_COMMAND ""
BUILD_COMMAND cd runtime && $(MAKE)
INSTALL_COMMAND ""
)

ExternalProject_Get_Property(Nanolog_project SOURCE_DIR)

set(Nanolog_INCLUDE_DIR ${SOURCE_DIR}/runtime) 
set(Nanolog_LIB_DIR ${SOURCE_DIR}/runtime) 

add_library(Nanolog STATIC IMPORTED)

set_property(TARGET Nanolog PROPERTY IMPORTED_LOCATION ${Nanolog_LIB_DIR}/libNanolog.a)
add_dependencies(Nanolog Nanolog_project)

install(PROGRAMS ${Nanolog_LIB_DIR}/decompressor DESTINATION ${CMAKE_INSTALL_BINDIR})