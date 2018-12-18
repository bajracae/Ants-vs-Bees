/********************************************************************* 
** Program Filename: Insect_GP.cpp
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Insect class
** Input: N/A
** Output: N/A
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Insect_GP.h"

using namespace std;

/********************************************************************* 
** Function: set_armor()
** Description: set armor
** Parameters: int armor
** Pre-Conditions: takes in armor
** Post-Conditions: sets the armor
*********************************************************************/
void Insect::set_armor(int armor){
    this->armor = armor;
}

/********************************************************************* 
** Function: get_armor()
** Description: get armor
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: returns armor
*********************************************************************/
int Insect::get_armor(){
    return armor;
}

/********************************************************************* 
** Function: set_damage()
** Description: set damage
** Parameters: int damage
** Pre-Conditions: takes in damage
** Post-Conditions: sets the damage
*********************************************************************/
void Insect::set_damage(int damage){
    this->damage = damage;
}

/********************************************************************* 
** Function: get_damage()
** Description: get damage
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: returns damage
*********************************************************************/
int Insect::get_damage(){
    return damage;
}

/********************************************************************* 
** Function: set_name()
** Description: set name
** Parameters: string name
** Pre-Conditions: takes in name
** Post-Conditions: sets the name
*********************************************************************/
void Insect::set_name(string name){
    this->name = name;
}

/********************************************************************* 
** Function: get_name()
** Description: get name
** Parameters: N/A
** Pre-Conditions: 
** Post-Conditions: returns name
*********************************************************************/
string Insect::get_name(){
    return name;
}