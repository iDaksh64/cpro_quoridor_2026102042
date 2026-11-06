#ifndef GAME_H
#define GAME_H

extern int wall_horizontal[10][10], wall_vertical[10][10];
extern int a_row, a_col, b_row, b_col;
extern int walls_A, walls_B;

void print_board();
int move(int p, int row, int column);
int wall(int p, int row, int column, char orientation);

#endif
