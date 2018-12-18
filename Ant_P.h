/********************************************************************* 
** Program Filename: Ant.h
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Ant .h file
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Insect_GP.h"
#ifndef ANT_P_H
#define ANT_P_H

using namespace std;

class Ant: public Insect{
    protected:
        int food_cost;
    public:
        void set_food_cost(int);
        int get_food_cost();
};

#endif