# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_SOURCE_DIR = /home/ming/GitHub/mirants

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ming/GitHub/mirants/build/debug

# Include any dependencies generated for this target.
include port/CMakeFiles/mirants_port.dir/depend.make

# Include the progress variables for this target.
include port/CMakeFiles/mirants_port.dir/progress.make

# Include the compile flags for this target's objects.
include port/CMakeFiles/mirants_port.dir/flags.make

port/CMakeFiles/mirants_port.dir/threadpool.cc.o: port/CMakeFiles/mirants_port.dir/flags.make
port/CMakeFiles/mirants_port.dir/threadpool.cc.o: ../../port/threadpool.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ming/GitHub/mirants/build/debug/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object port/CMakeFiles/mirants_port.dir/threadpool.cc.o"
	cd /home/ming/GitHub/mirants/build/debug/port && g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mirants_port.dir/threadpool.cc.o -c /home/ming/GitHub/mirants/port/threadpool.cc

port/CMakeFiles/mirants_port.dir/threadpool.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mirants_port.dir/threadpool.cc.i"
	cd /home/ming/GitHub/mirants/build/debug/port && g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ming/GitHub/mirants/port/threadpool.cc > CMakeFiles/mirants_port.dir/threadpool.cc.i

port/CMakeFiles/mirants_port.dir/threadpool.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mirants_port.dir/threadpool.cc.s"
	cd /home/ming/GitHub/mirants/build/debug/port && g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ming/GitHub/mirants/port/threadpool.cc -o CMakeFiles/mirants_port.dir/threadpool.cc.s

port/CMakeFiles/mirants_port.dir/threadpool.cc.o.requires:
.PHONY : port/CMakeFiles/mirants_port.dir/threadpool.cc.o.requires

port/CMakeFiles/mirants_port.dir/threadpool.cc.o.provides: port/CMakeFiles/mirants_port.dir/threadpool.cc.o.requires
	$(MAKE) -f port/CMakeFiles/mirants_port.dir/build.make port/CMakeFiles/mirants_port.dir/threadpool.cc.o.provides.build
.PHONY : port/CMakeFiles/mirants_port.dir/threadpool.cc.o.provides

port/CMakeFiles/mirants_port.dir/threadpool.cc.o.provides.build: port/CMakeFiles/mirants_port.dir/threadpool.cc.o

port/CMakeFiles/mirants_port.dir/mutex.cc.o: port/CMakeFiles/mirants_port.dir/flags.make
port/CMakeFiles/mirants_port.dir/mutex.cc.o: ../../port/mutex.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ming/GitHub/mirants/build/debug/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object port/CMakeFiles/mirants_port.dir/mutex.cc.o"
	cd /home/ming/GitHub/mirants/build/debug/port && g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mirants_port.dir/mutex.cc.o -c /home/ming/GitHub/mirants/port/mutex.cc

port/CMakeFiles/mirants_port.dir/mutex.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mirants_port.dir/mutex.cc.i"
	cd /home/ming/GitHub/mirants/build/debug/port && g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ming/GitHub/mirants/port/mutex.cc > CMakeFiles/mirants_port.dir/mutex.cc.i

port/CMakeFiles/mirants_port.dir/mutex.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mirants_port.dir/mutex.cc.s"
	cd /home/ming/GitHub/mirants/build/debug/port && g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ming/GitHub/mirants/port/mutex.cc -o CMakeFiles/mirants_port.dir/mutex.cc.s

port/CMakeFiles/mirants_port.dir/mutex.cc.o.requires:
.PHONY : port/CMakeFiles/mirants_port.dir/mutex.cc.o.requires

port/CMakeFiles/mirants_port.dir/mutex.cc.o.provides: port/CMakeFiles/mirants_port.dir/mutex.cc.o.requires
	$(MAKE) -f port/CMakeFiles/mirants_port.dir/build.make port/CMakeFiles/mirants_port.dir/mutex.cc.o.provides.build
.PHONY : port/CMakeFiles/mirants_port.dir/mutex.cc.o.provides

port/CMakeFiles/mirants_port.dir/mutex.cc.o.provides.build: port/CMakeFiles/mirants_port.dir/mutex.cc.o

port/CMakeFiles/mirants_port.dir/thread.cc.o: port/CMakeFiles/mirants_port.dir/flags.make
port/CMakeFiles/mirants_port.dir/thread.cc.o: ../../port/thread.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ming/GitHub/mirants/build/debug/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object port/CMakeFiles/mirants_port.dir/thread.cc.o"
	cd /home/ming/GitHub/mirants/build/debug/port && g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/mirants_port.dir/thread.cc.o -c /home/ming/GitHub/mirants/port/thread.cc

port/CMakeFiles/mirants_port.dir/thread.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mirants_port.dir/thread.cc.i"
	cd /home/ming/GitHub/mirants/build/debug/port && g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ming/GitHub/mirants/port/thread.cc > CMakeFiles/mirants_port.dir/thread.cc.i

port/CMakeFiles/mirants_port.dir/thread.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mirants_port.dir/thread.cc.s"
	cd /home/ming/GitHub/mirants/build/debug/port && g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ming/GitHub/mirants/port/thread.cc -o CMakeFiles/mirants_port.dir/thread.cc.s

port/CMakeFiles/mirants_port.dir/thread.cc.o.requires:
.PHONY : port/CMakeFiles/mirants_port.dir/thread.cc.o.requires

port/CMakeFiles/mirants_port.dir/thread.cc.o.provides: port/CMakeFiles/mirants_port.dir/thread.cc.o.requires
	$(MAKE) -f port/CMakeFiles/mirants_port.dir/build.make port/CMakeFiles/mirants_port.dir/thread.cc.o.provides.build
.PHONY : port/CMakeFiles/mirants_port.dir/thread.cc.o.provides

port/CMakeFiles/mirants_port.dir/thread.cc.o.provides.build: port/CMakeFiles/mirants_port.dir/thread.cc.o

# Object files for target mirants_port
mirants_port_OBJECTS = \
"CMakeFiles/mirants_port.dir/threadpool.cc.o" \
"CMakeFiles/mirants_port.dir/mutex.cc.o" \
"CMakeFiles/mirants_port.dir/thread.cc.o"

# External object files for target mirants_port
mirants_port_EXTERNAL_OBJECTS =

port/libmirants_port.a: port/CMakeFiles/mirants_port.dir/threadpool.cc.o
port/libmirants_port.a: port/CMakeFiles/mirants_port.dir/mutex.cc.o
port/libmirants_port.a: port/CMakeFiles/mirants_port.dir/thread.cc.o
port/libmirants_port.a: port/CMakeFiles/mirants_port.dir/build.make
port/libmirants_port.a: port/CMakeFiles/mirants_port.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libmirants_port.a"
	cd /home/ming/GitHub/mirants/build/debug/port && $(CMAKE_COMMAND) -P CMakeFiles/mirants_port.dir/cmake_clean_target.cmake
	cd /home/ming/GitHub/mirants/build/debug/port && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mirants_port.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
port/CMakeFiles/mirants_port.dir/build: port/libmirants_port.a
.PHONY : port/CMakeFiles/mirants_port.dir/build

port/CMakeFiles/mirants_port.dir/requires: port/CMakeFiles/mirants_port.dir/threadpool.cc.o.requires
port/CMakeFiles/mirants_port.dir/requires: port/CMakeFiles/mirants_port.dir/mutex.cc.o.requires
port/CMakeFiles/mirants_port.dir/requires: port/CMakeFiles/mirants_port.dir/thread.cc.o.requires
.PHONY : port/CMakeFiles/mirants_port.dir/requires

port/CMakeFiles/mirants_port.dir/clean:
	cd /home/ming/GitHub/mirants/build/debug/port && $(CMAKE_COMMAND) -P CMakeFiles/mirants_port.dir/cmake_clean.cmake
.PHONY : port/CMakeFiles/mirants_port.dir/clean

port/CMakeFiles/mirants_port.dir/depend:
	cd /home/ming/GitHub/mirants/build/debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ming/GitHub/mirants /home/ming/GitHub/mirants/port /home/ming/GitHub/mirants/build/debug /home/ming/GitHub/mirants/build/debug/port /home/ming/GitHub/mirants/build/debug/port/CMakeFiles/mirants_port.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : port/CMakeFiles/mirants_port.dir/depend

