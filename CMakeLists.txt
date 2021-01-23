cmake_minimum_required(VERSION 3.17)
project(projet_C C)

set(CMAKE_C_STANDARD 99)


add_executable(projet_C main.c)

target_link_directories(projet_C PUBLIC ${CMAKE_SOURCE_DIR}/third_party/Mysql/lib)
target_include_directories(projet_C PUBLIC ${CMAKE_SOURCE_DIR}/third_party/Mysql/include)


target_link_libraries(projet_C mysql)

set_target_properties(projet_C PROPERTIES
RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
OUTPUT_NAME projet_C)