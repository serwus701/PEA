cmake_minimum_required(VERSION 3.20.2)
project(Proj1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proj1 main.cpp Graph.cpp Graph.h BruteForce.cpp BruteForce.h Timer.cpp Timer.h BranchAndBound.cpp BranchAndBound.h Simulation.cpp Simulation.h DynamicProgramming.cpp DynamicProgramming.h List/ListElement.h List/ListElement.cpp List/MyList.h List/MyList.cpp)
