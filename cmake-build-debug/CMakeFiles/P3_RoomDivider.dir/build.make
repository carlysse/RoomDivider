# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/carly/Documents/Coding/CS320/P3-RoomDivider

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/carly/Documents/Coding/CS320/P3-RoomDivider/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/P3_RoomDivider.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/P3_RoomDivider.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P3_RoomDivider.dir/flags.make

CMakeFiles/P3_RoomDivider.dir/main.cpp.o: CMakeFiles/P3_RoomDivider.dir/flags.make
CMakeFiles/P3_RoomDivider.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/carly/Documents/Coding/CS320/P3-RoomDivider/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P3_RoomDivider.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/P3_RoomDivider.dir/main.cpp.o -c /Users/carly/Documents/Coding/CS320/P3-RoomDivider/main.cpp

CMakeFiles/P3_RoomDivider.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P3_RoomDivider.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/carly/Documents/Coding/CS320/P3-RoomDivider/main.cpp > CMakeFiles/P3_RoomDivider.dir/main.cpp.i

CMakeFiles/P3_RoomDivider.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P3_RoomDivider.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/carly/Documents/Coding/CS320/P3-RoomDivider/main.cpp -o CMakeFiles/P3_RoomDivider.dir/main.cpp.s

# Object files for target P3_RoomDivider
P3_RoomDivider_OBJECTS = \
"CMakeFiles/P3_RoomDivider.dir/main.cpp.o"

# External object files for target P3_RoomDivider
P3_RoomDivider_EXTERNAL_OBJECTS =

P3_RoomDivider: CMakeFiles/P3_RoomDivider.dir/main.cpp.o
P3_RoomDivider: CMakeFiles/P3_RoomDivider.dir/build.make
P3_RoomDivider: CMakeFiles/P3_RoomDivider.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/carly/Documents/Coding/CS320/P3-RoomDivider/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P3_RoomDivider"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/P3_RoomDivider.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P3_RoomDivider.dir/build: P3_RoomDivider
.PHONY : CMakeFiles/P3_RoomDivider.dir/build

CMakeFiles/P3_RoomDivider.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/P3_RoomDivider.dir/cmake_clean.cmake
.PHONY : CMakeFiles/P3_RoomDivider.dir/clean

CMakeFiles/P3_RoomDivider.dir/depend:
	cd /Users/carly/Documents/Coding/CS320/P3-RoomDivider/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/carly/Documents/Coding/CS320/P3-RoomDivider /Users/carly/Documents/Coding/CS320/P3-RoomDivider /Users/carly/Documents/Coding/CS320/P3-RoomDivider/cmake-build-debug /Users/carly/Documents/Coding/CS320/P3-RoomDivider/cmake-build-debug /Users/carly/Documents/Coding/CS320/P3-RoomDivider/cmake-build-debug/CMakeFiles/P3_RoomDivider.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/P3_RoomDivider.dir/depend
