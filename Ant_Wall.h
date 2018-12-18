/********************************************************************* 
** Program Filename: Ant_Wall.h
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Wall .h file
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Ant_P.h"
#ifndef ANT_WALL_H
#define ANT_WALL_H

using namespace std;

class Wall: public Ant{
    protected:
    public:
        Wall();
        virtual void attack_enemy();
};

#endif