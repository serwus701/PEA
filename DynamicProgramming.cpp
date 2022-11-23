//
// Created by serwu on 20.11.2022.
//

#include <iostream>
#include <valarray>
#include "DynamicProgramming.h"

DynamicProgramming::DynamicProgramming(Graph matrix) {
    this->matrix = matrix;

    nodeCount = matrix.getNodeNumber();
    finalPath = new int[nodeCount + 1];

    numberOfPaths = int(pow(2, (double) nodeCount) - 1);
    state = new dpResult *[nodeCount];

    for (int i = 0; i < nodeCount; i++) {
        state[i] = new dpResult[numberOfPaths];
    }

}

void DynamicProgramming::solution() {
    recursionBuildSearchTree(0, 1);

    finalPath[nodeCount] = 0;
    for (int i = 0; i <= nodeCount; i++) {

        finalPath[i] = state[0][1].path.getContainer(i);
    }

    finalCost = state[0][1].cost;


    printAnswers();
    cleanup();
}

void DynamicProgramming::printAnswers() {

    std::cout << "DP Minimal cost: " << finalCost << std::endl;
    std::cout << "DP Minimal path: " << std::endl;

    for (int i = 0; i < matrix.getNodeNumber() + 1; ++i) {
        std::cout << *(finalPath + i) << " ";
    }
    std::cout << std::endl;
}

void DynamicProgramming::cleanup() {
    for (int i = 0; i < nodeCount; i++) {
        delete[] state[i];
    }
    delete[] state;
}

DynamicProgramming::dpResult DynamicProgramming::recursionBuildSearchTree(int currentVertex, int visitedVertexMask) {
    if (visitedVertexMask == numberOfPaths) {
        return {matrix.getFromPosition(currentVertex, 0), currentVertex}; // return to starting city
    }
    if (state[currentVertex][visitedVertexMask].cost != INT_MAX) {
        return state[currentVertex][visitedVertexMask];
    }
    for (int consideredVertex = 0; consideredVertex < nodeCount; ++consideredVertex) {

        if (consideredVertex == currentVertex || (visitedVertexMask & (1 << consideredVertex))) {
            continue;
        }

        auto result = recursionBuildSearchTree(consideredVertex, visitedVertexMask | (1 << consideredVertex));

        result.cost += matrix.getFromPosition(currentVertex, consideredVertex);

        result.path.addFront(currentVertex);

        if (result.cost < state[currentVertex][visitedVertexMask].cost) {
            state[currentVertex][visitedVertexMask].cost = result.cost;

            state[currentVertex][visitedVertexMask].path.clear();
            for (int j = 0; j < result.path.getSize(); j++) {
                state[currentVertex][visitedVertexMask].path.addRear(result.path.getContainer(j));
            }
        }
    }

    return state[currentVertex][visitedVertexMask];
}

