//
// Created by serwu on 13.12.2022.
//

#ifndef MAIN_CPP_PATH_H
#define MAIN_CPP_PATH_H


#include "List/MyList.h"
#include "DynamicArray.h"

class Path {
    DynamicArray<int> path;
    int cost;

public:
    Path(const DynamicArray<int> path, int cost);

    const DynamicArray<int> getPath() const;

    int getCost() const;

    void addStep(int, int);
};


#endif //MAIN_CPP_PATH_H
