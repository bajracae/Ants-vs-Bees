/********************************************************************* 
** Program Filename: Main.cpp
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Main File
** Input: N/A
    ** Output: Runs all code
*********************************************************************/ 

#include <iostream>
#include <string>
#include "Player.h"
#include "Bee_P.h"

using namespace std;

int main(){
    cout << endl;
    cout << "[ WELCOME TO ANTLIEN VS BEENATOR ]" << endl;
    Player player;
    Bee bee;
    player.set_food_bank(50);
    player.set_board(player.init_gameboard());
    player.print_gameboard();    
    do{
        player.run_game(bee);
    } while(player.bees_win() != true && player.ants_win() != true);
    player.print_gameboard();
    if(player.bees_win() == true){ cout << "BEES WIN!" << endl; }
    if(player.ants_win() == true){ cout << "ANTS WIN!" << endl; }
}
