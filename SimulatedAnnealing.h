//
// Created by serwu on 13.12.2022.
//

#ifndef MAIN_CPP_SIMULATEDANNEALING_H
#define MAIN_CPP_SIMULATEDANNEALING_H

#include <array>
#include "List/MyList.h"
#include "Graph.h"
#include "Path.h"
#include "DynamicArray.h"

class SimulatedAnnealing {
    double heat;
    double coolingRate;
    int eraLimit;
    DynamicArray<int> currentSolution;
    int currentCost;
    int bestCost;
    DynamicArray<int> bestSolution;

    static int calculateCost(Graph &graph, DynamicArray<int> &vertices);
    static bool makeDecision(int delta, double temperature);
    static void fullShuffle(DynamicArray<int> &vertices);
    static void simpleShuffle(DynamicArray<int> &vertices);

public:
    explicit SimulatedAnnealing(double, double, int);

    Path *solution(Graph &matrix);

    virtual ~SimulatedAnnealing();
};


#endif //MAIN_CPP_SIMULATEDANNEALING_H
