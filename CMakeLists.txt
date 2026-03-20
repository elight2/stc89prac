cmake_minimum_required(VERSION 3.12)
set(CMAKE_PROJECT_NAME "stc89prac")
project(${CMAKE_PROJECT_NAME} C)
set(CMAKE_EXPORT_COMPILE_COMMANDS on)
add_compile_options("-mmcs51")
include_directories("/usr/share/sdcc/include/mcs51")

add_executable(stc89prac main.c)

if(EXISTS "${CMAKE_BINARY_DIR}/compile_commands.json")
    file(COPY "${CMAKE_BINARY_DIR}/compile_commands.json" DESTINATION "${PROJECT_SOURCE_DIR}")
endif()