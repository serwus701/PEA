//
// Created by serwu on 06.11.2022.
//

#include <iostream>
#include <valarray>
#include "Simulation.h"
#include "Graph.h"
#include "Timer.h"
#include "BruteForce.h"
#include "BranchAndBound.h"
#include "DynamicProgramming.h"
#include "SimulatedAnnealing.h"

void Simulation::run(int instance) {

    std::string fileNames[] = {"tsp_6_1", "tsp_6_2", "tsp_10", "tsp_12", "tsp_13"};
    int bestCosts[] = {132, 80, 212, 264, 269};

    for (int i = 0; i < 5; ++i) {

        std::cout << "instance " << fileNames[i] << std::endl << std::endl;
        auto graph = new Graph();
        graph->readDataFromFile(fileNames[i]);
        //graph->printGraph();
        testSAEfficiency(*graph, bestCosts[i]);

        delete graph;
    }

    //int graphSize;
    //int numberOfGraphs = 100;
/*
    for (int i = 5; i < 13; ++i) {
        graphSize = i;
        //std::cout << " Average SA time size [" << i << "] " << simulateSA(graphSize, numberOfGraphs) << "\n";
        //std::cout << " Average bnb time size [" << i << "] " << simulateBnB(graphSize, numberOfGraphs) << "\n";
        //std::cout << " Average dp time size [" << i << "] " << SimulateDP(graphSize, numberOfGraphs) << "\n";
        //std::cout << " Average bf time size [" << i << "] " << simulateBF(graphSize, numberOfGraphs) << "\n\n";
    }
    */
}

double Simulation::simulateBF(int graphSize, int numberOfGraphs) {
    auto myTimer = new Timer;
    double totalTime = 0;
    for (int i = 0; i < numberOfGraphs; ++i) {
        auto *graph = new Graph;
        graph->randomlyGenerateGraph(graphSize);

        myTimer->startCounter();
        (new BruteForce())->solution(*graph);
        totalTime += myTimer->getMilliseconds();

        myTimer->startCounter();
        (new BranchAndBound(*graph))->solution();
        totalTime += myTimer->getMilliseconds();

        delete graph;
    }
    return totalTime / numberOfGraphs;
}

double Simulation::simulateBnB(int graphSize, int numberOfGraphs) {
    auto myTimer = new Timer;
    double totalTime = 0;
    for (int i = 0; i < numberOfGraphs; ++i) {
        auto *graph = new Graph;
        graph->randomlyGenerateGraph(graphSize);

        myTimer->startCounter();
        (new BranchAndBound(*graph))->solution();
        totalTime += myTimer->getMilliseconds();

        delete graph;
    }
    return totalTime / numberOfGraphs;
}

void Simulation::simulateEveryAlgorithmInterface() {
    std::string input;
    std::cout << "Input file name (no txt)" << std::endl;
    std::cin >> input;
    auto graph = new Graph();
    graph->readDataFromFile(input);
    graph->printGraph();
    std::cout << std::endl;
    (new DynamicProgramming(*graph))->solution();
    //(new BranchAndBound(*graph))->solution();
    //((new BruteForce())->solution(*graph));
    auto SA = new SimulatedAnnealing(1000, 0.999, 500);

    printPath(SA->solution(*graph));

}

void Simulation::printPath(Path *pathToPrint) {
    std::cout << "SA Minimal cost: " << pathToPrint->getCost() << std::endl;
    std::cout << "SA Minimal path:" << std::endl;
    //pathToPrint->getPath().show();
}

double Simulation::simulateSA(int graphSize, int numberOfGraphs) {
    auto myTimer = new Timer;
    double totalTime = 0;
    for (int i = 0; i < numberOfGraphs; ++i) {
        auto *graph = new Graph;
        graph->randomlyGenerateGraph(graphSize);

        myTimer->startCounter();
        auto SA = new SimulatedAnnealing(1000, 0.999, 500);
        SA->solution(*graph);
        totalTime += myTimer->getMilliseconds();

        delete graph;
    }
    return totalTime / numberOfGraphs;
}

void Simulation::testSAEfficiency(Graph &graph, int bestPathCost) {

    auto timer = new Timer();

    const int repetitions = 100;

    double heat = 1000;//do 5000 co 1000
    double coolingRate = 0.99;//dopisuje 9 po przecinku
    int eraLimit = 1000;//1000 do 5000 co 1000


    //heat
    for (int i = 1000; i <= 5000; i += 1000) {

        double time = 0;
        double successDifferenceRate = 0;

        for (int j = 0; j < repetitions; ++j) {
            coolingRate = 0.99;//dopisuje 9 po przecinku
            eraLimit = 1000;//1000 do 5000 co 1000

            auto SA = new SimulatedAnnealing(i, coolingRate, eraLimit);

            timer->startCounter();
            auto solution = SA->solution(graph);
            time += timer->getMilliseconds();

            successDifferenceRate += (solution->getCost() - bestPathCost);

            delete SA;
            delete solution;
        }

        std::cout << "Heat equal " << i << std::endl;
        std::cout << "Time avg " << time / repetitions << " milliseconds" << std::endl;
        std::cout << "Avg failure ratio  " << ((successDifferenceRate / repetitions + bestPathCost) / bestPathCost - 1)  * 100 << "%"
                  << std::endl;
        std::cout << std::endl;

    }

    //cooling Rate
    coolingRate = 0.99;
    for (int i = 0; i < 5; i++) {

        double time = 0;
        double successDifferenceRate = 0;

        for (int j = 0; j < repetitions; ++j) {
            heat = 1000;//do 5000 co 1000
            eraLimit = 1000;//1000 do 5000 co 1000

            auto SA = new SimulatedAnnealing(heat, coolingRate, eraLimit);

            timer->startCounter();
            auto solution = SA->solution(graph);
            time += timer->getMilliseconds();

            successDifferenceRate += (solution->getCost() - bestPathCost);

            delete SA;
            delete solution;
        }

        std::cout << "Cooling Rate equal " << coolingRate << std::endl;
        std::cout << "Time avg " << time / repetitions << " milliseconds" << std::endl;
        std::cout << "Avg failure ratio  " << ((successDifferenceRate / repetitions + bestPathCost) / bestPathCost - 1)  * 100 << "%"
                  << std::endl;
        std::cout << std::endl;

        coolingRate += 9 * (1 / pow(10, 3 + i));
    }

    //era limit
    for (int i = 1000; i <= 5000; i += 1000) {

        double time = 0;
        double successDifferenceRate = 0;

        for (int j = 0; j < repetitions; ++j) {
            heat = 1000;//do 5000 co 1000
            coolingRate = 0.99;//dopisuje 9 po przecinku

            auto SA = new SimulatedAnnealing(heat, coolingRate, i);

            timer->startCounter();
            auto solution = SA->solution(graph);
            time += timer->getMilliseconds();

            successDifferenceRate += (solution->getCost() - bestPathCost);

            delete SA;
            delete solution;
        }

        std::cout << "era limit equal " << i << std::endl;
        std::cout << "Time avg " << time / repetitions << " milliseconds" << std::endl;
        std::cout << "Avg failure ratio  " << ((successDifferenceRate / repetitions + bestPathCost) / bestPathCost - 1)  * 100 << "%"
                  << std::endl;
        std::cout << std::endl;

    }

    delete timer;
}
