#include <stdio.h>
#include "game.h"

void print_board() {
    int i, j;

    printf("\n     a   b   c   d   e   f   g   h   i\n");

    for (i = 0; i < 9; i++) {
        printf("  %d ", i + 1);

        for (j = 0; j < 9; j++) {
            if (a_row == i && a_col == j)
                printf(" %c ", 'A');
            else if (b_row == i && b_col == j)
                printf(" %c ", 'B');
            else
                printf(" . ");

            if (j < 8) {
                if (wall_vertical[i][j])
                    printf("|");
                else
                    printf(" ");
            }
        }

        printf("\n");

        if (i < 8) {
            printf("    ");

            for (j = 0; j < 9; j++) {
                if (wall_horizontal[i][j])
                    printf("---");
                else
                    printf("   ");
                if (j < 8)
                    printf(" ");
            }

            printf("\n");
        }
    }

    printf("\n");
}
