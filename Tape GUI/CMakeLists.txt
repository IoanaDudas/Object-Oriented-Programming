cmake_minimum_required(VERSION 3.16)
project(Assigment12)

set(CMAKE_CXX_STANDARD 14)

set(Qt5_DIR "/Users/ioana/Documents/Sem2/OOP/Qt/5.14.2/clang_64/lib/cmake/Qt5")
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

include_directories(.)
include_directories(/Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug/Assigment12_autogen/include)

add_executable(Assigment12
        CSVRepositoryHelper.cpp
        CSVRepositoryHelper.h
        DynamicVector.h
        Exceptions.cpp
        Exceptions.h
        FileRepository.cpp
        FileRepository.h
        GUI.cpp
        GUI.h
        mylistGUI.cpp
        mylistGUI.h
        HTMLRepositoryHelper.cpp
        HTMLRepositoryHelper.h
        InMemoryRepository.cpp
        InMemoryRepository.h
        InMemoryRepositoryHelper.cpp
        InMemoryRepositoryHelper.h
        main.cpp
        Repository.h
        RepositoryHelper.h
        Service.cpp
        Service.h
        Tape.cpp
        Tape.h
        test.cpp
        test.h
        Validator.cpp
        Validator.h Action.cpp Action.h Observer.h mylistModel.cpp mylistModel.h)

target_link_libraries(Assigment12 Qt5::Core Qt5::Widgets)
