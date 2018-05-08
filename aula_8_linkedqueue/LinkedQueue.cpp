#include "LinkedQueue.h"
#include <cstddef> // Para funcionar o NULL
#include <new>
#include <iostream>

LinkedQueue::LinkedQueue() {
    front = NULL;
    rear = NULL;
}

LinkedQueue::~LinkedQueue() {
}

void LinkedQueue::enqueue(ItemType item) {
    if (isEmpty()) {
        NodeType* novoItem = new NodeType;
        novoItem->info = item;
        novoItem->next = NULL;
        front = novoItem;
        rear = novoItem;
    } else {
        if (!isFull()) {
            NodeType* novoItem = new NodeType;
            novoItem->info = item;
            novoItem->next = NULL;
            rear->next = novoItem;
            rear = novoItem;
        }
    }
}

ItemType LinkedQueue::dequeue() {
    if (isEmpty()) {
        return '0';
    } else {
        NodeType* tempPtr = front;
        ItemType item = front->info;
        front = front->next; //if it'is the last element, front = rear, so it means that front->next = NULL
        delete tempPtr;
        return item;
    }
}

bool LinkedQueue::isEmpty()const {
    return front == NULL;
}

bool LinkedQueue::isFull()const {
    NodeType* location;
    try {
        location = new NodeType;
        delete location;
        return false;
    } catch (std::bad_alloc exception) {
        return true;
    }
}

