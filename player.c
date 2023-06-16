#include <stdio.h>
#include "player.h"
#include "maze.h"

int playerRow = 0;
int playerCol = 0;
int moveCount = 0;

void movePlayer(char direction) {
    int newRow = playerRow;
    int newCol = playerCol;

    if (direction == 'w') {
        newRow--;
    } else if (direction == 's') {
        newRow++;
    } else if (direction == 'a') {
        newCol--;
    } else if (direction == 'd') {
        newCol++;
    }

    if (isValidMove(newRow, newCol)) {
        playerRow = newRow;
        playerCol = newCol;
        moveCount++;
        printf("\nMovimiento válido. Nueva posición: (%d, %d)\n", playerRow, playerCol);
    } else {
        printf("\nMovimiento inválido. No puedes ir en esa dirección.\n");
    }
}

int hasWon() {
    if (playerRow == 4 && playerCol == 4) {
        return 1;
    }
    return 0;
}

int getMoveCount() {
    return moveCount;
}
