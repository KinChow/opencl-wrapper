cmake_minimum_required(VERSION 3.20)

set(PROJECT_NAME "OpenCLWrapper")
project(${PROJECT_NAME})

set(DEBUG_VERSION "DebugMode")
set(RELEASE_VERSION "ReleaseMode")
set(COMPILE_MODE ${DEBUG_VERSION})
# debug mode (project name + compile time)
if(${COMPILE_MODE} MATCHES ${DEBUG_VERSION})
    set(USE_RELEASE_MODE 0)
    set(CMAKE_BUILD_TYPE "Debug")
# release mode (project name + version)
else()
    set(USE_RELEASE_MODE 1)
    set(CMAKE_BUILD_TYPE "Release")
endif()

string(TIMESTAMP COMPILE_TIME %y%m%d_%H%M%S)
set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 0)
set(VERSION_TWEAK 2)

set(CMAKE_CXX_STANDARD 17)

set(OPENCL_HEADER_DIR ${PROJECT_SOURCE_DIR}/include)
set(LIBLOADER_DIR ${PROJECT_SOURCE_DIR}/external/lib-loader)
aux_source_directory(${PROJECT_SOURCE_DIR}/src OPENCL_WRAPPER_SRC_DIR)

add_subdirectory(${LIBLOADER_DIR})

if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    set(BUILD_LIBRARY ON)
else()
    set(BUILD_LIBRARY OFF)
endif()

if (BUILD_LIBRARY)
    add_definitions(-DUSE_OPENCL_WRAPPER=1)
    set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/output)
    include_directories(
        ${OPENCL_HEADER_DIR}
    )
    add_library(${PROJECT_NAME} STATIC ${OPENCL_WRAPPER_SRC_DIR})
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${OPENCL_HEADER_DIR}/CL ${LIBRARY_OUTPUT_PATH}/include/CL
    )
    target_link_libraries(${PROJECT_NAME} PRIVATE LibLoader)
else()
    add_library(${PROJECT_NAME} INTERFACE)
    target_include_directories(${PROJECT_NAME} INTERFACE ${OPENCL_HEADER_DIR})
    target_sources(${PROJECT_NAME} INTERFACE ${OPENCL_WRAPPER_SRC_DIR})
    target_link_libraries(${PROJECT_NAME} INTERFACE LibLoader)
    target_compile_definitions(${PROJECT_NAME} INTERFACE -DUSE_OPENCL_WRAPPER=1)
endif()

option(ENABLE_EXAMPLE "Enable examples of OpenCLWrapper." OFF)
if (BUILD_LIBRARY AND ENABLE_EXAMPLE)
    add_subdirectory(${PROJECT_SOURCE_DIR}/example)
endif()