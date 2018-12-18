/********************************************************************* 
** Program Filename: Player.h
** Author: Aeijan Bajracharya
** Date: 5/30/18
** Description: Player .h file
** Input: N/A
** Output: N/A
*********************************************************************/ 

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include <vector>
#include "Ant_P.h"
#include "Bee_P.h"
#include "Ant_Bodyguard.h"

using namespace std;

struct game{
    Ant * ants;
    Bodyguard * bodyguard;
    vector<Bee> bees;
    int num_bees;
};

class Player{
    protected:
        int food_bank;
        game * board;

    public:
        Player();
        Player(const Player &);
        Player & operator=(const Player &);
        ~Player();
        void set_food_bank(int);
        int get_food_bank();
        void set_board(game *);
        game * get_board();
    
                
        game * init_gameboard();
        void print_mainpart_gameboard();
        void print_gameboard();
                
        void generate_bees( Bee);
        void move_bees();

        int to_int(string);

        void print_ant();
        bool valid_ant(string);
        int get_ant();
                
        bool not_occupied_ant_space(string);
        int get_position();
        bool valid_position(string);
        
        void place_ant(int, int);

        void each_move();
        
        void harvester_attack();
        
        bool ants_win();
        bool bees_win();
        
        void bee_attack();
        void remove_dead_ants();\
        
        void run_game(Bee);
        void run_attack();
};

#endif