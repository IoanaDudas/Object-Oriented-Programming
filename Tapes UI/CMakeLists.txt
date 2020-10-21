cmake_minimum_required(VERSION 3.15)
project(Assigment_8_final)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

set(CMAKE_CXX_FLAGS "--coverage")
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

set(Qt5_DIR "/Users/ioana/Documents/Sem2/OOP/Qt/5.14.2/clang_64/lib/cmake/Qt5")
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)


add_executable(Assigment_8_final
        FileRepository.cpp
        FileRepository.h
        main.cpp
        Repository.h
        RepositoryHelper.h
        Service.cpp
        Service.h
        Tape.cpp
        Tape.h
        test.cpp
        test.h
        UI.cpp
        UI.h InMemoryRepository.cpp InMemoryRepository.h CSVRepositoryHelper.cpp CSVRepositoryHelper.h InMemoryRepositoryHelper.cpp InMemoryRepositoryHelper.h HTMLRepositoryHelper.cpp HTMLRepositoryHelper.h Validator.cpp Validator.h Exceptions.cpp Exceptions.h GUI.cpp GUI.h)

target_link_libraries(Assigment_8_final Qt5::Core Qt5::Widgets)