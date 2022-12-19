//
// Created by serwu on 13.12.2022.
//

#include "RNG.h"

std::mt19937 RNG::gen((std::random_device())());

int RNG::getRandomInt(int high) {
    std::uniform_int_distribution<int> range(0, high);

    return range(gen);
}

int RNG::getInt(int low, int high) {
    std::uniform_int_distribution<int> range(low, high);

    return range(gen);
}

double RNG::getRandomDouble(double high) {
    std::uniform_real_distribution<double> range(0, high);

    return range(gen);
}

double RNG::getDouble(double low, double high) {
    std::uniform_real_distribution<double> range(low, high);

    return range(gen);
}