/********************************************************************* 
** Program Filename: Ant_P.cpp
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Ant class
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Insect_GP.h"
#include "Ant_P.h"

using namespace std;

/********************************************************************* 
** Function: set_food_cost()
** Description: set food_cost
** Parameters: int food_cost
** Pre-Conditions: takes in food_cost
** Post-Conditions: sets the food_cost
*********************************************************************/
void Ant::set_food_cost(int food_cost){
    this->food_cost = food_cost;
}

/********************************************************************* 
** Function: get_food_cost()
** Description: get food_cost
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: returns food_cost
*********************************************************************/
int Ant::get_food_cost(){
    return food_cost;
}