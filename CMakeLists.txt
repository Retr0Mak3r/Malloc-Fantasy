cmake_minimum_required(VERSION 3.17)
project(Malloc-Fantasy C)

set(CMAKE_C_STANDARD 99)


add_executable(Malloc-Fantasy main.c Sources/init.c Sources/draw.c Sources/player.c)

target_link_directories(Malloc-Fantasy PUBLIC ${CMAKE_SOURCE_DIR}/Mysql/lib)
target_include_directories(Malloc-Fantasy PUBLIC ${CMAKE_SOURCE_DIR}/Mysql/include)


target_link_libraries(Malloc-Fantasy -lmysql)

set_target_properties(Malloc-Fantasy PROPERTIES
RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
OUTPUT_NAME Malloc-Fantasy)
INCLUDE(FindPkgConfig)
pkg_check_modules(SDL2 REQUIRED sdl2)
pkg_check_modules(SDL2_IMG REQUIRED SDL2_image)
pkg_check_modules(SDL2_TTF REQUIRED SDL2_ttf)
pkg_check_modules(SDL2_MIX REQUIRED SDL2_mixer)
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMG_INCLUDE_DIRS} ${SDL2_MIX_INCLUDE_DIRS} ${SDL2_TTF_INCLUDE_DIRS})
link_directories (${SDL2_LIBRARY_DIRS} ${SDL2_IMG_LIBRARY_DIRS} ${SDL2_MIX_LIBRARY_DIRS} ${SDL2_TTF_LIBRARY_DIRS})
target_link_libraries (Malloc-Fantasy ${SDL2_LIBRARIES} ${SDL2_IMG_LIBRARIES} ${SDL2_MIX_LIBRARIES} ${SDL2_TTF_LIBRARIES})
FIND_PACKAGE_HANDLE_STANDARD_ARGS(SDL2 REQUIRED_VARS SDL2_LIBRARY SDL2_INCLUDE_DIR)