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
CMAKE_COMMAND = "D:\Programas\CLion 2020.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programas\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Proyectos\Proyectos-universidad\MP_RECURSIVIDAD_DEF

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Proyectos\Proyectos-universidad\MP_RECURSIVIDAD_DEF\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MP_RECURSIVIDAD_DEF.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MP_RECURSIVIDAD_DEF.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MP_RECURSIVIDAD_DEF.dir/flags.make

CMakeFiles/MP_RECURSIVIDAD_DEF.dir/main.c.obj: CMakeFiles/MP_RECURSIVIDAD_DEF.dir/flags.make
CMakeFiles/MP_RECURSIVIDAD_DEF.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Proyectos\Proyectos-universidad\MP_RECURSIVIDAD_DEF\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MP_RECURSIVIDAD_DEF.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\MP_RECURSIVIDAD_DEF.dir\main.c.obj   -c D:\Proyectos\Proyectos-universidad\MP_RECURSIVIDAD_DEF\main.c

CMakeFiles/MP_RECURSIVIDAD_DEF.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MP_RECURSIVIDAD_DEF.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Proyectos\Proyectos-universidad\MP_RECURSIVIDAD_DEF\main.c > CMakeFiles\MP_RECURSIVIDAD_DEF.dir\main.c.i

CMakeFiles/MP_RECURSIVIDAD_DEF.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MP_RECURSIVIDAD_DEF.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Proyectos\Proyectos-universidad\MP_RECURSIVIDAD_DEF\main.c -o CMakeFiles\MP_RECURSIVIDAD_DEF.dir\main.c.s

# Object files for target MP_RECURSIVIDAD_DEF
MP_RECURSIVIDAD_DEF_OBJECTS = \
"CMakeFiles/MP_RECURSIVIDAD_DEF.dir/main.c.obj"

# External object files for target MP_RECURSIVIDAD_DEF
MP_RECURSIVIDAD_DEF_EXTERNAL_OBJECTS =

MP_RECURSIVIDAD_DEF.exe: CMakeFiles/MP_RECURSIVIDAD_DEF.dir/main.c.obj
MP_RECURSIVIDAD_DEF.exe: CMakeFiles/MP_RECURSIVIDAD_DEF.dir/build.make
MP_RECURSIVIDAD_DEF.exe: CMakeFiles/MP_RECURSIVIDAD_DEF.dir/linklibs.rsp
MP_RECURSIVIDAD_DEF.exe: CMakeFiles/MP_RECURSIVIDAD_DEF.dir/objects1.rsp
MP_RECURSIVIDAD_DEF.exe: CMakeFiles/MP_RECURSIVIDAD_DEF.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Proyectos\Proyectos-universidad\MP_RECURSIVIDAD_DEF\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable MP_RECURSIVIDAD_DEF.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MP_RECURSIVIDAD_DEF.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MP_RECURSIVIDAD_DEF.dir/build: MP_RECURSIVIDAD_DEF.exe

.PHONY : CMakeFiles/MP_RECURSIVIDAD_DEF.dir/build

CMakeFiles/MP_RECURSIVIDAD_DEF.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MP_RECURSIVIDAD_DEF.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MP_RECURSIVIDAD_DEF.dir/clean

CMakeFiles/MP_RECURSIVIDAD_DEF.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Proyectos\Proyectos-universidad\MP_RECURSIVIDAD_DEF D:\Proyectos\Proyectos-universidad\MP_RECURSIVIDAD_DEF D:\Proyectos\Proyectos-universidad\MP_RECURSIVIDAD_DEF\cmake-build-debug D:\Proyectos\Proyectos-universidad\MP_RECURSIVIDAD_DEF\cmake-build-debug D:\Proyectos\Proyectos-universidad\MP_RECURSIVIDAD_DEF\cmake-build-debug\CMakeFiles\MP_RECURSIVIDAD_DEF.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MP_RECURSIVIDAD_DEF.dir/depend
