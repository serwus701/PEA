//
// Created by serwu on 06.11.2022.
//

#ifndef MAIN_CPP_SIMULATION_H
#define MAIN_CPP_SIMULATION_H


class Simulation {
private:
    double simulateBF(int, int);
    double simulateBnB(int, int);
    double SimulateDP(int, int);

public:
    void simulateBothAlgorithmsInterface();
    void run();
};


#endif //MAIN_CPP_SIMULATION_H
