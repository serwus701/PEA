//
// Created by serwu on 13.12.2022.
//

#ifndef MAIN_CPP_RNG_H
#define MAIN_CPP_RNG_H


#include <random>

class RNG {
    static std::mt19937 gen;


public:
    static int getRandomInt(int high);
    static int getInt(int low, int high);

    static double getDouble(double low, double high);
    static double getRandomDouble(double high);
};


#endif //MAIN_CPP_RNG_H
