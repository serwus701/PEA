#include <iostream>
#include "Graph.h"
#include "BruteForce.h"
#include <algorithm>

int main() {
    Graph * graph = new Graph;

    graph->readDataFromFile("input.txt");

    (new BruteForce())->solution(*graph);
}
