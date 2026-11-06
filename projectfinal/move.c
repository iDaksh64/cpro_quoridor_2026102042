#include <stdio.h>
#include "game.h"

int move(int p, int row, int column) {
    int flag = 0;
    if (row < 0 || row > 8 || column < 0 || column > 8) {
        flag = 1;
    }
    
    if (flag == 1) {
        printf("Invalid Input\n");
        return 0;
    }

    int taken = 0;
    if (p == 0 && b_row == row && b_col == column) {
        taken = 1;
    }
    if (p == 1 && a_row == row && a_col == column) {
        taken = 1;
    }
    if (taken == 1) {
        printf("Position already taken\n");
        return 0;
    }
    
    int correct = 0;
    
    if (p == 0) {
        a_row = row;
        a_col = column;
    }
    else {
        b_row = row;
        b_col = column;
    }
    correct = 1;
    return correct;
}
