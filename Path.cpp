//
// Created by serwu on 13.12.2022.
//

#include "Path.h"

const DynamicArray<int> Path::getPath() const {
    return path;
}

int Path::getCost() const {
    return cost;
}

Path::Path(const DynamicArray<int> path, int cost) : path(path), cost(cost) {}

void Path::addStep(int step, int cost) {
    path.addBack(step);
    this->cost += cost;
}

