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
include CMakeFiles/C457.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/C457.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/C457.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C457.dir/flags.make

CMakeFiles/C457.dir/zero-judge/C457.cpp.obj: CMakeFiles/C457.dir/flags.make
CMakeFiles/C457.dir/zero-judge/C457.cpp.obj: C:/Users/zanya/CLionProjects/leetcode-or-zero_judge/zero-judge/C457.cpp
CMakeFiles/C457.dir/zero-judge/C457.cpp.obj: CMakeFiles/C457.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C457.dir/zero-judge/C457.cpp.obj"
	C:\Users\zanya\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/C457.dir/zero-judge/C457.cpp.obj -MF CMakeFiles\C457.dir\zero-judge\C457.cpp.obj.d -o CMakeFiles\C457.dir\zero-judge\C457.cpp.obj -c C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\zero-judge\C457.cpp

CMakeFiles/C457.dir/zero-judge/C457.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/C457.dir/zero-judge/C457.cpp.i"
	C:\Users\zanya\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\zero-judge\C457.cpp > CMakeFiles\C457.dir\zero-judge\C457.cpp.i

CMakeFiles/C457.dir/zero-judge/C457.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/C457.dir/zero-judge/C457.cpp.s"
	C:\Users\zanya\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\zero-judge\C457.cpp -o CMakeFiles\C457.dir\zero-judge\C457.cpp.s

# Object files for target C457
C457_OBJECTS = \
"CMakeFiles/C457.dir/zero-judge/C457.cpp.obj"

# External object files for target C457
C457_EXTERNAL_OBJECTS =

C457.exe: CMakeFiles/C457.dir/zero-judge/C457.cpp.obj
C457.exe: CMakeFiles/C457.dir/build.make
C457.exe: CMakeFiles/C457.dir/linkLibs.rsp
C457.exe: CMakeFiles/C457.dir/objects1.rsp
C457.exe: CMakeFiles/C457.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C457.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\C457.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C457.dir/build: C457.exe
.PHONY : CMakeFiles/C457.dir/build

CMakeFiles/C457.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C457.dir\cmake_clean.cmake
.PHONY : CMakeFiles/C457.dir/clean

CMakeFiles/C457.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\zanya\CLionProjects\leetcode-or-zero_judge C:\Users\zanya\CLionProjects\leetcode-or-zero_judge C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug C:\Users\zanya\CLionProjects\leetcode-or-zero_judge\cmake-build-debug\CMakeFiles\C457.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/C457.dir/depend

