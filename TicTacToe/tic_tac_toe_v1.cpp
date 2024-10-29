// version 1: output UI not the best

#pragma once
#include <iostream>
using namespace std;

/*
TODO:

Check for Win/Draw: Create functions to check if a player has won or if the game is a draw.
Game Loop: Implement the main game loop to alternate turns between players.

*/

void show_board();

char game_board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
char current_player = 'X';

int main()
{
    int x_pos = NULL, y_pos = NULL;

    show_board();
    cout << "Player " << current_player << " enter your position" << endl;

    return NULL;
}

void show_board()
{
    cout << "   0 1 2 \n";
    for(int i = 0; i < 3; ++i)
    {
        cout << i << " ";
        for(int j = 0; j < 3; ++j)
        {
            cout << game_board[i][j];
        }

        cout << endl;
    }

    cout << endl;

    return;
}