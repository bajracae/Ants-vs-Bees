/********************************************************************* 
** Program Filename: Ant_Thrower.h
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Thrower .h file
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Ant_P.h"
#ifndef ANT_THROWER_H
#define ANT_THROWER_H

using namespace std;

class Thrower: public Ant{
    protected:
    public:
        Thrower();
        virtual void attack_enemy();
};

#endif