# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /usr/src/CT/SmartAIC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /usr/src/CT/SmartAIC/build

# Include any dependencies generated for this target.
include CMakeFiles/CT.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CT.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CT.dir/flags.make

CMakeFiles/CT.dir/src/CT/Snsrctlapp.c.o: CMakeFiles/CT.dir/flags.make
CMakeFiles/CT.dir/src/CT/Snsrctlapp.c.o: ../src/CT/Snsrctlapp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/usr/src/CT/SmartAIC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CT.dir/src/CT/Snsrctlapp.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CT.dir/src/CT/Snsrctlapp.c.o -c /usr/src/CT/SmartAIC/src/CT/Snsrctlapp.c

CMakeFiles/CT.dir/src/CT/Snsrctlapp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CT.dir/src/CT/Snsrctlapp.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /usr/src/CT/SmartAIC/src/CT/Snsrctlapp.c > CMakeFiles/CT.dir/src/CT/Snsrctlapp.c.i

CMakeFiles/CT.dir/src/CT/Snsrctlapp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CT.dir/src/CT/Snsrctlapp.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /usr/src/CT/SmartAIC/src/CT/Snsrctlapp.c -o CMakeFiles/CT.dir/src/CT/Snsrctlapp.c.s

CMakeFiles/CT.dir/src/CT/ctdata.c.o: CMakeFiles/CT.dir/flags.make
CMakeFiles/CT.dir/src/CT/ctdata.c.o: ../src/CT/ctdata.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/usr/src/CT/SmartAIC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CT.dir/src/CT/ctdata.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CT.dir/src/CT/ctdata.c.o -c /usr/src/CT/SmartAIC/src/CT/ctdata.c

CMakeFiles/CT.dir/src/CT/ctdata.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CT.dir/src/CT/ctdata.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /usr/src/CT/SmartAIC/src/CT/ctdata.c > CMakeFiles/CT.dir/src/CT/ctdata.c.i

CMakeFiles/CT.dir/src/CT/ctdata.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CT.dir/src/CT/ctdata.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /usr/src/CT/SmartAIC/src/CT/ctdata.c -o CMakeFiles/CT.dir/src/CT/ctdata.c.s

# Object files for target CT
CT_OBJECTS = \
"CMakeFiles/CT.dir/src/CT/Snsrctlapp.c.o" \
"CMakeFiles/CT.dir/src/CT/ctdata.c.o"

# External object files for target CT
CT_EXTERNAL_OBJECTS =

CT: CMakeFiles/CT.dir/src/CT/Snsrctlapp.c.o
CT: CMakeFiles/CT.dir/src/CT/ctdata.c.o
CT: CMakeFiles/CT.dir/build.make
CT: CMakeFiles/CT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/usr/src/CT/SmartAIC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable CT"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CT.dir/build: CT

.PHONY : CMakeFiles/CT.dir/build

CMakeFiles/CT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CT.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CT.dir/clean

CMakeFiles/CT.dir/depend:
	cd /usr/src/CT/SmartAIC/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /usr/src/CT/SmartAIC /usr/src/CT/SmartAIC /usr/src/CT/SmartAIC/build /usr/src/CT/SmartAIC/build /usr/src/CT/SmartAIC/build/CMakeFiles/CT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CT.dir/depend

