/********************************************************************* 
** Program Filename: Insect_GP.h
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Insect .h file
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include <string>
#ifndef INSECT_H
#define INSECT_H

using namespace std;

class Insect{
    protected:
        int armor;
        int damage;  
        string name;      
    public:
        void set_armor(int armor);
        int get_armor();
        
        void set_damage(int damage);
        int get_damage();
        
        void set_name(string);
        string get_name();
        
        virtual void attack_enemy() = 0;
};

#endif