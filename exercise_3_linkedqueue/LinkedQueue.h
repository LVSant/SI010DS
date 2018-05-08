#include "serialkiller.h"
typedef SerialKiller ItemType;


struct NodeType {
    ItemType info;
    NodeType* next;
};

class LinkedQueue {
public:

    LinkedQueue();
    ~LinkedQueue();
    void enqueue(ItemType);
    ItemType dequeue();

    bool isEmpty() const;
    bool isFull() const;
    void print() const;

private:
    NodeType* front;
    NodeType* rear;
};