/* 
 * File:   serialkillerstabber.h
 * Author: devl
 *
 * Created on March 19, 2018, 10:29 PM
 */

#include "serialkiller.h"

#ifndef SERIALKILLERSTABBER_H
#define SERIALKILLERSTABBER_H

class serialkillerstabber : public SerialKiller {
public:
    serialkillerstabber(string name, string country, string favoriteWeapon, int totalVictims);
    serialkillerstabber(const serialkillerstabber& orig);
private:

};

#endif /* SERIALKILLERSTABBER_H */

