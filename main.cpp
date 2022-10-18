#include <iostream>
#include "Graph.h"
#include "BruteForce.h"
#include "Timer.h"

int main() {
    Graph * graph = new Graph;

    graph->readDataFromFile("input.txt");

    auto *myTimer = new Timer;

    myTimer->startCounter();
    (new BruteForce())->solution(*graph);
    std::cout << myTimer->getCounter();
}
