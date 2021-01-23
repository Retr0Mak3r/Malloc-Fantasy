cmake_minimum_required(VERSION 3.17)
project(Malloc-Fantasy C)

set(CMAKE_C_STANDARD 99)


add_executable(Malloc-Fantasy main.c)

target_link_directories(Malloc-Fantasy PUBLIC ${CMAKE_SOURCE_DIR}/Mysql/lib)
target_include_directories(Malloc-Fantasy PUBLIC ${CMAKE_SOURCE_DIR}/Mysql/include)


target_link_libraries(Malloc-Fantasy mysql)

set_target_properties(Malloc-Fantasy PROPERTIES
RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
OUTPUT_NAME Malloc-Fantasy)