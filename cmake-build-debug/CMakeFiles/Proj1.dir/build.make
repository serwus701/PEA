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
CMAKE_COMMAND = "E:\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Code\PEA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Code\PEA\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Proj1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Proj1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Proj1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Proj1.dir/flags.make

CMakeFiles/Proj1.dir/main.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/main.cpp.obj: ../main.cpp
CMakeFiles/Proj1.dir/main.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Proj1.dir/main.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/main.cpp.obj -MF CMakeFiles\Proj1.dir\main.cpp.obj.d -o CMakeFiles\Proj1.dir\main.cpp.obj -c E:\Code\PEA\main.cpp

CMakeFiles/Proj1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/main.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\main.cpp > CMakeFiles\Proj1.dir\main.cpp.i

CMakeFiles/Proj1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/main.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\main.cpp -o CMakeFiles\Proj1.dir\main.cpp.s

CMakeFiles/Proj1.dir/Graph.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/Graph.cpp.obj: ../Graph.cpp
CMakeFiles/Proj1.dir/Graph.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Proj1.dir/Graph.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/Graph.cpp.obj -MF CMakeFiles\Proj1.dir\Graph.cpp.obj.d -o CMakeFiles\Proj1.dir\Graph.cpp.obj -c E:\Code\PEA\Graph.cpp

CMakeFiles/Proj1.dir/Graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/Graph.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\Graph.cpp > CMakeFiles\Proj1.dir\Graph.cpp.i

CMakeFiles/Proj1.dir/Graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/Graph.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\Graph.cpp -o CMakeFiles\Proj1.dir\Graph.cpp.s

CMakeFiles/Proj1.dir/BruteForce.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/BruteForce.cpp.obj: ../BruteForce.cpp
CMakeFiles/Proj1.dir/BruteForce.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Proj1.dir/BruteForce.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/BruteForce.cpp.obj -MF CMakeFiles\Proj1.dir\BruteForce.cpp.obj.d -o CMakeFiles\Proj1.dir\BruteForce.cpp.obj -c E:\Code\PEA\BruteForce.cpp

CMakeFiles/Proj1.dir/BruteForce.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/BruteForce.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\BruteForce.cpp > CMakeFiles\Proj1.dir\BruteForce.cpp.i

CMakeFiles/Proj1.dir/BruteForce.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/BruteForce.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\BruteForce.cpp -o CMakeFiles\Proj1.dir\BruteForce.cpp.s

CMakeFiles/Proj1.dir/Timer.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/Timer.cpp.obj: ../Timer.cpp
CMakeFiles/Proj1.dir/Timer.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Proj1.dir/Timer.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/Timer.cpp.obj -MF CMakeFiles\Proj1.dir\Timer.cpp.obj.d -o CMakeFiles\Proj1.dir\Timer.cpp.obj -c E:\Code\PEA\Timer.cpp

CMakeFiles/Proj1.dir/Timer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/Timer.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\Timer.cpp > CMakeFiles\Proj1.dir\Timer.cpp.i

CMakeFiles/Proj1.dir/Timer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/Timer.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\Timer.cpp -o CMakeFiles\Proj1.dir\Timer.cpp.s

CMakeFiles/Proj1.dir/BranchAndBound.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/BranchAndBound.cpp.obj: ../BranchAndBound.cpp
CMakeFiles/Proj1.dir/BranchAndBound.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Proj1.dir/BranchAndBound.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/BranchAndBound.cpp.obj -MF CMakeFiles\Proj1.dir\BranchAndBound.cpp.obj.d -o CMakeFiles\Proj1.dir\BranchAndBound.cpp.obj -c E:\Code\PEA\BranchAndBound.cpp

CMakeFiles/Proj1.dir/BranchAndBound.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/BranchAndBound.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\BranchAndBound.cpp > CMakeFiles\Proj1.dir\BranchAndBound.cpp.i

CMakeFiles/Proj1.dir/BranchAndBound.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/BranchAndBound.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\BranchAndBound.cpp -o CMakeFiles\Proj1.dir\BranchAndBound.cpp.s

CMakeFiles/Proj1.dir/Simulation.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/Simulation.cpp.obj: ../Simulation.cpp
CMakeFiles/Proj1.dir/Simulation.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Proj1.dir/Simulation.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/Simulation.cpp.obj -MF CMakeFiles\Proj1.dir\Simulation.cpp.obj.d -o CMakeFiles\Proj1.dir\Simulation.cpp.obj -c E:\Code\PEA\Simulation.cpp

CMakeFiles/Proj1.dir/Simulation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/Simulation.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\Simulation.cpp > CMakeFiles\Proj1.dir\Simulation.cpp.i

CMakeFiles/Proj1.dir/Simulation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/Simulation.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\Simulation.cpp -o CMakeFiles\Proj1.dir\Simulation.cpp.s

CMakeFiles/Proj1.dir/DynamicProgramming.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/DynamicProgramming.cpp.obj: ../DynamicProgramming.cpp
CMakeFiles/Proj1.dir/DynamicProgramming.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Proj1.dir/DynamicProgramming.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/DynamicProgramming.cpp.obj -MF CMakeFiles\Proj1.dir\DynamicProgramming.cpp.obj.d -o CMakeFiles\Proj1.dir\DynamicProgramming.cpp.obj -c E:\Code\PEA\DynamicProgramming.cpp

CMakeFiles/Proj1.dir/DynamicProgramming.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/DynamicProgramming.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\DynamicProgramming.cpp > CMakeFiles\Proj1.dir\DynamicProgramming.cpp.i

CMakeFiles/Proj1.dir/DynamicProgramming.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/DynamicProgramming.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\DynamicProgramming.cpp -o CMakeFiles\Proj1.dir\DynamicProgramming.cpp.s

CMakeFiles/Proj1.dir/List/ListElement.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/List/ListElement.cpp.obj: ../List/ListElement.cpp
CMakeFiles/Proj1.dir/List/ListElement.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Proj1.dir/List/ListElement.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/List/ListElement.cpp.obj -MF CMakeFiles\Proj1.dir\List\ListElement.cpp.obj.d -o CMakeFiles\Proj1.dir\List\ListElement.cpp.obj -c E:\Code\PEA\List\ListElement.cpp

CMakeFiles/Proj1.dir/List/ListElement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/List/ListElement.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\List\ListElement.cpp > CMakeFiles\Proj1.dir\List\ListElement.cpp.i

CMakeFiles/Proj1.dir/List/ListElement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/List/ListElement.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\List\ListElement.cpp -o CMakeFiles\Proj1.dir\List\ListElement.cpp.s

CMakeFiles/Proj1.dir/List/MyList.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/List/MyList.cpp.obj: ../List/MyList.cpp
CMakeFiles/Proj1.dir/List/MyList.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Proj1.dir/List/MyList.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/List/MyList.cpp.obj -MF CMakeFiles\Proj1.dir\List\MyList.cpp.obj.d -o CMakeFiles\Proj1.dir\List\MyList.cpp.obj -c E:\Code\PEA\List\MyList.cpp

CMakeFiles/Proj1.dir/List/MyList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/List/MyList.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\List\MyList.cpp > CMakeFiles\Proj1.dir\List\MyList.cpp.i

CMakeFiles/Proj1.dir/List/MyList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/List/MyList.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\List\MyList.cpp -o CMakeFiles\Proj1.dir\List\MyList.cpp.s

CMakeFiles/Proj1.dir/SimulatedAnnealing.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/SimulatedAnnealing.cpp.obj: ../SimulatedAnnealing.cpp
CMakeFiles/Proj1.dir/SimulatedAnnealing.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Proj1.dir/SimulatedAnnealing.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/SimulatedAnnealing.cpp.obj -MF CMakeFiles\Proj1.dir\SimulatedAnnealing.cpp.obj.d -o CMakeFiles\Proj1.dir\SimulatedAnnealing.cpp.obj -c E:\Code\PEA\SimulatedAnnealing.cpp

CMakeFiles/Proj1.dir/SimulatedAnnealing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/SimulatedAnnealing.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\SimulatedAnnealing.cpp > CMakeFiles\Proj1.dir\SimulatedAnnealing.cpp.i

CMakeFiles/Proj1.dir/SimulatedAnnealing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/SimulatedAnnealing.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\SimulatedAnnealing.cpp -o CMakeFiles\Proj1.dir\SimulatedAnnealing.cpp.s

CMakeFiles/Proj1.dir/RNG.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/RNG.cpp.obj: ../RNG.cpp
CMakeFiles/Proj1.dir/RNG.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Proj1.dir/RNG.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/RNG.cpp.obj -MF CMakeFiles\Proj1.dir\RNG.cpp.obj.d -o CMakeFiles\Proj1.dir\RNG.cpp.obj -c E:\Code\PEA\RNG.cpp

CMakeFiles/Proj1.dir/RNG.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/RNG.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\RNG.cpp > CMakeFiles\Proj1.dir\RNG.cpp.i

CMakeFiles/Proj1.dir/RNG.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/RNG.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\RNG.cpp -o CMakeFiles\Proj1.dir\RNG.cpp.s

CMakeFiles/Proj1.dir/Path.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/Path.cpp.obj: ../Path.cpp
CMakeFiles/Proj1.dir/Path.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Proj1.dir/Path.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/Path.cpp.obj -MF CMakeFiles\Proj1.dir\Path.cpp.obj.d -o CMakeFiles\Proj1.dir\Path.cpp.obj -c E:\Code\PEA\Path.cpp

CMakeFiles/Proj1.dir/Path.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/Path.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\Path.cpp > CMakeFiles\Proj1.dir\Path.cpp.i

CMakeFiles/Proj1.dir/Path.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/Path.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\Path.cpp -o CMakeFiles\Proj1.dir\Path.cpp.s

CMakeFiles/Proj1.dir/DynamicArray.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/DynamicArray.cpp.obj: ../DynamicArray.cpp
CMakeFiles/Proj1.dir/DynamicArray.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Proj1.dir/DynamicArray.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/DynamicArray.cpp.obj -MF CMakeFiles\Proj1.dir\DynamicArray.cpp.obj.d -o CMakeFiles\Proj1.dir\DynamicArray.cpp.obj -c E:\Code\PEA\DynamicArray.cpp

CMakeFiles/Proj1.dir/DynamicArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/DynamicArray.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\DynamicArray.cpp > CMakeFiles\Proj1.dir\DynamicArray.cpp.i

CMakeFiles/Proj1.dir/DynamicArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/DynamicArray.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\DynamicArray.cpp -o CMakeFiles\Proj1.dir\DynamicArray.cpp.s

CMakeFiles/Proj1.dir/FileManagement.cpp.obj: CMakeFiles/Proj1.dir/flags.make
CMakeFiles/Proj1.dir/FileManagement.cpp.obj: ../FileManagement.cpp
CMakeFiles/Proj1.dir/FileManagement.cpp.obj: CMakeFiles/Proj1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Proj1.dir/FileManagement.cpp.obj"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Proj1.dir/FileManagement.cpp.obj -MF CMakeFiles\Proj1.dir\FileManagement.cpp.obj.d -o CMakeFiles\Proj1.dir\FileManagement.cpp.obj -c E:\Code\PEA\FileManagement.cpp

CMakeFiles/Proj1.dir/FileManagement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj1.dir/FileManagement.cpp.i"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PEA\FileManagement.cpp > CMakeFiles\Proj1.dir\FileManagement.cpp.i

CMakeFiles/Proj1.dir/FileManagement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj1.dir/FileManagement.cpp.s"
	"E:\CLion 2022.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PEA\FileManagement.cpp -o CMakeFiles\Proj1.dir\FileManagement.cpp.s

# Object files for target Proj1
Proj1_OBJECTS = \
"CMakeFiles/Proj1.dir/main.cpp.obj" \
"CMakeFiles/Proj1.dir/Graph.cpp.obj" \
"CMakeFiles/Proj1.dir/BruteForce.cpp.obj" \
"CMakeFiles/Proj1.dir/Timer.cpp.obj" \
"CMakeFiles/Proj1.dir/BranchAndBound.cpp.obj" \
"CMakeFiles/Proj1.dir/Simulation.cpp.obj" \
"CMakeFiles/Proj1.dir/DynamicProgramming.cpp.obj" \
"CMakeFiles/Proj1.dir/List/ListElement.cpp.obj" \
"CMakeFiles/Proj1.dir/List/MyList.cpp.obj" \
"CMakeFiles/Proj1.dir/SimulatedAnnealing.cpp.obj" \
"CMakeFiles/Proj1.dir/RNG.cpp.obj" \
"CMakeFiles/Proj1.dir/Path.cpp.obj" \
"CMakeFiles/Proj1.dir/DynamicArray.cpp.obj" \
"CMakeFiles/Proj1.dir/FileManagement.cpp.obj"

# External object files for target Proj1
Proj1_EXTERNAL_OBJECTS =

Proj1.exe: CMakeFiles/Proj1.dir/main.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/Graph.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/BruteForce.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/Timer.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/BranchAndBound.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/Simulation.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/DynamicProgramming.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/List/ListElement.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/List/MyList.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/SimulatedAnnealing.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/RNG.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/Path.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/DynamicArray.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/FileManagement.cpp.obj
Proj1.exe: CMakeFiles/Proj1.dir/build.make
Proj1.exe: CMakeFiles/Proj1.dir/linklibs.rsp
Proj1.exe: CMakeFiles/Proj1.dir/objects1.rsp
Proj1.exe: CMakeFiles/Proj1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Code\PEA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable Proj1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Proj1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Proj1.dir/build: Proj1.exe
.PHONY : CMakeFiles/Proj1.dir/build

CMakeFiles/Proj1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Proj1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Proj1.dir/clean

CMakeFiles/Proj1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Code\PEA E:\Code\PEA E:\Code\PEA\cmake-build-debug E:\Code\PEA\cmake-build-debug E:\Code\PEA\cmake-build-debug\CMakeFiles\Proj1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Proj1.dir/depend

