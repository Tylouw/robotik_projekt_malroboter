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
include server_src/CMakeFiles/vrpn_server.dir/depend.make

# Include the progress variables for this target.
include server_src/CMakeFiles/vrpn_server.dir/progress.make

# Include the compile flags for this target's objects.
include server_src/CMakeFiles/vrpn_server.dir/flags.make

server_src/CMakeFiles/vrpn_server.dir/vrpn.C.o: server_src/CMakeFiles/vrpn_server.dir/flags.make
server_src/CMakeFiles/vrpn_server.dir/vrpn.C.o: /home/prakt3/praktikum_ws/src/vrpn-release/server_src/vrpn.C
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prakt3/praktikum_ws/build/vrpn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object server_src/CMakeFiles/vrpn_server.dir/vrpn.C.o"
	cd /home/prakt3/praktikum_ws/build/vrpn/server_src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vrpn_server.dir/vrpn.C.o -c /home/prakt3/praktikum_ws/src/vrpn-release/server_src/vrpn.C

server_src/CMakeFiles/vrpn_server.dir/vrpn.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vrpn_server.dir/vrpn.C.i"
	cd /home/prakt3/praktikum_ws/build/vrpn/server_src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prakt3/praktikum_ws/src/vrpn-release/server_src/vrpn.C > CMakeFiles/vrpn_server.dir/vrpn.C.i

server_src/CMakeFiles/vrpn_server.dir/vrpn.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vrpn_server.dir/vrpn.C.s"
	cd /home/prakt3/praktikum_ws/build/vrpn/server_src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prakt3/praktikum_ws/src/vrpn-release/server_src/vrpn.C -o CMakeFiles/vrpn_server.dir/vrpn.C.s

# Object files for target vrpn_server
vrpn_server_OBJECTS = \
"CMakeFiles/vrpn_server.dir/vrpn.C.o"

# External object files for target vrpn_server
vrpn_server_EXTERNAL_OBJECTS =

server_src/vrpn_server: server_src/CMakeFiles/vrpn_server.dir/vrpn.C.o
server_src/vrpn_server: server_src/CMakeFiles/vrpn_server.dir/build.make
server_src/vrpn_server: libvrpnserver.a
server_src/vrpn_server: server_src/timecode_generator_server/libvrpn_timecode_generator.a
server_src/vrpn_server: atmellib/libvrpn_atmel.a
server_src/vrpn_server: gpsnmealib/libgpsnmea.a
server_src/vrpn_server: quat/libquat.a
server_src/vrpn_server: /usr/lib/x86_64-linux-gnu/libudev.so
server_src/vrpn_server: /usr/lib/x86_64-linux-gnu/librt.so
server_src/vrpn_server: server_src/CMakeFiles/vrpn_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prakt3/praktikum_ws/build/vrpn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vrpn_server"
	cd /home/prakt3/praktikum_ws/build/vrpn/server_src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vrpn_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
server_src/CMakeFiles/vrpn_server.dir/build: server_src/vrpn_server

.PHONY : server_src/CMakeFiles/vrpn_server.dir/build

server_src/CMakeFiles/vrpn_server.dir/clean:
	cd /home/prakt3/praktikum_ws/build/vrpn/server_src && $(CMAKE_COMMAND) -P CMakeFiles/vrpn_server.dir/cmake_clean.cmake
.PHONY : server_src/CMakeFiles/vrpn_server.dir/clean

server_src/CMakeFiles/vrpn_server.dir/depend:
	cd /home/prakt3/praktikum_ws/build/vrpn && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prakt3/praktikum_ws/src/vrpn-release /home/prakt3/praktikum_ws/src/vrpn-release/server_src /home/prakt3/praktikum_ws/build/vrpn /home/prakt3/praktikum_ws/build/vrpn/server_src /home/prakt3/praktikum_ws/build/vrpn/server_src/CMakeFiles/vrpn_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : server_src/CMakeFiles/vrpn_server.dir/depend

