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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/prakt3/praktikum_ws/src/vrpn-release

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prakt3/praktikum_ws/build/vrpn

# Include any dependencies generated for this target.
include util/printStream/CMakeFiles/vrpn_streamPrint.dir/depend.make

# Include the progress variables for this target.
include util/printStream/CMakeFiles/vrpn_streamPrint.dir/progress.make

# Include the compile flags for this target's objects.
include util/printStream/CMakeFiles/vrpn_streamPrint.dir/flags.make

util/printStream/CMakeFiles/vrpn_streamPrint.dir/vrpn_streamPrint.cpp.o: util/printStream/CMakeFiles/vrpn_streamPrint.dir/flags.make
util/printStream/CMakeFiles/vrpn_streamPrint.dir/vrpn_streamPrint.cpp.o: /home/prakt3/praktikum_ws/src/vrpn-release/util/printStream/vrpn_streamPrint.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prakt3/praktikum_ws/build/vrpn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object util/printStream/CMakeFiles/vrpn_streamPrint.dir/vrpn_streamPrint.cpp.o"
	cd /home/prakt3/praktikum_ws/build/vrpn/util/printStream && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vrpn_streamPrint.dir/vrpn_streamPrint.cpp.o -c /home/prakt3/praktikum_ws/src/vrpn-release/util/printStream/vrpn_streamPrint.cpp

util/printStream/CMakeFiles/vrpn_streamPrint.dir/vrpn_streamPrint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vrpn_streamPrint.dir/vrpn_streamPrint.cpp.i"
	cd /home/prakt3/praktikum_ws/build/vrpn/util/printStream && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prakt3/praktikum_ws/src/vrpn-release/util/printStream/vrpn_streamPrint.cpp > CMakeFiles/vrpn_streamPrint.dir/vrpn_streamPrint.cpp.i

util/printStream/CMakeFiles/vrpn_streamPrint.dir/vrpn_streamPrint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vrpn_streamPrint.dir/vrpn_streamPrint.cpp.s"
	cd /home/prakt3/praktikum_ws/build/vrpn/util/printStream && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prakt3/praktikum_ws/src/vrpn-release/util/printStream/vrpn_streamPrint.cpp -o CMakeFiles/vrpn_streamPrint.dir/vrpn_streamPrint.cpp.s

# Object files for target vrpn_streamPrint
vrpn_streamPrint_OBJECTS = \
"CMakeFiles/vrpn_streamPrint.dir/vrpn_streamPrint.cpp.o"

# External object files for target vrpn_streamPrint
vrpn_streamPrint_EXTERNAL_OBJECTS =

util/printStream/vrpn_streamPrint: util/printStream/CMakeFiles/vrpn_streamPrint.dir/vrpn_streamPrint.cpp.o
util/printStream/vrpn_streamPrint: util/printStream/CMakeFiles/vrpn_streamPrint.dir/build.make
util/printStream/vrpn_streamPrint: libvrpn.a
util/printStream/vrpn_streamPrint: quat/libquat.a
util/printStream/vrpn_streamPrint: util/printStream/CMakeFiles/vrpn_streamPrint.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prakt3/praktikum_ws/build/vrpn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vrpn_streamPrint"
	cd /home/prakt3/praktikum_ws/build/vrpn/util/printStream && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vrpn_streamPrint.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
util/printStream/CMakeFiles/vrpn_streamPrint.dir/build: util/printStream/vrpn_streamPrint

.PHONY : util/printStream/CMakeFiles/vrpn_streamPrint.dir/build

util/printStream/CMakeFiles/vrpn_streamPrint.dir/clean:
	cd /home/prakt3/praktikum_ws/build/vrpn/util/printStream && $(CMAKE_COMMAND) -P CMakeFiles/vrpn_streamPrint.dir/cmake_clean.cmake
.PHONY : util/printStream/CMakeFiles/vrpn_streamPrint.dir/clean

util/printStream/CMakeFiles/vrpn_streamPrint.dir/depend:
	cd /home/prakt3/praktikum_ws/build/vrpn && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prakt3/praktikum_ws/src/vrpn-release /home/prakt3/praktikum_ws/src/vrpn-release/util/printStream /home/prakt3/praktikum_ws/build/vrpn /home/prakt3/praktikum_ws/build/vrpn/util/printStream /home/prakt3/praktikum_ws/build/vrpn/util/printStream/CMakeFiles/vrpn_streamPrint.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : util/printStream/CMakeFiles/vrpn_streamPrint.dir/depend
