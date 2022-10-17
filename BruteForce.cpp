//
// Created by serwu on 16.10.2022.
//

#include "BruteForce.h"
#include "Array/MyArray.h"

void BruteForce::solution(Graph inputGraph) {
    auto *sizes = new MyArray;
    int possiblePathsArray[inputGraph.getNodeNumber()];

    for (int i = 0; i < inputGraph.getNodeNumber(); ++i) {
        possiblePathsArray[i] = i;
    }

    do {
        sizes->addFront(inputGraph.getPathCost(new Path(possiblePathsArray, inputGraph.getNodeNumber())));
    } while (std::next_permutation(possiblePathsArray, possiblePathsArray + inputGraph.getNodeNumber()));

    sizes->show();
}

