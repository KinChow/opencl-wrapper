cmake_minimum_required(VERSION 3.20)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    ${CMAKE_CURRENT_SOURCE_DIR}/../external/lib-loader/include
)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/../src OPENCL_WRAPPER_SRCS)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/../external/lib-loader/src LIB_LOADER_SRCS)

add_definitions(-DUSE_OPENCL_WRAPPER=1)

add_executable(example example.cpp ${OPENCL_WRAPPER_SRCS} ${LIB_LOADER_SRCS})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/output)
