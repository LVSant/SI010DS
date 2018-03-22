/* 
 * File:   serialkillershooter.h
 * Author: devl
 *
 * Created on March 19, 2018, 10:26 PM
 */

#include "serialkiller.h"

#ifndef SERIALKILLERSHOOTER_H
#define SERIALKILLERSHOOTER_H

class serialkillershooter : public SerialKiller {
public:
    serialkillershooter(string name, string country, string favoriteWeapon, int totalVictims);
    serialkillershooter(const serialkillershooter& orig);
private:

};

#endif /* SERIALKILLERSHOOTER_H */

