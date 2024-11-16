#pragma once
#include <iostream>
#define BOARD_LENGTH 3
#define BOARD_WIDTH 3

using namespace std;


void show_board(char game_board[BOARD_LENGTH][BOARD_WIDTH])
{
    for(int board_row_index = 0; board_row_index < BOARD_LENGTH;)
    {
        for(int board_column_index = 0; board_column_index < BOARD_WIDTH ; ++board_column_index){
            cout << game_board[board_column_index][board_row_index];
        }
    }
}

bool win_condition_check(char game_board[BOARD_LENGTH][BOARD_WIDTH]) // add the != ' ' to each check section
{
    // a for loop for checking the lines
    for(int linex_index = 0; linex_index < BOARD_LENGTH; ++linex_index)
    {
        if(game_board[linex_index][0] == game_board[linex_index][1] == game_board[linex_index][2]) 
        return true;
    }

    // a for loop for checking the rows
    for(int row_index = 0; row_index < BOARD_WIDTH; ++row_index) 
    {
        if(game_board[0][row_index] == game_board[1][row_index] == game_board[2][row_index]) 
        return true;
    }

    // a for loop for checking the diagonals
    if((game_board[0][0] == game_board[1][1] == game_board[2][2]) || (game_board[0][2] == game_board[1][1] == game_board[2][0]))
    {
        return true;
    } 

    return false; 
}

void board_moving(char game_board[BOARD_LENGTH][BOARD_WIDTH], int row_to_input, int column_to_input, char player_to_move)
{
    // check where to move to
}

void play_game()
{
    char game_board[BOARD_LENGTH][BOARD_WIDTH] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char current_player = 'X';

    for(int game_move_count = 1; game_move_count <= 9; ++game_move_count) 
    {
        // show the board before the move is made 

        // what here ?
    }
    
    // what here ?
}

int main()
{
    play_game();// call game function
    return NULL;
}
