//
// Created by serwu on 18.10.2022.
//

#include <ntdef.h>
#include <profileapi.h>
#include "Timer.h"

void Timer::startCounter() {
    //function responsible for starting timer
    LARGE_INTEGER li;

    PCFreq = double(li.QuadPart) / 1000000000.0;

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}

double Timer::getCounter() const {
    //function responsible for stopping timer and returning time
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return double(li.QuadPart - CounterStart) / PCFreq;
}

Timer::Timer() {
    PCFreq = 0.0;
    CounterStart = 0;
}
