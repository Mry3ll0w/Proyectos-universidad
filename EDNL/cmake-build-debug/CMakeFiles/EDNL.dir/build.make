# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Proyectos\Proyectos-universidad\EDNL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Proyectos\Proyectos-universidad\EDNL\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/EDNL.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EDNL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EDNL.dir/flags.make

CMakeFiles/EDNL.dir/main.cpp.obj: CMakeFiles/EDNL.dir/flags.make
CMakeFiles/EDNL.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Proyectos\Proyectos-universidad\EDNL\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EDNL.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\EDNL.dir\main.cpp.obj -c D:\Proyectos\Proyectos-universidad\EDNL\main.cpp

CMakeFiles/EDNL.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EDNL.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Proyectos\Proyectos-universidad\EDNL\main.cpp > CMakeFiles\EDNL.dir\main.cpp.i

CMakeFiles/EDNL.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EDNL.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Proyectos\Proyectos-universidad\EDNL\main.cpp -o CMakeFiles\EDNL.dir\main.cpp.s

# Object files for target EDNL
EDNL_OBJECTS = \
"CMakeFiles/EDNL.dir/main.cpp.obj"

# External object files for target EDNL
EDNL_EXTERNAL_OBJECTS =

EDNL.exe: CMakeFiles/EDNL.dir/main.cpp.obj
EDNL.exe: CMakeFiles/EDNL.dir/build.make
EDNL.exe: CMakeFiles/EDNL.dir/linklibs.rsp
EDNL.exe: CMakeFiles/EDNL.dir/objects1.rsp
EDNL.exe: CMakeFiles/EDNL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Proyectos\Proyectos-universidad\EDNL\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EDNL.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EDNL.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EDNL.dir/build: EDNL.exe

.PHONY : CMakeFiles/EDNL.dir/build

CMakeFiles/EDNL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EDNL.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EDNL.dir/clean

CMakeFiles/EDNL.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Proyectos\Proyectos-universidad\EDNL D:\Proyectos\Proyectos-universidad\EDNL D:\Proyectos\Proyectos-universidad\EDNL\cmake-build-debug D:\Proyectos\Proyectos-universidad\EDNL\cmake-build-debug D:\Proyectos\Proyectos-universidad\EDNL\cmake-build-debug\CMakeFiles\EDNL.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EDNL.dir/depend

