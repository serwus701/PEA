//
// Created by serwu on 16.10.2022.
//

#ifndef PROJ1_PATH_H
#define PROJ1_PATH_H

#include <stack>

class Path {
private:
    std::stack<int> visitedNodes;

public:
    Path(int *, int);

    void reverse();

    //bool wasVisited(int);

    bool empty();

    void pop();

    void push(int);

    int top();

};


#endif //PROJ1_PATH_H
