//
// Created by serwu on 14.10.2022.
//
#include <iostream>
#include <fstream>
#include "Graph.h"

void Graph::readDataFromFile(const std::string& fileName) {
    std::string realFileName = "input/" + fileName + ".txt";
    std::ifstream myFile(realFileName);
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

int Graph::getPathCost(const int *path, int pathSize) {
    int totalCost = 0;

    int currRow = *path;
    int startNode = currRow;
    for(int i = 1; i < pathSize; ++i) {
        if(graph[currRow][*(path + i)] != -1){
            totalCost += graph[currRow][*(path + i)];
            currRow = *(path + i);
        } else
            return -1;
    }
    return totalCost + graph[currRow][startNode];
}
