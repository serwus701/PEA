//
// Created by serwu on 22.10.2022.
//

#ifndef MAIN_CPP_BRANCHANDBOUND_H
#define MAIN_CPP_BRANCHANDBOUND_H


#include "Graph.h"

class BranchAndBound {
private:
    int currMinimalCost;
    Graph matrix;

    int *finalPath;

    bool *visited;

    int finalResolution;

    int notMinusOne(int);

    int firstMin(int);

    int secondMin(int);

    void copyPathToFinal(int *);

    void recursion(float, int, int, int *, bool *);

    int ceil(float floatInput);

    void printAnswers();

public:
    explicit BranchAndBound(Graph);

    void solution();
};


#endif //MAIN_CPP_BRANCHANDBOUND_H
