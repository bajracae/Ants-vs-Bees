/********************************************************************* 
** Program Filename: Bee.h
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Bee .h file
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Insect_GP.h"
#include "Player.h"
#ifndef Bee_P_H
#define Bee_P_H

using namespace std;

class Bee: public Insect{
    public:
        Bee();
        virtual void attack_enemy();
};

#endif