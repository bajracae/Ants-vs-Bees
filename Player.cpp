/********************************************************************* 
** Program Filename: Player.cpp
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Player class
** Input: N/A
** Output: Stores all codes
*********************************************************************/ 

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "Player.h"
#include "Insect_GP.h"
#include "Ant_P.h"
#include "Bee_P.h"
#include "Ant_Fire.h"
#include "Ant_Harvester.h"
#include "Ant_Long_Thrower.h"
#include "Ant_Ninja.h"
#include "Ant_Short_Thrower.h"
#include "Ant_Thrower.h"
#include "Ant_Wall.h"

using namespace std;

/********************************************************************* 
** Function: Player()
** Description: Constructor
** Parameters: N/A
** Pre-Conditions: Constructs the board 
** Post-Conditions: 
*********************************************************************/
Player::Player(){
    
}

/********************************************************************* 
** Function: Player(const Player & copy)
** Description: copy Constructor
** Parameters: const Player & copy
** Pre-Conditions: copy the board 
** Post-Conditions: 
*********************************************************************/
Player::Player(const Player & copy){
    board = new game[10];
    for(int i = 0; i < 10; i++){
        board[i].ants = copy.board[i].ants;
    }
    for(int j = 0; j < 10; j++){
        board[j].bees = copy.board[j].bees;
    }
    for(int k = 0; k < 10; k++){
        board[k].bodyguard = copy.board[k].bodyguard;
    }
}

/********************************************************************* 
** Function: Player & operator=(const Player & copy
** Description: AOO
** Parameters: N/A
** Pre-Conditions: Over loads = 
** Post-Conditions: 
*********************************************************************/
Player & Player::operator=(const Player & copy){
    for(int i = 0; i < 10; i++){
        if(board[i].ants != NULL){ delete [] board[i].ants; }
    }
    for(int j = 0; j < 10; j++){
        if(board[j].bees.size() != 0){
            for(int p = 0; p < board[j].bees.size(); p++){ board[j].bees.clear(); }
        }
    }
    for(int k = 0; k < 10; k++){
        if(board[k].bodyguard != NULL){ delete [] board[k].bodyguard; }
    }
    if(board != NULL){ delete [] board; }
    board = new game[10];
    for(int i = 0; i < 10; i++){ board[i].ants = copy.board[i].ants; }
    for(int j = 0; j < 10; j++){ board[j].bees = copy.board[j].bees; }
    for(int k = 0; k < 10; k++){ board[k].bodyguard = copy.board[k].bodyguard; }
}
/********************************************************************* 
** Function: ~Player()
** Description: deconstructor
** Parameters: N/A
** Pre-Conditions: Destructs the board 
** Post-Conditions: 
*********************************************************************/ 
Player::~Player(){
    for(int i = 0; i < 10; i++){
        if(board[i].ants != NULL){
            delete [] board[i].ants;
        }
    }
    for(int j = 0; j < 10; j++){
        if(board[j].bees.size() != 0){
            for(int p = 0; p < board[j].bees.size(); p++){
                board[j].bees.clear();
            }
        }
    }
    for(int k = 0; k < 10; k++){
        if(board[k].bodyguard != NULL){
            delete [] board[k].bodyguard;
        }
    }
    delete [] board;
}

/********************************************************************* 
** Function: set_food_bank()
** Description: set food_bank
** Parameters: int food_bank
** Pre-Conditions: takes in food_bank
** Post-Conditions: sets the food_bank
*********************************************************************/
void Player::set_food_bank(int food_bank){
    this->food_bank = food_bank;
}

/********************************************************************* 
** Function: get_food_bank()
** Description: get food_bank
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: returns food_bank
*********************************************************************/
int Player::get_food_bank(){
    return food_bank;
}

void Player::set_board(game * board){
    this->board = board;
}

/********************************************************************* 
** Function: get_board()
** Description: get board
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: returns board
*********************************************************************/
game * Player::get_board(){
    return board;
}

/********************************************************************* 
** Function: init_gameboard()
** Description: builds board
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: returns board
*********************************************************************/
game * Player::init_gameboard(){
    game * board = new game[10];
    return board;
}

/********************************************************************* 
** Function: print_mainpart_gameboard()
** Description: prints main board
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: prints main board
*********************************************************************/
void Player::print_mainpart_gameboard(){
    for(int i = 0; i < 10; i++){
        if(board[i].ants != NULL)
            cout << "| " << board[i].ants->get_name() << "  Armor: " << board[i].ants->get_armor() << " |";
        else cout << "| " << "            " << " |" ;
    }
    cout << endl;
    for(int j = 0; j < 10; j++){
        if(board[j].bees.size() != 0){
            cout << "| " << board[j].bees.at(0).get_name() << "  " << board[j].num_bees << "      " << " |";
        }
        else cout << "| " << "            " << " |" ;
    }
    cout << endl;
    for(int l = 0; l < 10 ; l++){
        if(board[l].bodyguard != NULL)
            cout << "| " << board[l].bodyguard->get_name() << "  Armor: " << board[l].bodyguard->get_armor() << " |";
        else cout << "| " << "            " << " |" ;
    }
}

/********************************************************************* 
** Function: print_gameboard()
** Description: prints board
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: prints board
*********************************************************************/
void Player::print_gameboard(){
    cout << endl;
    cout << "[ ANT NEST ]                                                                                                                                        [ BEE HIVE ]" << endl;
    for(int c = 0; c < 10; c++){ cout << "  " << "------------" << "  "; }
    cout << endl;
    print_mainpart_gameboard();
    cout << endl;
    for(int c = 0; c < 10; c++){ cout << "  " << "------------" << "  " ; }
    cout << endl;
    cout << "Food left in the food bank: " << food_bank << " units of food" << endl;
}

/********************************************************************* 
** Function: to_int()
** Description: turn string to int
** Parameters: string num
** Pre-Conditions: takes in a string
** Post-Conditions: returns an int
*********************************************************************/
int Player::to_int(string num){
	int res = 0, i = 0;
	for(i; i < num.length(); i++){
		res += (num[i] - 48) * pow(10,num.length()-i-1);
	}
	return res;
}

/********************************************************************* 
** Function: generate_bees()
** Description: generates bees
** Parameters: Bee bee
** Pre-Conditions: takes in a bee object
** Post-Conditions: push_back it into the vector
*********************************************************************/
void Player::generate_bees(Bee bee){
    board[9].bees.push_back(bee);
}

/********************************************************************* 
** Function: move_bees()
** Description: moves bees
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: moves bees to the left
*********************************************************************/
void Player::move_bees(){
    for(int i = 1; i < 10; i++){
        if(((board[i].ants == NULL || board[i].ants->get_name() == "NJ") && board[i].bodyguard == NULL)  && board[i].bees.size() != 0){
            board[i-1].bees = board[i].bees;
        }
        if(board[i-1].ants != NULL || board[i-1].bodyguard != NULL){
            board[i].num_bees++;
        }
    }
}

/********************************************************************* 
** Function: print_ant()
** Description: prints ants
** Parameters: N/A
** Pre-Conditions: N/A
** Post-Conditions: prints ants
*********************************************************************/
void Player::print_ant(){
    cout << endl;
    cout << "[ LIST OF AVALIABLE ANTS ]" << endl;
    cout << endl;
    cout << "[1] Harvester, Cost: 2, Armor: 1" << endl;
    cout << "[2] Thrower, Cost: 4, Armor: 1" << endl;
    cout << "[3] Fire, Cost: 4, Armor: 1" << endl;
    cout << "[4] Long Thrower, Cost: 3, Armor: 1" << endl;
    cout << "[5] Short Thrower, Cost: 3, Armor: 1" << endl;
    cout << "[6] Wall, Cost: 4, Armor: 4" << endl;
    cout << "[7] Ninja, Cost: 6, Armor: 1" << endl;
    cout << "[8] Bodyguard, Cost: 4, Armor: 2" << endl;
}

/********************************************************************* 
** Function: valid_ant()
** Description: checks if input for ant is true
** Parameters: string ant
** Pre-Conditions: Checks if input is valid
** Post-Conditions: returns true or false
*********************************************************************/
bool Player::valid_ant(string ant){
    if(ant == "1"){ return true; }
    if(ant == "2"){ return true; }
    if(ant == "3"){ return true; }
    if(ant == "4"){ return true; }
    if(ant == "5"){ return true; }
    if(ant == "6"){ return true; }
    if(ant == "7"){ return true; }
    if(ant == "8"){ return true; }
    return false;
}

/********************************************************************* 
** Function: get_ant()
** Description: returns user input int form
** Parameters: N/A
** Pre-Conditions: Asks the user for input
** Post-Conditions: returns the user input
*********************************************************************/
int Player::get_ant(){
    string r = "";
    do{
        cout << "Choose an ant: ";
        getline(cin, r);
    } while(valid_ant(r) == false);
    int a = to_int(r);
    return a;
}

/********************************************************************* 
** Function: not_occupied_ant_space()
** Description: checks if a space is occupied
** Parameters: string position
** Pre-Conditions: checks if a space is occupied
** Post-Conditions: returns true or false
*********************************************************************/
bool Player::not_occupied_ant_space(string position){
    if(board[to_int(position)-1].ants != NULL && board[to_int(position)-1].bodyguard == NULL){
        return true;
    }
    if(board[to_int(position)-1].ants == NULL){
        return true;
    }
    return false;
}

/********************************************************************* 
** Function: valid_position()
** Description: checks if user input is valid
** Parameters: string position
** Pre-Conditions: checks if position is valid
** Post-Conditions: returns true or false
*********************************************************************/
bool Player::valid_position(string position){
    if(position == "1"){ return true; }
    if(position == "2"){ return true; }
    if(position == "3"){ return true; }
    if(position == "4"){ return true; }
    if(position == "5"){ return true; }
    if(position == "6"){ return true; }
    if(position == "7"){ return true; }
    if(position == "8"){ return true; }
    if(position == "9"){ return true; }
    if(position == "10"){ return true; }
    return false;
}

/********************************************************************* 
** Function: get_position()
** Description: returns user input int form
** Parameters: N/A
** Pre-Conditions: Asks the user for input
** Post-Conditions: returns the user input
*********************************************************************/
int Player::get_position(){
    string r = "";
    do{
        cout << "Position to place the ant: ";
        getline(cin, r);
    } while(valid_position(r) == false || !not_occupied_ant_space(r));
    int a = to_int(r);
    return a;
}

/********************************************************************* 
** Function: place_ant()
** Description: returns user input int form
** Parameters: int ant, int position
** Pre-Conditions: takes int ant and position
** Post-Conditions: places the ant on the board
*********************************************************************/
void Player::place_ant(int ant, int position){
    if(food_bank > 0){
        if(ant > 0 && ant < 8){
            if(ant == 1){ board[position-1].ants = new Harvester(); }
            if(ant == 2){ board[position-1].ants = new Thrower(); }
            if(ant == 3){ board[position-1].ants = new Fire(); }
            if(ant == 4){ board[position-1].ants = new LongThrower(); }
            if(ant == 5){ board[position-1].ants = new ShortThrower(); }
            if(ant == 6){ board[position-1].ants = new Wall(); }
            if(ant == 7){ board[position-1].ants = new Ninja(); }
            food_bank = food_bank - board[position-1].ants->get_food_cost();
        }
        if(ant == 8){ 
            board[position-1].bodyguard = new Bodyguard(); 
            food_bank = food_bank - board[position-1].bodyguard->get_food_cost();
        }  
    }  
} 

/********************************************************************* 
** Function: each_move()
** Description: runs user turn functions
** Parameters: N?A
** Pre-Conditions: N/A
** Post-Conditions: places the ant on the board
*********************************************************************/
void Player::each_move(){
    int ant = get_ant();
    int position = get_position();
    place_ant(ant, position);
}

/********************************************************************* 
** Function: harvester_attack()
** Description: Adds one to food if harvester is present
** Parameters: N?A
** Pre-Conditions: N/A
** Post-Conditions: Adds one to food if harvester is present
*********************************************************************/
void Player::harvester_attack(){
    for(int i = 0; i < 10; i++){
        if(board[i].ants != NULL && board[i].ants->get_name() == "HV"){
            food_bank+=1;
        }
    }
}

/********************************************************************* 
** Function: ants_win()
** Description: checks if ants won
** Parameters: string position
** Pre-Conditions: checks if ants won
** Post-Conditions: returns true or false
*********************************************************************/
bool Player::ants_win(){
    int bee_count = 0;
    for(int i = 0; i < 10; i++){
        if(board[i].bees.size() != 0){
            bee_count++;
        }
    }
    if(bee_count == 0){
        return true;
    }
    return false;
}

/********************************************************************* 
** Function: bees_win()
** Description: checks if bees won
** Parameters: string position
** Pre-Conditions: checks if bees won
** Post-Conditions: returns true or false
*********************************************************************/
bool Player::bees_win(){
    if(board[0].bees.empty() == false){
        return true;
    }
    return false;
}

/********************************************************************* 
** Function: bee_attack()
** Description: bees attack ants
** Parameters: N/A
** Pre-Conditions: bees attack 
** Post-Conditions: attack ants
*********************************************************************/
void Player::bee_attack(){
    for(int i = 0; i < 10; i++){
        if(board[i].bees.size() != 0) {
            if(board[i].bodyguard != NULL){
                board[i].bodyguard->set_armor(board[i].bodyguard->get_armor() - 1) ;
            }
        }
        if(board[i].bees.size() != 0){
            if(board[i].ants != NULL){
                board[i].ants->set_armor(board[i].ants->get_armor() - 1);
            }
        }
    }
}

/********************************************************************* 
** Function: remove_dead_ants()
** Description: removes dead ants
** Parameters: N/A
** Pre-Conditions: checks for dead ants
** Post-Conditions: deletes them
*********************************************************************/
void Player::remove_dead_ants(){
    for(int i = 0; i < 10; i++){
        if(board[i].ants != NULL){
            if(board[i].ants->get_armor() == 0){
                delete [] board[i].ants;
                board[i].ants = NULL;
            }
        }
        if(board[i].bodyguard != NULL){
            if(board[i].bodyguard->get_armor() == 0){
                delete [] board[i].bodyguard;
                board[i].bodyguard = NULL;
            }
        }
    }
}

/********************************************************************* 
** Function: run_game()
** Description: runs the game
** Parameters: Bee bee
** Pre-Conditions: takes in bee object
** Post-Conditions: runs game
*********************************************************************/
void Player::run_game(Bee bee){
    print_ant();
    cout << endl;
    each_move();
    generate_bees(bee);
    print_gameboard();
    bee_attack();
    move_bees();
    harvester_attack();
    remove_dead_ants();
}

/********************************************************************* 
** Function: run_attack()
** Description: runs all ant attacks
** Parameters: N/A
** Pre-Conditions: runs all ant attacks
** Post-Conditions: deletes them
*********************************************************************/
void Player::run_attack(){
    // for(int j = 0; j < 10; j++){
    //     Bee** bees = new *Bee[10];
    //     for(int i -0; i < 10; i++){
    //         bees[i] = baord[i].bees;
    //     }
    //     int* num_bees = new int[10];
    //     for(int i = 10; i < 10; i++){
    //         num_bees[i] = board[i].num_bees;
    //     }
    //     if(board[j].ants != NULL)
    //     board[j].ants->attack_enemy(bees, num_bees, j)
    // }
}



