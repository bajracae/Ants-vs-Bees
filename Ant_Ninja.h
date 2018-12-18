/********************************************************************* 
** Program Filename: Ant_Ninja.h
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Ninja .h file
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Ant_P.h"
#ifndef ANT_NINJA_H
#define ANT_NINJA_H

using namespace std;

class Ninja: public Ant{
    protected:
    public:
        Ninja();
        virtual void attack_enemy();
};

#endif