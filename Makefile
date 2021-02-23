# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_BINARY_DIR = C:\Users\mai_k\CLionProjects\Malloc-Fantasy

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	C:\msys64\mingw64\bin\cmake.exe --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	C:\msys64\mingw64\bin\cmake-gui.exe -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\mai_k\CLionProjects\Malloc-Fantasy\CMakeFiles C:\Users\mai_k\CLionProjects\Malloc-Fantasy\\CMakeFiles\progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\mai_k\CLionProjects\Malloc-Fantasy\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Malloc-Fantasy

# Build rule for target.
Malloc-Fantasy: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 Malloc-Fantasy
.PHONY : Malloc-Fantasy

# fast build rule for target.
Malloc-Fantasy/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/build
.PHONY : Malloc-Fantasy/fast

Sources/draw.obj: Sources/draw.c.obj

.PHONY : Sources/draw.obj

# target to build an object file
Sources/draw.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/Sources/draw.c.obj
.PHONY : Sources/draw.c.obj

Sources/draw.i: Sources/draw.c.i

.PHONY : Sources/draw.i

# target to preprocess a source file
Sources/draw.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/Sources/draw.c.i
.PHONY : Sources/draw.c.i

Sources/draw.s: Sources/draw.c.s

.PHONY : Sources/draw.s

# target to generate assembly for a file
Sources/draw.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/Sources/draw.c.s
.PHONY : Sources/draw.c.s

Sources/init.obj: Sources/init.c.obj

.PHONY : Sources/init.obj

# target to build an object file
Sources/init.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/Sources/init.c.obj
.PHONY : Sources/init.c.obj

Sources/init.i: Sources/init.c.i

.PHONY : Sources/init.i

# target to preprocess a source file
Sources/init.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/Sources/init.c.i
.PHONY : Sources/init.c.i

Sources/init.s: Sources/init.c.s

.PHONY : Sources/init.s

# target to generate assembly for a file
Sources/init.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/Sources/init.c.s
.PHONY : Sources/init.c.s

Sources/player.obj: Sources/player.c.obj

.PHONY : Sources/player.obj

# target to build an object file
Sources/player.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/Sources/player.c.obj
.PHONY : Sources/player.c.obj

Sources/player.i: Sources/player.c.i

.PHONY : Sources/player.i

# target to preprocess a source file
Sources/player.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/Sources/player.c.i
.PHONY : Sources/player.c.i

Sources/player.s: Sources/player.c.s

.PHONY : Sources/player.s

# target to generate assembly for a file
Sources/player.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/Sources/player.c.s
.PHONY : Sources/player.c.s

main.obj: main.c.obj

.PHONY : main.obj

# target to build an object file
main.c.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/main.c.obj
.PHONY : main.c.obj

main.i: main.c.i

.PHONY : main.i

# target to preprocess a source file
main.c.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/main.c.i
.PHONY : main.c.i

main.s: main.c.s

.PHONY : main.s

# target to generate assembly for a file
main.c.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Malloc-Fantasy.dir\build.make CMakeFiles/Malloc-Fantasy.dir/main.c.s
.PHONY : main.c.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... Malloc-Fantasy
	@echo ... Sources/draw.obj
	@echo ... Sources/draw.i
	@echo ... Sources/draw.s
	@echo ... Sources/init.obj
	@echo ... Sources/init.i
	@echo ... Sources/init.s
	@echo ... Sources/player.obj
	@echo ... Sources/player.i
	@echo ... Sources/player.s
	@echo ... main.obj
	@echo ... main.i
	@echo ... main.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system

