cmake_minimum_required(VERSION 3.30)

project(ghost)

find_package(SDL2 REQUIRED)

set(SOURCES src/main.cpp)

include_directories(includes/)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(ghost ${SOURCES})

target_link_libraries(ghost ${SDL2_LIBRARIES})
