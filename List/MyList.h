//
// Created by Michał on 13.03.2022.
//

#ifndef MAIN_CPP_MYLIST_H
#define MAIN_CPP_MYLIST_H

#include "ListElement.h"


class MyList {

private:
    int size;
    ListElement *head;
    ListElement *tail;

    ListElement *getElementPtr(int);

    void addPrimalElement(int);//adding first element

    void deleteFinalElement();

public:
    MyList &operator=(const MyList sourceList) {
        this->deleteAll();
        auto currSourceElement = sourceList.head;

        if (currSourceElement == nullptr)
            return *this;

        while (currSourceElement != nullptr) {
            this->addRear(currSourceElement->getContainer());
            currSourceElement = currSourceElement->getNext();
        }

        return *this;
    }

    MyList();

    MyList(int, int);

    void swap(int, int);

    void addRear(int);

    void addFront(int);

    void addOnPosition(int, int);

    void deleteRear();

    void deleteFront();

    void deletePos(int);

    void clear();

    int getSize();//returns size of structure

    int getHead();//returns element from the front of the structure

    int at(int);//returns element getContainer the given position

    int findFirst(int);//returns position of first element with equal to given value

    void show() const;

    //void readFromFile(std::string);//file input

    void deleteAll();//delete structure
};


#endif //MAIN_CPP_MYLIST_H
