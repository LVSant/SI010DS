/*
 * The MIT License
 *
 * Copyright 2018 devl.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
/* 
 * File:   hash.cpp
 * Author: devl
 * 
 * Created on March 21, 2018, 10:20 PM
 */

#include <iostream>
#include <cstddef> 
#include "serialkiller.h"
#include "hash.h"

Hash::Hash(int size) {
    MAX_ITENS = size;
    serialkillersDataset = new SerialKiller*[size];

    //  É sempre interessante garantir que os valores serão inicializados com NULL.
    for (int i = 0; i < size; i++) {
        serialkillersDataset[i] = NULL;
    }
    length = 0;
}

int Hash::getLength() const {
    return length;
}

void Hash::print() const {
    std::cout << "INI" << std::endl;
    for (int i = 0; i < MAX_ITENS; i++) {
        SerialKiller* sk = serialkillersDataset[i];
        if (sk != NULL) {
            std::cout << i << ":" << sk->GetName() << ", " << sk->GetCountry() << ", Victims: " << sk->GetTotalVictims() << std::endl;
        }
    }
    std::cout << "FIM" << std::endl;
}

//this is a poor solution, and was only implemented because we cant use bucket yet

void Hash::insertItem(SerialKiller serialkiller) {
    int location = serialkiller.getHash(MAX_ITENS);
    while (serialkillersDataset[location] != NULL && location <= MAX_ITENS) { //while position isnt empty and location isn't bigger than MAX_ITENS
        location++; //make location go further searching for an empty place
    }
    serialkillersDataset[location] = new SerialKiller(serialkiller);
    length++;
}

void Hash::deleteItem(SerialKiller serialkiller) {
    int location = serialkiller.getHash(MAX_ITENS);
    delete serialkillersDataset[location]; //destroys the object instance
    serialkillersDataset[location] = NULL; //set null to the location that was the object
    length--; 
}

void Hash::retrieveItem(SerialKiller& serialKiller, bool& found) {
    int location = serialKiller.getHash(MAX_ITENS); //get the location of the item in our dataset
    found = serialkillersDataset[location] != NULL; //set `found` as the verification of the location 
    if (found) {
        serialKiller = *serialkillersDataset[location]; //if found, then set the pointer received equals the memory address of the dataset
    }
}

