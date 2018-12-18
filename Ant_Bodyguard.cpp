/********************************************************************* 
** Program Filename: Ant_Bodyguard.cpp
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Bodyguard class
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include "Insect_GP.h"
#include "Ant_P.h"
#include "Ant_Bodyguard.h"

using namespace std;

/********************************************************************* 
** Function: Bodyguard()
** Description: Constructor
** Parameters: N/A
** Pre-Conditions: Constructs the Bodyguard 
** Post-Conditions: 
*********************************************************************/ 
Bodyguard::Bodyguard(){
    food_cost = 4;
    armor = 2;
    name = "BG";
}

/********************************************************************* 
** Function: attack_enemy()
** Description: N/A
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/ 
void Bodyguard::attack_enemy(){
    // Doesn't use
}