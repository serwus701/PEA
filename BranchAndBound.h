//
// Created by serwu on 22.10.2022.
//

#ifndef MAIN_CPP_BRANCHANDBOUND_H
#define MAIN_CPP_BRANCHANDBOUND_H


#include "Graph.h"

class BranchAndBound {
private:
    Graph matrix;

    int *finalPath;

    int finalCost;

    void copyPathToFinal(const int *);

    void recursionBuildSearchTree(int currWeight, int level, int *currPath, bool *visited);

    void printAnswers();

public:
    explicit BranchAndBound(Graph);

    void solution();
};


#endif //MAIN_CPP_BRANCHANDBOUND_H
