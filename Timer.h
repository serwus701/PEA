//
// Created by serwu on 18.10.2022.
//

#ifndef PROJ1_TIMER_H
#define PROJ1_TIMER_H


#include <cctype>
#include <chrono>

class Timer {
private:
    std::chrono::high_resolution_clock::time_point startTime;

public:
    void startCounter();

    double getMilliseconds() const;
};


#endif //PROJ1_TIMER_H
