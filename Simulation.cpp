//
// Created by serwu on 06.11.2022.
//

#include <iostream>
#include "Simulation.h"
#include "Graph.h"
#include "Timer.h"
#include "BruteForce.h"
#include "BranchAndBound.h"
#include "DynamicProgramming.h"

void Simulation::run() {

    int graphSize;
    int numberOfGraphs = 100;

    for (int i = 5; i < 13; ++i) {
        graphSize = i;

        std::cout << " Average bnb time size [" << i << "] " << simulateBnB(graphSize, numberOfGraphs) << "\n";
        std::cout << " Average dp time size [" << i << "] " << SimulateDP(graphSize, numberOfGraphs) << "\n";
        std::cout << " Average bf time size [" << i << "] " << simulateBF(graphSize, numberOfGraphs) << "\n\n";
    }
}

double Simulation::simulateBF(int graphSize, int numberOfGraphs) {
    auto myTimer = new Timer;
    double totalTime = 0;
    for (int i = 0; i < numberOfGraphs; ++i) {
        auto *graph = new Graph;
        graph->randomlyGenerateGraph(graphSize);
        //graph->readDataFromFile("tsp_10");

        myTimer->startCounter();
        (new BruteForce())->solution(*graph);
        totalTime += myTimer->getCounter();

        myTimer->startCounter();
        (new BranchAndBound(*graph))->solution();
        totalTime += myTimer->getCounter();

        delete graph;
    }
    return totalTime/numberOfGraphs;
}

double Simulation::simulateBnB(int graphSize, int numberOfGraphs) {
    auto myTimer = new Timer;
    double totalTime = 0;
    for (int i = 0; i < numberOfGraphs; ++i) {
        auto *graph = new Graph;
        graph->randomlyGenerateGraph(graphSize);
        //graph->readDataFromFile("tsp_10");

        myTimer->startCounter();
        (new BranchAndBound(*graph))->solution();
        totalTime += myTimer->getCounter();

        delete graph;
    }
    return totalTime/numberOfGraphs;
}

double Simulation::SimulateDP(int graphSize, int numberOfGraphs) {
    auto myTimer = new Timer;
    double totalTime = 0;
    for (int i = 0; i < numberOfGraphs; ++i) {
        auto *graph = new Graph;
        graph->randomlyGenerateGraph(graphSize);
        //graph->readDataFromFile("tsp_10");

        myTimer->startCounter();
        (new DynamicProgramming(*graph))->solution();
        totalTime += myTimer->getCounter();

        delete graph;
    }
    return totalTime/numberOfGraphs;
}

void Simulation::simulateBothAlgorithmsInterface() {
    std::string input;
    std::cout << "Input file name (no txt)" <<std::endl;
    std::cin >> input;
    auto graph = new Graph();
    graph->readDataFromFile(input);
    graph->printGraph();
    std::cout << std::endl;
    (new DynamicProgramming(*graph))->solution();
    (new BranchAndBound(*graph))->solution();
    ((new BruteForce())->solution(*graph));
}
