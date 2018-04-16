/* 
 * File:   heap.cpp
 * Author: devl
 * 
 * Created on April 16, 2018, 9:33 PM
 */


#include <iostream>
#include <cstddef> 
#include <stdlib.h> 
#include "serialkiller.h"
#include "heap.h"

Heap::Heap(int MAX_ITEMS, SerialKiller* ARRAY_ACCOUNT, int NUM_IN_ARRAY_ACCOUNT) {
    this->MAX_ITEMS = MAX_ITEMS;
    this->length = NUM_IN_ARRAY_ACCOUNT;

    for (int i = 0; i < length; i++) {
        cadastro[i] = &ARRAY_ACCOUNT[i];
    }

    for (int i = (length / 2) - 1; i >= 0; i--) {
        descida(i, 0);
    }

}

Heap::Heap(int MAX_ITEMS) {
    this->MAX_ITEMS = MAX_ITEMS;
    this->length = 0;
    cadastro = new SerialKiller*[MAX_ITEMS];
}

SerialKiller* Heap::dequeue() {
    if (!isEmpty()) {
        SerialKiller* account = cadastro[0];
        length--;
        cadastro[0] = cadastro[length];
        descida(0, 0);
        return account;
    } else {
        return NULL;
    }
}

void Heap::enqueue(SerialKiller* newItem) {

    if (!isFull()) {
        cadastro[length] = newItem;
        subida(0, length);
        length++;
    }
}

void Heap::subida(int root, int index) {
    // se for a posicao zero nao precisa subir
    if (index == 0) {
        return;
    }

    int noPai = ((index - 1) / 2);
    //     verifica se a posicao INDEX do vetor é maior que a posicao do pai
    //     caso seja maior faz a troca dos valores 
    if (cadastro[index]->getPriority() > cadastro[noPai]->getPriority()) {
        SerialKiller* account = cadastro[index];
        cadastro[index] = cadastro[noPai];
        cadastro[noPai] = account;
        subida(0, noPai);
    }
}

void Heap::descida(int index, int bottom) {

    int maior = index;
    int leftChild = (2 * index) + 1;
    int rightChild = (2 * index) + 2;

    if (leftChild <= length && cadastro[leftChild]->getPriority() > cadastro[index]->getPriority()) {
        maior = leftChild;
    } else if (rightChild <= length && cadastro[rightChild]->getPriority() > cadastro[maior]->getPriority()) {
        maior = rightChild;
    }

    if (maior != index) {
        SerialKiller * account = cadastro[index];
        cadastro[index] = cadastro[maior];
        cadastro[maior] = account;
        descida(index, 0);
    }
}

bool Heap::isEmpty() const {
    return length == 0;
}

bool Heap::isFull() const {
    return length == MAX_ITEMS;
}

Heap::~Heap() {
    delete []cadastro;
}

void Heap::print() const {
    for (int i = 0; i < length; i++) {
        std::cout
                << " Serial Killer: " << cadastro[i]->getName()
                << " Origin: " << cadastro[i]->getCountry()
                << " Favorite Weapon: " << cadastro[i]->getFavoriteWeapon()
                << " Priority: " << cadastro[i]->getPriority() << std::endl;
    }
}