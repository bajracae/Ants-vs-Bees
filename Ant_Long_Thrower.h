/********************************************************************* 
** Program Filename: Ant_LongThrower.h
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: LongThrower.h file
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Ant_P.h"
#ifndef ANT_LONGTHROWER_H
#define ANT_LONGTHROWER_H

using namespace std;

class LongThrower: public Ant{
    protected:
    public:
        LongThrower();
        virtual void attack_enemy();
};

#endif