//
// Created by serwu on 06.11.2022.
//

#ifndef MAIN_CPP_SIMULATION_H
#define MAIN_CPP_SIMULATION_H


#include "Path.h"
#include "Graph.h"

class Simulation {
private:
    double simulateBF(int, int);
    double simulateBnB(int, int);
    //double SimulateDP(int, int);
    double simulateSA(int, int);

    void testSAEfficiency(Graph &, int);//heat, coolingRate, eraLimit

    void printPath(Path*);

public:
    void simulateEveryAlgorithmInterface();
    void run(int);
};


#endif //MAIN_CPP_SIMULATION_H
