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
 * File:   serialkiller.h
 * Author: devl
 *
 * Created on April 12, 2018, 10:12 PM
 */

#include <iostream>
#include <string>

#ifndef SERIALKILLER_H
#define SERIALKILLER_H

using namespace std;

class SerialKiller {
private:
    string name;
    string country;
    string favoriteWeapon;
    int totalVictims;

public:

    SerialKiller(string name, string country, string favoriteWeapon, int totalVictims);
    SerialKiller();

    int getPriority() const;

    string getCountry() const;
    string getFavoriteWeapon() const;
    string getName() const;
    int getTotalVictims() const;

};

#endif /* SERIALKILLER_H */