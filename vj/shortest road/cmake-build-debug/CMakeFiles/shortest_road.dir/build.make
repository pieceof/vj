# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/ichiro/下载/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/ichiro/下载/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/ichiro/11awyfeng/vj/shortest road"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ichiro/11awyfeng/vj/shortest road/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/shortest_road.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/shortest_road.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/shortest_road.dir/flags.make

CMakeFiles/shortest_road.dir/ex1.cpp.o: CMakeFiles/shortest_road.dir/flags.make
CMakeFiles/shortest_road.dir/ex1.cpp.o: ../ex1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ichiro/11awyfeng/vj/shortest road/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/shortest_road.dir/ex1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shortest_road.dir/ex1.cpp.o -c "/home/ichiro/11awyfeng/vj/shortest road/ex1.cpp"

CMakeFiles/shortest_road.dir/ex1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shortest_road.dir/ex1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ichiro/11awyfeng/vj/shortest road/ex1.cpp" > CMakeFiles/shortest_road.dir/ex1.cpp.i

CMakeFiles/shortest_road.dir/ex1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shortest_road.dir/ex1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ichiro/11awyfeng/vj/shortest road/ex1.cpp" -o CMakeFiles/shortest_road.dir/ex1.cpp.s

CMakeFiles/shortest_road.dir/ex1.cpp.o.requires:

.PHONY : CMakeFiles/shortest_road.dir/ex1.cpp.o.requires

CMakeFiles/shortest_road.dir/ex1.cpp.o.provides: CMakeFiles/shortest_road.dir/ex1.cpp.o.requires
	$(MAKE) -f CMakeFiles/shortest_road.dir/build.make CMakeFiles/shortest_road.dir/ex1.cpp.o.provides.build
.PHONY : CMakeFiles/shortest_road.dir/ex1.cpp.o.provides

CMakeFiles/shortest_road.dir/ex1.cpp.o.provides.build: CMakeFiles/shortest_road.dir/ex1.cpp.o


# Object files for target shortest_road
shortest_road_OBJECTS = \
"CMakeFiles/shortest_road.dir/ex1.cpp.o"

# External object files for target shortest_road
shortest_road_EXTERNAL_OBJECTS =

shortest_road: CMakeFiles/shortest_road.dir/ex1.cpp.o
shortest_road: CMakeFiles/shortest_road.dir/build.make
shortest_road: CMakeFiles/shortest_road.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ichiro/11awyfeng/vj/shortest road/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable shortest_road"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shortest_road.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/shortest_road.dir/build: shortest_road

.PHONY : CMakeFiles/shortest_road.dir/build

CMakeFiles/shortest_road.dir/requires: CMakeFiles/shortest_road.dir/ex1.cpp.o.requires

.PHONY : CMakeFiles/shortest_road.dir/requires

CMakeFiles/shortest_road.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/shortest_road.dir/cmake_clean.cmake
.PHONY : CMakeFiles/shortest_road.dir/clean

CMakeFiles/shortest_road.dir/depend:
	cd "/home/ichiro/11awyfeng/vj/shortest road/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ichiro/11awyfeng/vj/shortest road" "/home/ichiro/11awyfeng/vj/shortest road" "/home/ichiro/11awyfeng/vj/shortest road/cmake-build-debug" "/home/ichiro/11awyfeng/vj/shortest road/cmake-build-debug" "/home/ichiro/11awyfeng/vj/shortest road/cmake-build-debug/CMakeFiles/shortest_road.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/shortest_road.dir/depend
