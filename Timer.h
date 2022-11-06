//
// Created by serwu on 18.10.2022.
//

#ifndef PROJ1_TIMER_H
#define PROJ1_TIMER_H


#include <cctype>

class Timer {
private:
    double PCFreq;
    __int64 CounterStart;

public:
    Timer();

    void startCounter();

    void resetCounter();

    double getCounter() const;
};


#endif //PROJ1_TIMER_H
