cmake_minimum_required(VERSION 3.20)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    ${CMAKE_CURRENT_SOURCE_DIR}/../external/lib-loader/include
)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} OPENCL_WRAPPER_SRCS)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/../external/lib-loader/src LIB_LOADER_SRCS)

add_definitions(-DUSE_OPENCL_WRAPPER=1)

add_library(OpenCLWrapper STATIC ${OPENCL_WRAPPER_SRCS} ${LIB_LOADER_SRCS})

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/output)

file(GLOB allCopyFiles "${CMAKE_CURRENT_SOURCE_DIR}/../include/CL")
file(COPY ${allCopyFiles} DESTINATION ${LIBRARY_OUTPUT_PATH})
