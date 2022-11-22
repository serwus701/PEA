//
// Created by serwu on 20.11.2022.
//

#ifndef MAIN_CPP_DYNAMICPROGRAMMING_H
#define MAIN_CPP_DYNAMICPROGRAMMING_H


#include "Graph.h"
#include "List/MyList.h"

class DynamicProgramming {

    struct dpResult {
        int cost;
        MyList path;

        dpResult(int cost, int firstVertex) {
            this->cost = cost;
            path.addRear(firstVertex);
        };

        dpResult() {
            this->cost = INT_MAX;
        };

    };

    Graph matrix;

    int nodeCount;
    int numberOfPaths;
    int finalCost;

    int *finalPath;
    dpResult **state{};

    void printAnswers();
    void resetState();

    dpResult recursionBuildSearchTree(int currVertex, int visitedMask);

public:
    DynamicProgramming(Graph);
    void solution();
};


#endif //MAIN_CPP_DYNAMICPROGRAMMING_H
