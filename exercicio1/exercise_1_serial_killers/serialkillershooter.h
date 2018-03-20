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
    serialkillershooter();
    serialkillershooter(const serialkillershooter& orig);
    virtual ~serialkillershooter();
private:

};

#endif /* SERIALKILLERSHOOTER_H */

