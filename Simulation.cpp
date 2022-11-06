//
// Created by serwu on 06.11.2022.
//

#include <iostream>
#include "Simulation.h"
#include "Graph.h"
#include "Timer.h"
#include "BruteForce.h"
#include "BranchAndBound.h"

void Simulation::run() {

    int graphSize = 5;
    int numberOfGraphs = 100;

    std::cout << " Average bf time " << simulateBF(graphSize, numberOfGraphs) << "\n";
    std::cout << " Average bnb time " << simulateBnB(graphSize, numberOfGraphs) << "\n";
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
