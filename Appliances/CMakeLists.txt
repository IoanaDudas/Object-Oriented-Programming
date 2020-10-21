cmake_minimum_required(VERSION 3.16)
project(test4)

set(CMAKE_CXX_STANDARD 14)

add_executable(test4 main.cpp Appliance.cpp Appliance.h Refrigerator.cpp Refrigerator.h DishWasher.cpp DishWasher.h Controller.cpp Controller.h UI.cpp UI.h)