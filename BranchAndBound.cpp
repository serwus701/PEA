//
// Created by serwu on 22.10.2022.
//

#include "BranchAndBound.h"


BranchAndBound::BranchAndBound(Graph matrix, int *visitedNodes) {
    this->matrix = matrix;
    this->visitedNodes = visitedNodes;
}
