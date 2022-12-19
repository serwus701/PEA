#include <iostream>
#include <synchapi.h>
#include "Simulation.h"
#include "Timer.h"

int main() {

    //((new Simulation())->simulateEveryAlgorithmInterface());
    ((new Simulation())->run(2));
}
