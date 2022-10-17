//
// Created by serwu on 14.10.2022.
//

#ifndef PROJ1_GRAPH_H
#define PROJ1_GRAPH_H

#include <string>
#include "Path.h"


class Graph {
private:
    int **graph = nullptr;
    int nodeNumber;

public:
    int getNodeNumber();
    int getFromPosition(int, int);
    int getPathCost(Path*);
    void readDataFromFile(const std::string&);
    void readDataFromConsole();

    void printGraph();
};

#endif //PROJ1_GRAPH_H
