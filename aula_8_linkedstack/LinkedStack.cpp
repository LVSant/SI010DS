#include "LinkedStack.h"
#include <cstddef> // Para funcionar o NULL
#include <new>

LinkedStack::LinkedStack() {
    // Como eu não tenho nada para inicializar o atributo topPtr quando
    // a pilha está vazia, vou simplesmente atribuir NULL. Lembrando que
    // para usar NULL eu preciso do pacote cstddef.
    topPtr = NULL;
}

LinkedStack::~LinkedStack() {
    NodeType* tempPtr;
    while (topPtr != NULL) {
        tempPtr = topPtr;
        topPtr = topPtr -> next;
        delete tempPtr;
    }
}

/*
  Adicionar um novo item no topo da pilha. O nó que acabamos de criar
  deve apontar para quem estava no topo da pilha e o ponteiro topPtr
  deverá apontar para o novo nó.
 */
void LinkedStack::push(ItemType item) {
    if (not isFull()) {
        NodeType* location;
        location = new NodeType;
        location->info = item;
        location->next = topPtr;
        topPtr = location;
    }
}

/*
  Devolve o objeto que está no topo da pilha. Se a pilha estiver
  vazia, eu estou devolvendo o character zero, dado que eu sei que
  ItemType na verdade é um character.
 */
ItemType LinkedStack::pop() {
    if (isEmpty()) {
        return '0';
    } else {
        NodeType* tempPtr;
        tempPtr = topPtr;
        ItemType item = topPtr->info;
        topPtr = topPtr->next;
        delete tempPtr;
        return item;
    }
}

bool LinkedStack::isEmpty() const {
    return (topPtr == NULL);
}

/*
  Aqui eu simplesmente verifico se o usuário possui memória disponível.

 */
bool LinkedStack::isFull() const {
    NodeType* location;
    try {
        location = new NodeType;
        delete location;
        return false;
    } catch (std::bad_alloc exception) {
        return true;
    }
}