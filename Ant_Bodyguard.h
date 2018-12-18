/********************************************************************* 
** Program Filename: Ant_Bodyguard.h
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Bodyguard .h file
** Input: N/A
** Output: N/A
*********************************************************************/ 
 
#include <iostream>
#include <string>
#include "Insect_GP.h"
#include "Ant_P.h"
#ifndef ANT_BODYGUARD_H
#define ANT_BODYGUARD_H

using namespace std;

class Bodyguard: public Ant{
    public:
        Bodyguard();
        virtual void attack_enemy();
};

#endif