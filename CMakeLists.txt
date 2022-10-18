cmake_minimum_required(VERSION 3.23)
project(Proj1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proj1 main.cpp Graph.cpp Graph.h BruteForce.cpp BruteForce.h Path.cpp Path.h)
