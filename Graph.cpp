//
// Created by serwu on 14.10.2022.
//
#include <iostream>
#include <fstream>
#include "Graph.h"

void Graph::readDataFromFile(const std::string& fileName) {
    std::ifstream myFile(fileName);
    if (myFile) {
        myFile >> nodeNumber;

        graph = new int *[nodeNumber];

        for (int i = 0; i < nodeNumber; ++i) {
            graph[i] = new int[nodeNumber];
        }

        for (int i = 0; i < nodeNumber; ++i) {
            for (int j = 0; j < nodeNumber; ++j) {
                myFile >> graph[i][j];
            }
        }

        myFile.close();
    } else
        std::cout << "Invalid file!" << std::endl;
}

void Graph::readDataFromConsole() {

}

void Graph::printGraph() {
    for (int i = 0; i < nodeNumber; ++i) {
        for (int j = 0; j < nodeNumber; ++j) {
            std::cout << graph[i][j];
        }
        std::cout << std::endl;
    }

}

int Graph::getNodeNumber() {
    return nodeNumber;
}

int Graph::getFromPosition(int x, int y) {
    return graph[x][y];
}

int Graph::getPathCost(Path *path) {
    int totalCost = 0;

    path->reverse();
    int currRow = path->top();
    path->pop();
    while (!path->empty()) {
        if(graph[currRow][path->top()] != -1){
            totalCost += graph[currRow][path->top()];
            currRow = path->top();
            path->pop();
        } else
            return -1;
    }
    return totalCost;
}
