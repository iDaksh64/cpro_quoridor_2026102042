#include <stdio.h>
#include <string.h>
#include "game.h"

int wall_horizontal[10][10], wall_vertical[10][10];
int a_row, a_col, b_row, b_col;
int walls_A = 10, walls_B = 10;

int main() {
    printf("Start Game!\n");
    printf("Write move + notation OR write wall + notation + orientation(H/V)\n");
    a_row = 0;  a_col = 4; b_row = 8;  b_col = 4;
    
    char input[15], position[5], orientation[5];
    int moves = 0; char player;
    int _continue = 1;
    int row, column;
    
    while (_continue == 1) {
        print_board();
        if (moves % 2 == 0)
            player = 'A';
        else
            player = 'B';
        printf("Player %c:", player);
        
        scanf("%s", input);
        
        if (strcmp(input, "move") == 0) {
            scanf("%s", position);
            if (strlen(position) != 2 || position[1] < '1' || position[1] > '9' || position[0] < 'a' || position[0] > 'i') {
                printf("Invalid Input\n");
            }
            else {
                column = position[0] - 'a';
                row = position[1] - '1';

                if (move(moves % 2, row, column) == 1) {
                    moves++;
                }
            }
        }

        else if (strcmp(input, "wall") == 0) {
            scanf("%s", position);
            scanf("%s", orientation);
            if (strlen(position) != 2 || position[1] < '1' || position[1] > '8') {
                printf("Invalid Input\n");
            }
            else {
                column = position[0] - 'a';
                row = position[1] - '1';

                if (wall(moves % 2, row, column, orientation[0]) == 1) {
                    moves++;
                }
            }
        }

        else {
            printf("Invalid Input\n");
        }
    }

    return 0;
}
