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
CMAKE_SOURCE_DIR = /home/prakt3/praktikum_ws/src/vrpn_client_ros2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/prakt3/praktikum_ws/build/vrpn_client_ros

# Include any dependencies generated for this target.
include CMakeFiles/vrpn_client_ros.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vrpn_client_ros.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vrpn_client_ros.dir/flags.make

CMakeFiles/vrpn_client_ros.dir/src/vrpn_client_ros.cpp.o: CMakeFiles/vrpn_client_ros.dir/flags.make
CMakeFiles/vrpn_client_ros.dir/src/vrpn_client_ros.cpp.o: /home/prakt3/praktikum_ws/src/vrpn_client_ros2/src/vrpn_client_ros.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prakt3/praktikum_ws/build/vrpn_client_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vrpn_client_ros.dir/src/vrpn_client_ros.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vrpn_client_ros.dir/src/vrpn_client_ros.cpp.o -c /home/prakt3/praktikum_ws/src/vrpn_client_ros2/src/vrpn_client_ros.cpp

CMakeFiles/vrpn_client_ros.dir/src/vrpn_client_ros.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vrpn_client_ros.dir/src/vrpn_client_ros.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prakt3/praktikum_ws/src/vrpn_client_ros2/src/vrpn_client_ros.cpp > CMakeFiles/vrpn_client_ros.dir/src/vrpn_client_ros.cpp.i

CMakeFiles/vrpn_client_ros.dir/src/vrpn_client_ros.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vrpn_client_ros.dir/src/vrpn_client_ros.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prakt3/praktikum_ws/src/vrpn_client_ros2/src/vrpn_client_ros.cpp -o CMakeFiles/vrpn_client_ros.dir/src/vrpn_client_ros.cpp.s

CMakeFiles/vrpn_client_ros.dir/src/time_manager.cpp.o: CMakeFiles/vrpn_client_ros.dir/flags.make
CMakeFiles/vrpn_client_ros.dir/src/time_manager.cpp.o: /home/prakt3/praktikum_ws/src/vrpn_client_ros2/src/time_manager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/prakt3/praktikum_ws/build/vrpn_client_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/vrpn_client_ros.dir/src/time_manager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vrpn_client_ros.dir/src/time_manager.cpp.o -c /home/prakt3/praktikum_ws/src/vrpn_client_ros2/src/time_manager.cpp

CMakeFiles/vrpn_client_ros.dir/src/time_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vrpn_client_ros.dir/src/time_manager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/prakt3/praktikum_ws/src/vrpn_client_ros2/src/time_manager.cpp > CMakeFiles/vrpn_client_ros.dir/src/time_manager.cpp.i

CMakeFiles/vrpn_client_ros.dir/src/time_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vrpn_client_ros.dir/src/time_manager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/prakt3/praktikum_ws/src/vrpn_client_ros2/src/time_manager.cpp -o CMakeFiles/vrpn_client_ros.dir/src/time_manager.cpp.s

# Object files for target vrpn_client_ros
vrpn_client_ros_OBJECTS = \
"CMakeFiles/vrpn_client_ros.dir/src/vrpn_client_ros.cpp.o" \
"CMakeFiles/vrpn_client_ros.dir/src/time_manager.cpp.o"

# External object files for target vrpn_client_ros
vrpn_client_ros_EXTERNAL_OBJECTS =

libvrpn_client_ros.a: CMakeFiles/vrpn_client_ros.dir/src/vrpn_client_ros.cpp.o
libvrpn_client_ros.a: CMakeFiles/vrpn_client_ros.dir/src/time_manager.cpp.o
libvrpn_client_ros.a: CMakeFiles/vrpn_client_ros.dir/build.make
libvrpn_client_ros.a: CMakeFiles/vrpn_client_ros.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/prakt3/praktikum_ws/build/vrpn_client_ros/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libvrpn_client_ros.a"
	$(CMAKE_COMMAND) -P CMakeFiles/vrpn_client_ros.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vrpn_client_ros.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vrpn_client_ros.dir/build: libvrpn_client_ros.a

.PHONY : CMakeFiles/vrpn_client_ros.dir/build

CMakeFiles/vrpn_client_ros.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vrpn_client_ros.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vrpn_client_ros.dir/clean

CMakeFiles/vrpn_client_ros.dir/depend:
	cd /home/prakt3/praktikum_ws/build/vrpn_client_ros && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/prakt3/praktikum_ws/src/vrpn_client_ros2 /home/prakt3/praktikum_ws/src/vrpn_client_ros2 /home/prakt3/praktikum_ws/build/vrpn_client_ros /home/prakt3/praktikum_ws/build/vrpn_client_ros /home/prakt3/praktikum_ws/build/vrpn_client_ros/CMakeFiles/vrpn_client_ros.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vrpn_client_ros.dir/depend

