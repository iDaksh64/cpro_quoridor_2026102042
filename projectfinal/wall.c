#include <stdio.h>
#include "game.h"

int wall(int p, int row, int column, char orientation) {
    int flag = 0, correct = 0;

    if ((p == 0 && walls_A == 0) || (p == 1 && walls_B == 0)) {
        printf("Invalid Input\n");
        return 0;
    }

    if (row < 0 || row > 7 || column < 0 || column > 7) {
        flag = 1;
    }

    if (flag == 1) {
        printf("Invalid Input\n");
    }
    else {
        if (orientation == 'H') {
            wall_horizontal[row][column] = 1;
        }
        else {
            wall_vertical[row][column] = 1;
        }
        correct = 1;
    }

    return correct;
}
