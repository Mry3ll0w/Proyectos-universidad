# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/129/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/129/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ara/Documentos/AEED/clion/repasoanalisi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ara/Documentos/AEED/clion/repasoanalisi/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/repasoanalisis.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/repasoanalisis.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/repasoanalisis.dir/flags.make

CMakeFiles/repasoanalisis.dir/p1_manejor_rand.cpp.o: CMakeFiles/repasoanalisis.dir/flags.make
CMakeFiles/repasoanalisis.dir/p1_manejor_rand.cpp.o: ../p1_manejor_rand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ara/Documentos/AEED/clion/repasoanalisi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/repasoanalisis.dir/p1_manejor_rand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/repasoanalisis.dir/p1_manejor_rand.cpp.o -c /home/ara/Documentos/AEED/clion/repasoanalisi/p1_manejor_rand.cpp

CMakeFiles/repasoanalisis.dir/p1_manejor_rand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/repasoanalisis.dir/p1_manejor_rand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ara/Documentos/AEED/clion/repasoanalisi/p1_manejor_rand.cpp > CMakeFiles/repasoanalisis.dir/p1_manejor_rand.cpp.i

CMakeFiles/repasoanalisis.dir/p1_manejor_rand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/repasoanalisis.dir/p1_manejor_rand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ara/Documentos/AEED/clion/repasoanalisi/p1_manejor_rand.cpp -o CMakeFiles/repasoanalisis.dir/p1_manejor_rand.cpp.s

# Object files for target repasoanalisis
repasoanalisis_OBJECTS = \
"CMakeFiles/repasoanalisis.dir/p1_manejor_rand.cpp.o"

# External object files for target repasoanalisis
repasoanalisis_EXTERNAL_OBJECTS =

repasoanalisis: CMakeFiles/repasoanalisis.dir/p1_manejor_rand.cpp.o
repasoanalisis: CMakeFiles/repasoanalisis.dir/build.make
repasoanalisis: CMakeFiles/repasoanalisis.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ara/Documentos/AEED/clion/repasoanalisi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable repasoanalisis"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/repasoanalisis.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/repasoanalisis.dir/build: repasoanalisis

.PHONY : CMakeFiles/repasoanalisis.dir/build

CMakeFiles/repasoanalisis.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/repasoanalisis.dir/cmake_clean.cmake
.PHONY : CMakeFiles/repasoanalisis.dir/clean

CMakeFiles/repasoanalisis.dir/depend:
	cd /home/ara/Documentos/AEED/clion/repasoanalisi/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ara/Documentos/AEED/clion/repasoanalisi /home/ara/Documentos/AEED/clion/repasoanalisi /home/ara/Documentos/AEED/clion/repasoanalisi/cmake-build-debug /home/ara/Documentos/AEED/clion/repasoanalisi/cmake-build-debug /home/ara/Documentos/AEED/clion/repasoanalisi/cmake-build-debug/CMakeFiles/repasoanalisis.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/repasoanalisis.dir/depend

