//
// Created by serwu on 22.10.2022.
//

#include "BranchAndBound.h"
#include <tgmath.h>
#include <iostream>


BranchAndBound::BranchAndBound(Graph matrix) {
    this->matrix = matrix;

    int nodesNumber = matrix.getNodeNumber();

    finalPath = new int[nodesNumber + 1];
    for (int i = 0; i < nodesNumber + 1; ++i) {
        finalPath[i] = 0;
    }

    visited = new bool[nodesNumber];
    for (int i = 0; i < nodesNumber + 1; ++i) {
        finalPath[i] = false;
    }

    finalResolution = INT16_MAX;
}

void BranchAndBound::solution() {
    float currBound = 0;
    int nodeNumber = matrix.getNodeNumber();
    int currPath[nodeNumber + 1];
    bool visited[nodeNumber];

    for (int i = 0; i < nodeNumber + 1; ++i) {
        currPath[i] = -1;
    }
    for (int i = 0; i < nodeNumber; ++i) {
        visited[i] = false;
    }

    for (int i = 0; i < nodeNumber; ++i) {
        currBound += firstMin(i) + secondMin(i);
    }

    currBound = ceil(currBound / 2);

    recursion(currBound, 0, 1, currPath, visited);

    printAnswers();
}

void BranchAndBound::recursion(float currBound, int currWeight, int level, int *currPath, bool *visited) {
    int currResolution;
    if (level == matrix.getNodeNumber()) {
        int cost = matrix.getFromPosition(currPath[level - 1], currPath[0]);
        if (cost > 0) {
            currResolution = currWeight + cost;

            if (currResolution < finalResolution) {
                copyPathToFinal(currPath);
                finalResolution = currResolution;
            }
        }
        return;
    }

    for (int i = 0; i < matrix.getNodeNumber(); ++i) {

        if (matrix.getFromPosition(notMinusOne(currPath[level - 1]), i) != 0 && !visited[i]) {
            float temp = currBound;
            currWeight += matrix.getFromPosition(notMinusOne(currPath[i]), i);

            if (level == 1) {
                currBound -= ((firstMin(notMinusOne(currPath[i])) + firstMin(i)) / 2);
            } else {
                currBound -= ((secondMin(notMinusOne(currPath[i])) + firstMin(i)) / 2);
            }

            if (currBound + currWeight < finalResolution) {
                currPath[level] = i;
                visited[i] = true;

                recursion(currBound, currWeight, level + 1, currPath, visited);
            }


            currWeight -= matrix.getFromPosition(notMinusOne(currPath[level - 1]), i);
            currBound = temp;

            for (int j = 0; j < matrix.getNodeNumber(); ++j) {
                visited[i] = false;
            }

            for (int j = 0; j < level; ++j) {
                if (currPath[j] != -1) {
                    visited[currPath[j]] = true;
                }
            }
        }
    }
}

int BranchAndBound::firstMin(int position) {
    int min = INT16_MAX;

    for (int i = 0; i < matrix.getNodeNumber(); ++i) {
        if (matrix.getFromPosition(position, i) < min && position != i) {
            min = matrix.getFromPosition(position, i);
        }
    }
}

int BranchAndBound::secondMin(int position) {
    int first, second = INT16_MAX;
    for (int i = 0; i < matrix.getNodeNumber(); ++i) {
        if (position == i) {
            continue;
        }
        if (matrix.getFromPosition(position, i) <= first) {
            second = first;
            first = matrix.getFromPosition(position, i);
        } else {
            if (matrix.getFromPosition(position, i) <= second && matrix.getFromPosition(position, i) != first) {
                second = matrix.getFromPosition(position, i);
            }
        }
    }
    return second;
}

inline int BranchAndBound::ceil(float floatInput) {
    return int(floatInput - fmod(floatInput, 1) + 1);
}

void BranchAndBound::copyPathToFinal(int *currPath) {

    for (int i = 0; i < matrix.getNodeNumber(); ++i) {
        finalPath[i] = currPath[i];
    }
    finalPath[matrix.getNodeNumber()] = currPath[0];
}

void BranchAndBound::printAnswers() {
    std::cout << "Minimal cost: " << finalResolution << std::endl;
    std::cout << "Minimal path: " << std::endl;

    for (int i = 0; i < matrix.getNodeNumber() + 1; ++i) {
        std::cout << *(finalPath + i) << " ";
    }
}

int BranchAndBound::notMinusOne(int input) {
    if(input == -1)
        return matrix.getNodeNumber() - 1;
    else
        return input;
}
