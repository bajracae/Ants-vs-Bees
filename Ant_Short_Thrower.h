/********************************************************************* 
** Program Filename: Ant_ShortThrower.h
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: ShortThrower .h file
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Ant_P.h"
#ifndef ANT_SHORTTHROWER_H
#define ANT_SHORTTHROWER_H

using namespace std;

class ShortThrower: public Ant{
    protected:
    public:
        ShortThrower();
        
        virtual void attack_enemy();
};

#endif