#include <iostream>
#include "Graph.h"
#include "BruteForce.h"
#include "Timer.h"

int main() {
    Graph * graph = new Graph;

    graph->readDataFromFile("tsp_6_2");

    //int path[6] = {0, 1, 2, 3, 4, 5};

    //std::cout << graph->getPathCost(path, 6);

    auto *myTimer = new Timer;

    myTimer->startCounter();
    (new BruteForce())->solution(*graph);
    double counter = myTimer->getCounter();
    std::cout << " Average time " << counter << " miliseconds"<< std::endl;
}
