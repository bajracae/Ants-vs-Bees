/********************************************************************* 
** Program Filename: Ant_Harvester.cpp
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Harvester class
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include "Ant_P.h"
#include "Ant_Harvester.h"

using namespace std;

/********************************************************************* 
** Function: Harvester()
** Description: Constructor
** Parameters: N/A
** Pre-Conditions: Constructs the Harvester 
** Post-Conditions: 
*********************************************************************/ 
Harvester::Harvester(){
    food_cost = 2;
    armor = 1;
    name = "HV";
}

/********************************************************************* 
** Function: attack_enemy()
** Description: N/A
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: N/A
*********************************************************************/ 
void Harvester::attack_enemy(){
    // Doesn't use
}