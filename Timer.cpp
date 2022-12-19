//
// Created by serwu on 18.10.2022.
//

#include "Timer.h"

void Timer::startCounter() {
    //function responsible for starting timer
    startTime = std::chrono::high_resolution_clock::now();
}

double Timer::getMilliseconds() const {
    //function responsible for stopping timer and returning time
    std::chrono::high_resolution_clock::time_point endTime = std::chrono::high_resolution_clock::now();

    return (std::chrono::duration<double, std::nano>(endTime - startTime)).count()/1000;

}
