# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = C:\Users\ptivs\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4167.35\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\ptivs\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4167.35\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ptivs\CLionProjects\leetcode-or-zero_judge

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ptivs\CLionProjects\leetcode-or-zero_judge\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C458.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/C458.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/C458.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C458.dir/flags.make

CMakeFiles/C458.dir/zero-judge/C458.cpp.obj: CMakeFiles/C458.dir/flags.make
CMakeFiles/C458.dir/zero-judge/C458.cpp.obj: ../zero-judge/C458.cpp
CMakeFiles/C458.dir/zero-judge/C458.cpp.obj: CMakeFiles/C458.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ptivs\CLionProjects\leetcode-or-zero_judge\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C458.dir/zero-judge/C458.cpp.obj"
	C:\Users\ptivs\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4167.35\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/C458.dir/zero-judge/C458.cpp.obj -MF CMakeFiles\C458.dir\zero-judge\C458.cpp.obj.d -o CMakeFiles\C458.dir\zero-judge\C458.cpp.obj -c C:\Users\ptivs\CLionProjects\leetcode-or-zero_judge\zero-judge\C458.cpp

CMakeFiles/C458.dir/zero-judge/C458.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C458.dir/zero-judge/C458.cpp.i"
	C:\Users\ptivs\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4167.35\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ptivs\CLionProjects\leetcode-or-zero_judge\zero-judge\C458.cpp > CMakeFiles\C458.dir\zero-judge\C458.cpp.i

CMakeFiles/C458.dir/zero-judge/C458.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C458.dir/zero-judge/C458.cpp.s"
	C:\Users\ptivs\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4167.35\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ptivs\CLionProjects\leetcode-or-zero_judge\zero-judge\C458.cpp -o CMakeFiles\C458.dir\zero-judge\C458.cpp.s

# Object files for target C458
C458_OBJECTS = \
"CMakeFiles/C458.dir/zero-judge/C458.cpp.obj"

# External object files for target C458
C458_EXTERNAL_OBJECTS =

C458.exe: CMakeFiles/C458.dir/zero-judge/C458.cpp.obj
C458.exe: CMakeFiles/C458.dir/build.make
C458.exe: CMakeFiles/C458.dir/linklibs.rsp
C458.exe: CMakeFiles/C458.dir/objects1.rsp
C458.exe: CMakeFiles/C458.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ptivs\CLionProjects\leetcode-or-zero_judge\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C458.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\C458.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C458.dir/build: C458.exe
.PHONY : CMakeFiles/C458.dir/build

CMakeFiles/C458.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C458.dir\cmake_clean.cmake
.PHONY : CMakeFiles/C458.dir/clean

CMakeFiles/C458.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ptivs\CLionProjects\leetcode-or-zero_judge C:\Users\ptivs\CLionProjects\leetcode-or-zero_judge C:\Users\ptivs\CLionProjects\leetcode-or-zero_judge\cmake-build-debug C:\Users\ptivs\CLionProjects\leetcode-or-zero_judge\cmake-build-debug C:\Users\ptivs\CLionProjects\leetcode-or-zero_judge\cmake-build-debug\CMakeFiles\C458.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C458.dir/depend
