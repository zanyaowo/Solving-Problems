# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = C:\Users\zanya\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\zanya\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\zanya\CLionProjects\leetcode-or-zero_judge

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hw8.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hw8.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hw8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw8.dir/flags.make

CMakeFiles/hw8.dir/homework/hw8.cpp.obj: CMakeFiles/hw8.dir/flags.make
CMakeFiles/hw8.dir/homework/hw8.cpp.obj: C:/Users/zanya/CLionProjects/leetcode-or-zero_judge/homework/hw8.cpp
CMakeFiles/hw8.dir/homework/hw8.cpp.obj: CMakeFiles/hw8.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw8.dir/homework/hw8.cpp.obj"
	C:\Users\zanya\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hw8.dir/homework/hw8.cpp.obj -MF CMakeFiles\hw8.dir\homework\hw8.cpp.obj.d -o CMakeFiles\hw8.dir\homework\hw8.cpp.obj -c C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\homework\hw8.cpp

CMakeFiles/hw8.dir/homework/hw8.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hw8.dir/homework/hw8.cpp.i"
	C:\Users\zanya\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\homework\hw8.cpp > CMakeFiles\hw8.dir\homework\hw8.cpp.i

CMakeFiles/hw8.dir/homework/hw8.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hw8.dir/homework/hw8.cpp.s"
	C:\Users\zanya\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\homework\hw8.cpp -o CMakeFiles\hw8.dir\homework\hw8.cpp.s

# Object files for target hw8
hw8_OBJECTS = \
"CMakeFiles/hw8.dir/homework/hw8.cpp.obj"

# External object files for target hw8
hw8_EXTERNAL_OBJECTS =

hw8.exe: CMakeFiles/hw8.dir/homework/hw8.cpp.obj
hw8.exe: CMakeFiles/hw8.dir/build.make
hw8.exe: CMakeFiles/hw8.dir/linkLibs.rsp
hw8.exe: CMakeFiles/hw8.dir/objects1.rsp
hw8.exe: CMakeFiles/hw8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hw8.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hw8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw8.dir/build: hw8.exe
.PHONY : CMakeFiles/hw8.dir/build

CMakeFiles/hw8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hw8.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hw8.dir/clean

CMakeFiles/hw8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\zanya\CLionProjects\leetcode-or-zero_judge C:\Users\zanya\CLionProjects\leetcode-or-zero_judge C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug\CMakeFiles\hw8.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/hw8.dir/depend

