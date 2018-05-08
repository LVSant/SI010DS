#include "LinkedQueue.h"
#include <cstddef> // Para funcionar o NULL
#include <new>

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
    if (!isEmpty()) {
        NodeType* tempPtr = front;
        ItemType item = front->info;
        front = front->next;
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

void LinkedQueue::print() const {

    NodeType* tmpFront = front;
    while (tmpFront != NULL) {

        SerialKiller sk = tmpFront->info;

        cout << " Serial Killer: " << sk.getName()
                << " Origin: " << sk.getCountry()
                << " Favorite Weapon: " << sk.getFavoriteWeapon()
                << " Priority: " << sk.getPriority() << std::endl;
        tmpFront = tmpFront->next;
    }

}

