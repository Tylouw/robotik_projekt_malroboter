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
include client_src/CMakeFiles/c_interface_example.dir/depend.make

# Include the progress variables for this target.
include client_src/CMakeFiles/c_interface_example.dir/progress.make

# Include the compile flags for this target's objects.
include client_src/CMakeFiles/c_interface_example.dir/flags.make

client_src/CMakeFiles/c_interface_example.dir/c_interface_example.c.o: client_src/CMakeFiles/c_interface_example.dir/flags.make
client_src/CMakeFiles/c_interface_example.dir/c_interface_example.c.o: /home/prakt3/praktikum_ws/src/vrpn-release/client_src/c_interface_example.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prakt3/praktikum_ws/build/vrpn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object client_src/CMakeFiles/c_interface_example.dir/c_interface_example.c.o"
	cd /home/prakt3/praktikum_ws/build/vrpn/client_src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c_interface_example.dir/c_interface_example.c.o   -c /home/prakt3/praktikum_ws/src/vrpn-release/client_src/c_interface_example.c

client_src/CMakeFiles/c_interface_example.dir/c_interface_example.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c_interface_example.dir/c_interface_example.c.i"
	cd /home/prakt3/praktikum_ws/build/vrpn/client_src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/prakt3/praktikum_ws/src/vrpn-release/client_src/c_interface_example.c > CMakeFiles/c_interface_example.dir/c_interface_example.c.i

client_src/CMakeFiles/c_interface_example.dir/c_interface_example.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c_interface_example.dir/c_interface_example.c.s"
	cd /home/prakt3/praktikum_ws/build/vrpn/client_src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/prakt3/praktikum_ws/src/vrpn-release/client_src/c_interface_example.c -o CMakeFiles/c_interface_example.dir/c_interface_example.c.s

client_src/CMakeFiles/c_interface_example.dir/c_interface.cpp.o: client_src/CMakeFiles/c_interface_example.dir/flags.make
client_src/CMakeFiles/c_interface_example.dir/c_interface.cpp.o: /home/prakt3/praktikum_ws/src/vrpn-release/client_src/c_interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prakt3/praktikum_ws/build/vrpn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object client_src/CMakeFiles/c_interface_example.dir/c_interface.cpp.o"
	cd /home/prakt3/praktikum_ws/build/vrpn/client_src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c_interface_example.dir/c_interface.cpp.o -c /home/prakt3/praktikum_ws/src/vrpn-release/client_src/c_interface.cpp

client_src/CMakeFiles/c_interface_example.dir/c_interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c_interface_example.dir/c_interface.cpp.i"
	cd /home/prakt3/praktikum_ws/build/vrpn/client_src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prakt3/praktikum_ws/src/vrpn-release/client_src/c_interface.cpp > CMakeFiles/c_interface_example.dir/c_interface.cpp.i

client_src/CMakeFiles/c_interface_example.dir/c_interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c_interface_example.dir/c_interface.cpp.s"
	cd /home/prakt3/praktikum_ws/build/vrpn/client_src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prakt3/praktikum_ws/src/vrpn-release/client_src/c_interface.cpp -o CMakeFiles/c_interface_example.dir/c_interface.cpp.s

# Object files for target c_interface_example
c_interface_example_OBJECTS = \
"CMakeFiles/c_interface_example.dir/c_interface_example.c.o" \
"CMakeFiles/c_interface_example.dir/c_interface.cpp.o"

# External object files for target c_interface_example
c_interface_example_EXTERNAL_OBJECTS =

client_src/c_interface_example: client_src/CMakeFiles/c_interface_example.dir/c_interface_example.c.o
client_src/c_interface_example: client_src/CMakeFiles/c_interface_example.dir/c_interface.cpp.o
client_src/c_interface_example: client_src/CMakeFiles/c_interface_example.dir/build.make
client_src/c_interface_example: libvrpn.a
client_src/c_interface_example: quat/libquat.a
client_src/c_interface_example: client_src/CMakeFiles/c_interface_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prakt3/praktikum_ws/build/vrpn/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable c_interface_example"
	cd /home/prakt3/praktikum_ws/build/vrpn/client_src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c_interface_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
client_src/CMakeFiles/c_interface_example.dir/build: client_src/c_interface_example

.PHONY : client_src/CMakeFiles/c_interface_example.dir/build

client_src/CMakeFiles/c_interface_example.dir/clean:
	cd /home/prakt3/praktikum_ws/build/vrpn/client_src && $(CMAKE_COMMAND) -P CMakeFiles/c_interface_example.dir/cmake_clean.cmake
.PHONY : client_src/CMakeFiles/c_interface_example.dir/clean

client_src/CMakeFiles/c_interface_example.dir/depend:
	cd /home/prakt3/praktikum_ws/build/vrpn && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prakt3/praktikum_ws/src/vrpn-release /home/prakt3/praktikum_ws/src/vrpn-release/client_src /home/prakt3/praktikum_ws/build/vrpn /home/prakt3/praktikum_ws/build/vrpn/client_src /home/prakt3/praktikum_ws/build/vrpn/client_src/CMakeFiles/c_interface_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : client_src/CMakeFiles/c_interface_example.dir/depend

