project(pseudoengine)

cmake_minimum_required(VERSION 2.8)

add_executable(pseudoengine "src/main.cpp")

install(TARGETS pseudoengine RUNTIME DESTINATION bin)
