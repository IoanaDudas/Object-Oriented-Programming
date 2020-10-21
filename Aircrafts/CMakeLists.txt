cmake_minimum_required(VERSION 3.16)
project(test1)

set(CMAKE_CXX_STANDARD 14)

add_executable(test1 main.cpp UI.cpp UI.h Service.cpp Service.h Repository.cpp Repository.h Aircraft.cpp Aircraft.h Helicopter.cpp Helicopter.h Plane.cpp Plane.h HotAirBalloon.cpp HotAirBalloon.h)