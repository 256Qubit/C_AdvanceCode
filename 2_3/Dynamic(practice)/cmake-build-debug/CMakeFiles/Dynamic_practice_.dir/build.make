# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\3\advancecode\Dynamic(practice)

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\3\advancecode\Dynamic(practice)\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Dynamic_practice_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Dynamic_practice_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Dynamic_practice_.dir/flags.make

CMakeFiles/Dynamic_practice_.dir/main.cpp.obj: CMakeFiles/Dynamic_practice_.dir/flags.make
CMakeFiles/Dynamic_practice_.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\3\advancecode\Dynamic(practice)\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Dynamic_practice_.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Dynamic_practice_.dir\main.cpp.obj -c D:\3\advancecode\Dynamic(practice)\main.cpp

CMakeFiles/Dynamic_practice_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dynamic_practice_.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\3\advancecode\Dynamic(practice)\main.cpp > CMakeFiles\Dynamic_practice_.dir\main.cpp.i

CMakeFiles/Dynamic_practice_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dynamic_practice_.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\3\advancecode\Dynamic(practice)\main.cpp -o CMakeFiles\Dynamic_practice_.dir\main.cpp.s

# Object files for target Dynamic_practice_
Dynamic_practice__OBJECTS = \
"CMakeFiles/Dynamic_practice_.dir/main.cpp.obj"

# External object files for target Dynamic_practice_
Dynamic_practice__EXTERNAL_OBJECTS =

Dynamic_practice_.exe: CMakeFiles/Dynamic_practice_.dir/main.cpp.obj
Dynamic_practice_.exe: CMakeFiles/Dynamic_practice_.dir/build.make
Dynamic_practice_.exe: CMakeFiles/Dynamic_practice_.dir/linklibs.rsp
Dynamic_practice_.exe: CMakeFiles/Dynamic_practice_.dir/objects1.rsp
Dynamic_practice_.exe: CMakeFiles/Dynamic_practice_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\3\advancecode\Dynamic(practice)\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Dynamic_practice_.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Dynamic_practice_.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Dynamic_practice_.dir/build: Dynamic_practice_.exe

.PHONY : CMakeFiles/Dynamic_practice_.dir/build

CMakeFiles/Dynamic_practice_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Dynamic_practice_.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Dynamic_practice_.dir/clean

CMakeFiles/Dynamic_practice_.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\3\advancecode\Dynamic(practice) D:\3\advancecode\Dynamic(practice) D:\3\advancecode\Dynamic(practice)\cmake-build-debug D:\3\advancecode\Dynamic(practice)\cmake-build-debug D:\3\advancecode\Dynamic(practice)\cmake-build-debug\CMakeFiles\Dynamic_practice_.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Dynamic_practice_.dir/depend

