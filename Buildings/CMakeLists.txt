cmake_minimum_required(VERSION 3.16)
project(test3)

set(CMAKE_CXX_STANDARD 14)

add_executable(test3 main.cpp Building.cpp Building.h Block.cpp Block.h House.cpp House.h Controller.cpp Controller.h UI.cpp UI.h test.cpp test.h)