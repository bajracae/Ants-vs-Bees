/********************************************************************* 
** Program Filename: Ant_Harvester.h
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Harvester .h file
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Ant_P.h"
#ifndef ANT_HARVESTER_H
#define ANT_HARVESTER_H

using namespace std;

class Harvester: public Ant{
    protected:
    public:
        Harvester();
        virtual void attack_enemy();
};

#endif