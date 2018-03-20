#include <iostream>
#include <string>
#include "serialkiller.h"

SerialKiller::SerialKiller(string name, string country, string favoriteWeapon, int totalVictims) :
name(name), country(country), favoriteWeapon(favoriteWeapon), totalVictims(totalVictims) {
};

string SerialKiller::GetCountry() const {
    return country;
}

string SerialKiller::GetName() const {
    return name;
}

string SerialKiller::GetFavoriteWeapon() const {
    return favoriteWeapon;
}

int SerialKiller::GetTotalVictims() const {
    return totalVictims;
}

int SerialKiller::getHash(int max_number) const {
    //TODO 
}



