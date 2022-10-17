//
// Created by serwu on 16.10.2022.
//

#include "Path.h"

/*
bool Path::wasVisited(int nodeName) {
    std::stack<int> nodesCopy = visitedNodes;

    while (!nodesCopy.empty()) {
        if (nodesCopy.top() == nodeName)
            return true;
        nodesCopy.pop();
    }
}*/

void Path::reverse() {
    std::stack<int> reversedStack;
    while (!visitedNodes.empty()) {
        reversedStack.push(visitedNodes.top());
        visitedNodes.pop();
    }
    visitedNodes = reversedStack;
}

void Path::push(int node) {
    visitedNodes.push(node);
}

bool Path::empty() {
    return visitedNodes.empty();
}

void Path::pop() {
    visitedNodes.pop();
}

int Path::top() {
    return visitedNodes.top();
}

Path::Path(int *pathArray, int size) {
    for (int i = 0; i < size; ++i) {
        visitedNodes.push(*pathArray);
        pathArray++;
    }
}
