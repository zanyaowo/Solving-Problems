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
CMAKE_COMMAND = C:\Users\zanya\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4167.35\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\zanya\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4167.35\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\zanya\CLionProjects\leetcode-or-zero_judge

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/leetcode167.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/leetcode167.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/leetcode167.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leetcode167.dir/flags.make

CMakeFiles/leetcode167.dir/leetcode/leetcode167.cpp.obj: CMakeFiles/leetcode167.dir/flags.make
CMakeFiles/leetcode167.dir/leetcode/leetcode167.cpp.obj: ../leetcode/leetcode167.cpp
CMakeFiles/leetcode167.dir/leetcode/leetcode167.cpp.obj: CMakeFiles/leetcode167.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leetcode167.dir/leetcode/leetcode167.cpp.obj"
	C:\Users\zanya\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4167.35\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/leetcode167.dir/leetcode/leetcode167.cpp.obj -MF CMakeFiles\leetcode167.dir\leetcode\leetcode167.cpp.obj.d -o CMakeFiles\leetcode167.dir\leetcode\leetcode167.cpp.obj -c C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\leetcode\leetcode167.cpp

CMakeFiles/leetcode167.dir/leetcode/leetcode167.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode167.dir/leetcode/leetcode167.cpp.i"
	C:\Users\zanya\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4167.35\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\leetcode\leetcode167.cpp > CMakeFiles\leetcode167.dir\leetcode\leetcode167.cpp.i

CMakeFiles/leetcode167.dir/leetcode/leetcode167.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode167.dir/leetcode/leetcode167.cpp.s"
	C:\Users\zanya\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4167.35\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\leetcode\leetcode167.cpp -o CMakeFiles\leetcode167.dir\leetcode\leetcode167.cpp.s

# Object files for target leetcode167
leetcode167_OBJECTS = \
"CMakeFiles/leetcode167.dir/leetcode/leetcode167.cpp.obj"

# External object files for target leetcode167
leetcode167_EXTERNAL_OBJECTS =

leetcode167.exe: CMakeFiles/leetcode167.dir/leetcode/leetcode167.cpp.obj
leetcode167.exe: CMakeFiles/leetcode167.dir/build.make
leetcode167.exe: CMakeFiles/leetcode167.dir/linklibs.rsp
leetcode167.exe: CMakeFiles/leetcode167.dir/objects1.rsp
leetcode167.exe: CMakeFiles/leetcode167.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable leetcode167.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\leetcode167.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leetcode167.dir/build: leetcode167.exe
.PHONY : CMakeFiles/leetcode167.dir/build

CMakeFiles/leetcode167.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\leetcode167.dir\cmake_clean.cmake
.PHONY : CMakeFiles/leetcode167.dir/clean

CMakeFiles/leetcode167.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\zanya\CLionProjects\leetcode-or-zero_judge C:\Users\zanya\CLionProjects\leetcode-or-zero_judge C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug\CMakeFiles\leetcode167.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leetcode167.dir/depend

