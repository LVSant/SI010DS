/* 
 * File:   serialkiller.h
 * Author: devl
 *
 * Created on March 19, 2018, 10:12 PM
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

    int getHash(int max_number) const;

    string GetCountry() const;
    string GetFavoriteWeapon() const;
    string GetName() const;
    int GetTotalVictims() const;

};

#endif /* SERIALKILLER_H */