//
// Created by serwu on 16.10.2022.
//

#include <iostream>
#include <synchapi.h>
#include "BruteForce.h"
void BruteForce::solution(Graph inputGraph) {
    int graphLen = inputGraph.getNodeNumber();
    int minPathCost = INT16_MAX;
    int minPath[graphLen];

    int currPath[graphLen];

    for (int i = 0; i < graphLen; ++i) {
        currPath[i] = i;
    }

    do {
        int currPathCost = inputGraph.getPathCost(currPath, graphLen);
        if(currPathCost < minPathCost && currPathCost > 0){
            minPathCost = currPathCost;
            for (int i = 0; i < inputGraph.getNodeNumber(); ++i) {
                minPath[i] = currPath[i];
            }
        }
    } while (std::next_permutation(currPath, currPath + graphLen));

    //printAnswers(minPathCost, graphLen, minPath);
}

void BruteForce::printAnswers(int minPathCost, int graphLen, int* minPath) {
    std::cout << "MINIMAL PATH COST" << std::endl;
    std::cout << minPathCost << std::endl << std::endl;
    std::cout << "MINIMAL PATH" << std::endl;
    for (int i = 0; i < graphLen; ++i) {
        std::cout << minPath[i] << std::endl;
    }
    std::cout << std::endl;
}

