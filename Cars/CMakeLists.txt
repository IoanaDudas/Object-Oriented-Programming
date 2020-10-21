cmake_minimum_required(VERSION 3.16)
project(test13)

set(CMAKE_CXX_STANDARD 14)

set(Qt5_DIR "/Users/ioana/Documents/Sem2/OOP/Qt/5.14.2/clang_64/lib/cmake/Qt5")
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

include_directories(.)
include_directories(/Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug/test13_autogen/include)

add_executable(test13
        gui.cpp
        gui.h
        main.cpp Service.cpp Service.h Car.cpp Car.h test.h)

target_link_libraries(test13 Qt5::Core Qt5::Widgets)