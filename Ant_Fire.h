/********************************************************************* 
** Program Filename: Ant_Fire.h
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Fire .h file
** Input: N/A
** Output: N/A
*********************************************************************/ 
 
#include <iostream>
#include <string>
#ifndef ANT_FIRE_H
#define ANT_FIRE_H

using namespace std;

class Fire: public Ant{
    protected:
    public:
        Fire();
        virtual void attack_enemy();
};

#endif