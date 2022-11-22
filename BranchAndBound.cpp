//
// Created by serwu on 22.10.2022.
//

#include "BranchAndBound.h"
#include <iostream>


BranchAndBound::BranchAndBound(Graph matrix) {
    this->matrix = matrix;

    int nodesNumber = matrix.getNodeNumber();

    finalPath = new int[nodesNumber + 1];
    for (int i = 0; i < nodesNumber + 1; ++i) {
        finalPath[i] = 0;
    }

    for (int i = 0; i < nodesNumber + 1; ++i) {
        finalPath[i] = false;
    }

    finalCost = INT16_MAX;
}

void BranchAndBound::solution() {
    int nodeNumber = matrix.getNodeNumber();
    int currPath[nodeNumber + 1];
    bool visited[nodeNumber];

    for (int i = 0; i < nodeNumber + 1; ++i) {
        currPath[i] = -1;
    }
    for (int i = 0; i < nodeNumber; ++i) {
        visited[i] = false;
    }

    visited[0] = true;
    currPath[0] = 0;

    recursionBuildSearchTree(0, 1, currPath, visited);

    printAnswers();
}

void BranchAndBound::recursionBuildSearchTree(int currWeight, int level, int *currPath, bool *visited) {
    if (level == matrix.getNodeNumber()) {
        if(matrix.getFromPosition(currPath[level - 1], currPath[0]) > 0){
            int currCost = currWeight + matrix.getFromPosition(currPath[level - 1], currPath[0]);
            if (currCost < finalCost) {
                copyPathToFinal(currPath);
                finalCost = currCost;
            }
            return;
        }
    }

    for (int i = 0; i < matrix.getNodeNumber(); ++i) {

        if (matrix.getFromPosition(currPath[level - 1], i) > 0 && !visited[i]) {


            if (matrix.getFromPosition(currPath[level - 1], i) + currWeight < finalCost) {
                int tempWeight = currWeight;
                currWeight += matrix.getFromPosition(currPath[level - 1], i);
                currPath[level] = i;
                visited[i] = true;

                recursionBuildSearchTree(currWeight, level + 1, currPath, visited);

                currWeight = tempWeight;
                visited[i] = false;
            }
        }
    }
}

void BranchAndBound::copyPathToFinal(const int *currPath) {

    for (int i = 0; i < matrix.getNodeNumber(); ++i) {
        finalPath[i] = currPath[i];
    }
    finalPath[matrix.getNodeNumber()] = currPath[0];
}

void BranchAndBound::printAnswers() {

    std::cout << "BnB Minimal cost: " << finalCost << std::endl;
    std::cout << "BnB Minimal path: " << std::endl;

    for (int i = 0; i < matrix.getNodeNumber() + 1; ++i) {
        std::cout << *(finalPath + i) << " ";
    }
    std::cout << std::endl;
}
