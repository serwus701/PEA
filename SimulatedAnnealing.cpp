//
// Created by serwu on 13.12.2022.
//

#include "SimulatedAnnealing.h"
#include "RNG.h"
#include "Path.h"

#include <cmath>

SimulatedAnnealing::SimulatedAnnealing(double heat, double coolingRate, int eraLimit) {
    this->heat = heat;
    this->coolingRate = coolingRate;
    this->eraLimit = eraLimit;
}

int SimulatedAnnealing::calculateCost(Graph &graph, DynamicArray<int> &vertices) {
    int result = 0;
    int getNodeNumber = graph.getNodeNumber() - 1;

    for (int i = 0; i < getNodeNumber; i++) {
        result += graph.getFromPosition(vertices.at(i), vertices.at(i + 1));
    }
    result += graph.getFromPosition(vertices.at(getNodeNumber), vertices.at(0));

    return result;
}

bool SimulatedAnnealing::makeDecision(int difference, double heat) {
    return RNG::getRandomDouble(1) < exp(difference / heat);
}

void SimulatedAnnealing::fullShuffle(DynamicArray<int> &vertices) {
    for (int i = 0; i < vertices.getSize(); i++) {
        int firstPosition = RNG::getRandomInt(vertices.getSize() - 1);
        int secondPosition = RNG::getRandomInt(vertices.getSize() - 1);

        vertices.swap(firstPosition, secondPosition);
    }
}

void SimulatedAnnealing::simpleShuffle(DynamicArray<int> &vertices) {

    int firstPosition = RNG::getRandomInt(vertices.getSize() - 1);
    int secondPosition = RNG::getRandomInt(vertices.getSize() - 1);

    vertices.swap(firstPosition, secondPosition);
}

Path *SimulatedAnnealing::solution(Graph &matrix) {
    DynamicArray<int> vertices(0, matrix.getNodeNumber());
    fullShuffle(vertices);

    int cost = calculateCost(matrix, vertices);
    currentCost = cost;
    currentSolution = vertices;
    bestCost = cost;
    bestSolution = vertices;
    double currHeat = heat;


    while (currHeat > 1) {

        for (int i = 0; i < eraLimit; ++i) {

            DynamicArray<int> newVertices;
            newVertices = vertices;
            simpleShuffle(newVertices);

            int newCost = calculateCost(matrix, newVertices);
            int costDifference = cost - newCost;

            if (costDifference > 0 || makeDecision(costDifference, currHeat)) {
                cost = newCost;
                vertices = newVertices;
                currHeat *= coolingRate;

                if (newCost < currentCost) {
                    currentCost = newCost;
                    currentSolution = newVertices;
                }

                if(currentCost < bestCost) {
                    bestCost = currentCost;
                    bestSolution = currentSolution;
                }
            }
        }
    }
    return new Path(bestSolution, bestCost);
}

SimulatedAnnealing::~SimulatedAnnealing() {
    bestSolution.clear();
    currentSolution.clear();
}
