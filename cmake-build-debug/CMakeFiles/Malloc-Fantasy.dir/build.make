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
CMAKE_COMMAND = C:\msys64\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\msys64\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\mai_k\CLionProjects\Malloc-Fantasy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mai_k\CLionProjects\Malloc-Fantasy\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Malloc-Fantasy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Malloc-Fantasy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Malloc-Fantasy.dir/flags.make

CMakeFiles/Malloc-Fantasy.dir/main.c.obj: CMakeFiles/Malloc-Fantasy.dir/flags.make
CMakeFiles/Malloc-Fantasy.dir/main.c.obj: CMakeFiles/Malloc-Fantasy.dir/includes_C.rsp
CMakeFiles/Malloc-Fantasy.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mai_k\CLionProjects\Malloc-Fantasy\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Malloc-Fantasy.dir/main.c.obj"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Malloc-Fantasy.dir\main.c.obj -c C:\Users\mai_k\CLionProjects\Malloc-Fantasy\main.c

CMakeFiles/Malloc-Fantasy.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Malloc-Fantasy.dir/main.c.i"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\mai_k\CLionProjects\Malloc-Fantasy\main.c > CMakeFiles\Malloc-Fantasy.dir\main.c.i

CMakeFiles/Malloc-Fantasy.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Malloc-Fantasy.dir/main.c.s"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\mai_k\CLionProjects\Malloc-Fantasy\main.c -o CMakeFiles\Malloc-Fantasy.dir\main.c.s

# Object files for target Malloc-Fantasy
Malloc__Fantasy_OBJECTS = \
"CMakeFiles/Malloc-Fantasy.dir/main.c.obj"

# External object files for target Malloc-Fantasy
Malloc__Fantasy_EXTERNAL_OBJECTS =

../bin/Malloc-Fantasy.exe: CMakeFiles/Malloc-Fantasy.dir/main.c.obj
../bin/Malloc-Fantasy.exe: CMakeFiles/Malloc-Fantasy.dir/build.make
../bin/Malloc-Fantasy.exe: CMakeFiles/Malloc-Fantasy.dir/linklibs.rsp
../bin/Malloc-Fantasy.exe: CMakeFiles/Malloc-Fantasy.dir/objects1.rsp
../bin/Malloc-Fantasy.exe: CMakeFiles/Malloc-Fantasy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\mai_k\CLionProjects\Malloc-Fantasy\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ..\bin\Malloc-Fantasy.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Malloc-Fantasy.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Malloc-Fantasy.dir/build: ../bin/Malloc-Fantasy.exe

.PHONY : CMakeFiles/Malloc-Fantasy.dir/build

CMakeFiles/Malloc-Fantasy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Malloc-Fantasy.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Malloc-Fantasy.dir/clean

CMakeFiles/Malloc-Fantasy.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\mai_k\CLionProjects\Malloc-Fantasy C:\Users\mai_k\CLionProjects\Malloc-Fantasy C:\Users\mai_k\CLionProjects\Malloc-Fantasy\cmake-build-debug C:\Users\mai_k\CLionProjects\Malloc-Fantasy\cmake-build-debug C:\Users\mai_k\CLionProjects\Malloc-Fantasy\cmake-build-debug\CMakeFiles\Malloc-Fantasy.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Malloc-Fantasy.dir/depend

