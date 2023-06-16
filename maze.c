#include <stdio.h>
#include "maze.h"

int maze[5][5] = {
    {0, 1, 0, 0, 1},
    {0, 1, 1, 0, 0},
    {0, 0, 1, 1, 0},
    {1, 0, 0, 0, 0},
    {0, 1, 1, 1, 0}
};

void printMaze() {
    printf("Laberinto:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == playerRow && j == playerCol) {
                printf("X ");
            } else {
                printf("%d ", maze[i][j]);
            }
        }
        printf("\n");
    }
}

int isValidMove(int row, int col) {
    if (row >= 0 && row < 5 && col >= 0 && col < 5 && maze[row][col] == 0) {
        return 1;
    }
    return 0;
}
