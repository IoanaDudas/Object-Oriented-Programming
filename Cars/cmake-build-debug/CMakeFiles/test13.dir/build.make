# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ioana/Documents/Sem2/OOP/test13

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test13.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test13.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test13.dir/flags.make

CMakeFiles/test13.dir/test13_autogen/mocs_compilation.cpp.o: CMakeFiles/test13.dir/flags.make
CMakeFiles/test13.dir/test13_autogen/mocs_compilation.cpp.o: test13_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test13.dir/test13_autogen/mocs_compilation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test13.dir/test13_autogen/mocs_compilation.cpp.o -c /Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug/test13_autogen/mocs_compilation.cpp

CMakeFiles/test13.dir/test13_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test13.dir/test13_autogen/mocs_compilation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug/test13_autogen/mocs_compilation.cpp > CMakeFiles/test13.dir/test13_autogen/mocs_compilation.cpp.i

CMakeFiles/test13.dir/test13_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test13.dir/test13_autogen/mocs_compilation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug/test13_autogen/mocs_compilation.cpp -o CMakeFiles/test13.dir/test13_autogen/mocs_compilation.cpp.s

CMakeFiles/test13.dir/gui.cpp.o: CMakeFiles/test13.dir/flags.make
CMakeFiles/test13.dir/gui.cpp.o: ../gui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test13.dir/gui.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test13.dir/gui.cpp.o -c /Users/ioana/Documents/Sem2/OOP/test13/gui.cpp

CMakeFiles/test13.dir/gui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test13.dir/gui.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ioana/Documents/Sem2/OOP/test13/gui.cpp > CMakeFiles/test13.dir/gui.cpp.i

CMakeFiles/test13.dir/gui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test13.dir/gui.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ioana/Documents/Sem2/OOP/test13/gui.cpp -o CMakeFiles/test13.dir/gui.cpp.s

CMakeFiles/test13.dir/main.cpp.o: CMakeFiles/test13.dir/flags.make
CMakeFiles/test13.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/test13.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test13.dir/main.cpp.o -c /Users/ioana/Documents/Sem2/OOP/test13/main.cpp

CMakeFiles/test13.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test13.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ioana/Documents/Sem2/OOP/test13/main.cpp > CMakeFiles/test13.dir/main.cpp.i

CMakeFiles/test13.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test13.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ioana/Documents/Sem2/OOP/test13/main.cpp -o CMakeFiles/test13.dir/main.cpp.s

CMakeFiles/test13.dir/Service.cpp.o: CMakeFiles/test13.dir/flags.make
CMakeFiles/test13.dir/Service.cpp.o: ../Service.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/test13.dir/Service.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test13.dir/Service.cpp.o -c /Users/ioana/Documents/Sem2/OOP/test13/Service.cpp

CMakeFiles/test13.dir/Service.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test13.dir/Service.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ioana/Documents/Sem2/OOP/test13/Service.cpp > CMakeFiles/test13.dir/Service.cpp.i

CMakeFiles/test13.dir/Service.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test13.dir/Service.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ioana/Documents/Sem2/OOP/test13/Service.cpp -o CMakeFiles/test13.dir/Service.cpp.s

CMakeFiles/test13.dir/Car.cpp.o: CMakeFiles/test13.dir/flags.make
CMakeFiles/test13.dir/Car.cpp.o: ../Car.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/test13.dir/Car.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test13.dir/Car.cpp.o -c /Users/ioana/Documents/Sem2/OOP/test13/Car.cpp

CMakeFiles/test13.dir/Car.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test13.dir/Car.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ioana/Documents/Sem2/OOP/test13/Car.cpp > CMakeFiles/test13.dir/Car.cpp.i

CMakeFiles/test13.dir/Car.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test13.dir/Car.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ioana/Documents/Sem2/OOP/test13/Car.cpp -o CMakeFiles/test13.dir/Car.cpp.s

# Object files for target test13
test13_OBJECTS = \
"CMakeFiles/test13.dir/test13_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/test13.dir/gui.cpp.o" \
"CMakeFiles/test13.dir/main.cpp.o" \
"CMakeFiles/test13.dir/Service.cpp.o" \
"CMakeFiles/test13.dir/Car.cpp.o"

# External object files for target test13
test13_EXTERNAL_OBJECTS =

test13: CMakeFiles/test13.dir/test13_autogen/mocs_compilation.cpp.o
test13: CMakeFiles/test13.dir/gui.cpp.o
test13: CMakeFiles/test13.dir/main.cpp.o
test13: CMakeFiles/test13.dir/Service.cpp.o
test13: CMakeFiles/test13.dir/Car.cpp.o
test13: CMakeFiles/test13.dir/build.make
test13: /Users/ioana/Documents/Sem2/OOP/Qt/5.14.2/clang_64/lib/QtWidgets.framework/QtWidgets
test13: /Users/ioana/Documents/Sem2/OOP/Qt/5.14.2/clang_64/lib/QtGui.framework/QtGui
test13: /Users/ioana/Documents/Sem2/OOP/Qt/5.14.2/clang_64/lib/QtCore.framework/QtCore
test13: CMakeFiles/test13.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable test13"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test13.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test13.dir/build: test13

.PHONY : CMakeFiles/test13.dir/build

CMakeFiles/test13.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test13.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test13.dir/clean

CMakeFiles/test13.dir/depend:
	cd /Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ioana/Documents/Sem2/OOP/test13 /Users/ioana/Documents/Sem2/OOP/test13 /Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug /Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug /Users/ioana/Documents/Sem2/OOP/test13/cmake-build-debug/CMakeFiles/test13.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test13.dir/depend

