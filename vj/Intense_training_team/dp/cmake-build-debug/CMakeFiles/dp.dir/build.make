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
CMAKE_SOURCE_DIR = /home/ichiro/11awyfeng/vj/Intense_training_team/dp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ichiro/11awyfeng/vj/Intense_training_team/dp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/dp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dp.dir/flags.make

CMakeFiles/dp.dir/b.cpp.o: CMakeFiles/dp.dir/flags.make
CMakeFiles/dp.dir/b.cpp.o: ../b.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ichiro/11awyfeng/vj/Intense_training_team/dp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dp.dir/b.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dp.dir/b.cpp.o -c /home/ichiro/11awyfeng/vj/Intense_training_team/dp/b.cpp

CMakeFiles/dp.dir/b.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dp.dir/b.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ichiro/11awyfeng/vj/Intense_training_team/dp/b.cpp > CMakeFiles/dp.dir/b.cpp.i

CMakeFiles/dp.dir/b.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dp.dir/b.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ichiro/11awyfeng/vj/Intense_training_team/dp/b.cpp -o CMakeFiles/dp.dir/b.cpp.s

CMakeFiles/dp.dir/b.cpp.o.requires:

.PHONY : CMakeFiles/dp.dir/b.cpp.o.requires

CMakeFiles/dp.dir/b.cpp.o.provides: CMakeFiles/dp.dir/b.cpp.o.requires
	$(MAKE) -f CMakeFiles/dp.dir/build.make CMakeFiles/dp.dir/b.cpp.o.provides.build
.PHONY : CMakeFiles/dp.dir/b.cpp.o.provides

CMakeFiles/dp.dir/b.cpp.o.provides.build: CMakeFiles/dp.dir/b.cpp.o


CMakeFiles/dp.dir/e.cpp.o: CMakeFiles/dp.dir/flags.make
CMakeFiles/dp.dir/e.cpp.o: ../e.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ichiro/11awyfeng/vj/Intense_training_team/dp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/dp.dir/e.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dp.dir/e.cpp.o -c /home/ichiro/11awyfeng/vj/Intense_training_team/dp/e.cpp

CMakeFiles/dp.dir/e.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dp.dir/e.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ichiro/11awyfeng/vj/Intense_training_team/dp/e.cpp > CMakeFiles/dp.dir/e.cpp.i

CMakeFiles/dp.dir/e.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dp.dir/e.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ichiro/11awyfeng/vj/Intense_training_team/dp/e.cpp -o CMakeFiles/dp.dir/e.cpp.s

CMakeFiles/dp.dir/e.cpp.o.requires:

.PHONY : CMakeFiles/dp.dir/e.cpp.o.requires

CMakeFiles/dp.dir/e.cpp.o.provides: CMakeFiles/dp.dir/e.cpp.o.requires
	$(MAKE) -f CMakeFiles/dp.dir/build.make CMakeFiles/dp.dir/e.cpp.o.provides.build
.PHONY : CMakeFiles/dp.dir/e.cpp.o.provides

CMakeFiles/dp.dir/e.cpp.o.provides.build: CMakeFiles/dp.dir/e.cpp.o


# Object files for target dp
dp_OBJECTS = \
"CMakeFiles/dp.dir/b.cpp.o" \
"CMakeFiles/dp.dir/e.cpp.o"

# External object files for target dp
dp_EXTERNAL_OBJECTS =

dp: CMakeFiles/dp.dir/b.cpp.o
dp: CMakeFiles/dp.dir/e.cpp.o
dp: CMakeFiles/dp.dir/build.make
dp: CMakeFiles/dp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ichiro/11awyfeng/vj/Intense_training_team/dp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable dp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dp.dir/build: dp

.PHONY : CMakeFiles/dp.dir/build

CMakeFiles/dp.dir/requires: CMakeFiles/dp.dir/b.cpp.o.requires
CMakeFiles/dp.dir/requires: CMakeFiles/dp.dir/e.cpp.o.requires

.PHONY : CMakeFiles/dp.dir/requires

CMakeFiles/dp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dp.dir/clean

CMakeFiles/dp.dir/depend:
	cd /home/ichiro/11awyfeng/vj/Intense_training_team/dp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ichiro/11awyfeng/vj/Intense_training_team/dp /home/ichiro/11awyfeng/vj/Intense_training_team/dp /home/ichiro/11awyfeng/vj/Intense_training_team/dp/cmake-build-debug /home/ichiro/11awyfeng/vj/Intense_training_team/dp/cmake-build-debug /home/ichiro/11awyfeng/vj/Intense_training_team/dp/cmake-build-debug/CMakeFiles/dp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dp.dir/depend
