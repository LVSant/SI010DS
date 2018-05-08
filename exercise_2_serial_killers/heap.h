/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   heap.h
 * Author: devl
 *
 * Created on April 16, 2018, 7:33 PM
 */

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <string>
#include "serialkiller.h"

class Heap {
public:
    Heap(const Heap& orig);
    Heap(int MAX_ITEMS = 21);
    Heap(int MAX_ITEMS, SerialKiller** ARRAY_ACCOUNT, int NUM_IN_ARRAY_ACCOUNT);

    bool isEmpty() const;
    bool isFull() const;
    void print() const;

    void enqueue(SerialKiller* newItem);
    SerialKiller* dequeue();

    virtual ~Heap();
private:

    int MAX_ITEMS;
    int length;
    SerialKiller** cadastro;

    /*
      Operações de subida e descida vistas em sala de aula. O parâmetro
      index é o índice do elemento que será movido. Em descida, este
      elemento não pode passar do índice de bottom e em subida este
      elemento não pode passar do índice de root.
     */
    void descida(int index, int bottom);
    void subida(int root, int index);

};

#endif /* HEAP_H */

