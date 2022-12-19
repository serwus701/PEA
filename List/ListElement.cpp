#include "ListElement.h"

//getters and setters
ListElement::ListElement(int container) {
    this->container = container;
    next = nullptr;
    previous = nullptr;
}

int ListElement::getContainer() {
    return container;
}

void ListElement::setNext(ListElement *nextElement) {
    next = nextElement;
}

void ListElement::setPrevious(ListElement *previousElement) {
    previous = previousElement;
}

void ListElement::setContainer(int element) {
    container = element;
}

ListElement *ListElement::getNext() {
    return next;
}

ListElement *ListElement::getPrevious() {
    return previous;
}
