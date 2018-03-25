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
 * File:   main.cpp
 * Author: devl
 *
 * Created on March 19, 2018, 10:09 PM
 */

#include <cstdlib>
#include <iostream>
#include "hash.h"
#include "serialkiller.h"
#include "serialkillershooter.h"
#include "serialkillerstabber.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Hash hash;
    hash.print(); //should be empty

    SerialKiller sk = SerialKiller("name1", "New Zealand", "knife", 52);
    hash.insertItem(sk);

    SerialKiller skshooter = serialkillershooter("name2-shooter", "USA", "AR15", 17);
    hash.insertItem(skshooter);

    SerialKiller skstabber = serialkillerstabber("name3-stabber", "France", "Couteau", 98);
    hash.insertItem(skstabber);

    SerialKiller skshooter2 = serialkillershooter("name4-shooter", "Spain", ".50 Magnum", 4);
    hash.insertItem(skshooter2);

    SerialKiller skstabber2 = serialkillerstabber("name5-stabber", "Marrocco", "Explosives", 132);
    hash.insertItem(skstabber2);

    hash.print();
    return 0;
}

