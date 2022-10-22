//
// Created by serwu on 22.10.2022.
//

#ifndef MAIN_CPP_BRANCHANDBOUND_H
#define MAIN_CPP_BRANCHANDBOUND_H


#include "Graph.h"

class BranchAndBound {
    int *visitedNodes;

    int currMinimalCost;
    Graph matrix;

    BranchAndBound(Graph, int*);


};


#endif //MAIN_CPP_BRANCHANDBOUND_H
