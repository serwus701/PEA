#include <iostream>
#include "MyList.h"

ListElement *MyList::getElementPtr(int position) {
    auto currElement = head;

    for (int i = 0; i < position; ++i) {
        currElement = currElement->getNext();
    }

    return currElement;
}

void MyList::addPrimalElement(int value) {
    auto newElement = new ListElement(value);
    head = newElement;
    tail = newElement;
    size = 1;
}

void MyList::deleteFinalElement() {
    delete head;
    head = nullptr;
    tail = nullptr;
    size = 0;
}

MyList::MyList() {
    size = 0;
    head = nullptr;
    tail = nullptr;
}

MyList::MyList(int begin, int size) {
    this->size = 0;
    head = nullptr;
    tail = nullptr;

    for (int i = 0; i < size; ++i) {
        this->addRear(i + begin);
    }
}

void MyList::swap(int pos1, int pos2) {
    if(pos1 == pos2)
        return;
    if(pos1 > pos2){
        int temp = pos1;
        pos1 = pos2;
        pos2 = temp;
    }

    if(pos1 < 0 || pos2 >= size)
        return;

    this->addOnPosition(pos2, this->at(pos1));
    this->addOnPosition(pos1, this->at(pos2 + 1));
    this->deletePos(pos1 + 1);
    this->deletePos(pos2 + 1);
}

void MyList::addRear(int value) {
    if(size == 0){
        addPrimalElement(value);
        return;
    }
    auto newElement = new ListElement(value);
    tail->setNext(newElement);
    newElement->setPrevious(tail);
    tail = newElement;
    size++;
}

void MyList::addFront(int value) {
    if(size == 0){
        addPrimalElement(value);
        return;
    }
    auto newElement = new ListElement(value);
    head->setPrevious(newElement);
    newElement->setNext(head);
    head = newElement;
    size++;
}

void MyList::addOnPosition(int position, int value) {
    if(position > size || position < 0)
        return;

    if(position == 0){
        addFront(value);
        return;
    }

    if(position == size){
        addRear(value);
        return;
    }

    auto currElement = head;
    for (int i = 0; i < position; ++i) {
        currElement = currElement->getNext();
    }
    auto newElement = new ListElement(value);
    newElement->setNext(currElement);
    newElement->setPrevious(currElement->getPrevious());

    newElement->getPrevious()->setNext(newElement);
    newElement->getNext()->setPrevious(newElement);

    size++;

}

void MyList::deleteRear() {
    if(size < 1)
        return;

    if(size == 1){
        deleteFinalElement();
        return;
    }

    tail = tail->getPrevious();
    delete tail->getNext();
    tail->setNext(nullptr);
    size--;
}

void MyList::deleteFront() {
    if(size < 1)
        return;

    if(size == 1){
        deleteFinalElement();
        return;
    }

    head = head->getNext();
    delete head->getPrevious();
    head->setPrevious(nullptr);
    size--;
}

void MyList::deletePos(int position) {
    if(position < 0 || position >= size)
        return;

    if(size == 0)
        return;

    if(position == 0){
        deleteFront();
        return;
    }

    if(position == size - 1){
        deleteRear();
        return;
    }

    auto currElement = head;
    for (int i = 0; i < position; ++i) {
        currElement = currElement->getNext();
    }
    currElement->getNext()->setPrevious(currElement->getPrevious());
    currElement->getPrevious()->setNext(currElement->getNext());

    delete currElement;

    size--;
}

void MyList::clear() {
    while (size > 0)
        deleteRear();
}

int MyList::getSize() {
    return size;
}

int MyList::getHead() {
    return head->getContainer();
}

int MyList::at(int position) {
    if (position < 0 || position >= size)
        return 0;

    auto currElement = head;
    for (int i = 0; i < position; ++i) {
        currElement = currElement->getNext();
    }
    return currElement->getContainer();
}

int MyList::findFirst(int value) {
    auto currElement = head;
    int position = 0;
    while (currElement != nullptr){
        if (currElement->getContainer() == value)
            return position;
        position++;
        currElement = currElement->getNext();
    }
    return -1;
}

void MyList::show() const {
    if (size > 0) {
        ListElement *iterator = head;
        while (iterator->getNext() != nullptr) {
            std::cout << iterator->getContainer() << " ";
            iterator = iterator->getNext();
        }
        std::cout << iterator->getContainer() << " ";
        std::cout << std::endl;
    } else{
        std::cout << "List is empty" << std::endl;
    }
}

void MyList::deleteAll() {
    if(size == 0)
        return;
    if(size == 1) {
        deleteFinalElement();
        return;
    }

    auto currElement = head;
    while (currElement->getNext() != nullptr){
        currElement = currElement->getNext();
        delete currElement->getPrevious();
    }
    delete currElement;

    head = nullptr;
    tail = nullptr;

    size = 0;

}
