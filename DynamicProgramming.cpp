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
    dpResult result = recursionBuildSearchTree(0, 1);

    finalPath[nodeCount] = 0;
    for (int i = 0; i <= nodeCount; i++) {

        finalPath[i] = state[0][1].path.getContainer(i);
    }

    finalCost = state[0][1].cost;


    printAnswers();
    resetState();
}

void DynamicProgramming::printAnswers() {

    std::cout << "DP Minimal cost: " << finalCost << std::endl;
    std::cout << "DP Minimal path: " << std::endl;

    for (int i = 0; i < matrix.getNodeNumber() + 1; ++i) {
        std::cout << *(finalPath + i) << " ";
    }
    std::cout << std::endl;
}

void DynamicProgramming::resetState() {
    for (int i = 0; i < nodeCount; i++) {
        delete[] state[i];
    }
    delete[] state;
}

DynamicProgramming::dpResult DynamicProgramming::recursionBuildSearchTree(int currVertex, int visitedMask) {
    if (visitedMask == numberOfPaths) {
        return {matrix.getFromPosition(currVertex, 0), currVertex}; // return to starting city
    }
    if (state[currVertex][visitedMask].cost != INT_MAX) {
        return state[currVertex][visitedMask];
    }
    for (int i = 0; i < nodeCount; ++i) {
        //Checking whether i is not the current vertex and whether it was not visited
        if (i == currVertex || (visitedMask & (1 << i))) {
            continue;
        }

        //Finding the best path from current vertex
        auto result = recursionBuildSearchTree(i, visitedMask | (1 << i));

        //Adding cost of edge going from current vertex to i
        result.cost += matrix.getFromPosition(currVertex, i);

        //Adding currVertex to begging of the path
        result.path.addFront(currVertex);

        //Checking whether result of the path is better
        // than the optimal result for this vertex and mask
        // stored in state table
        if (result.cost < state[currVertex][visitedMask].cost) {
            //Updating state table result's cost and path
            state[currVertex][visitedMask].cost = result.cost;

            state[currVertex][visitedMask].path.clear();
            for (int it = 0; it < result.path.getSize(); it++) {
                state[currVertex][visitedMask].path.addRear(result.path.getContainer(it));
            }
        }
    }

    return state[currVertex][visitedMask];
}

