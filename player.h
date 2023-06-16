#ifndef PLAYER_H
#define PLAYER_H

 int playerRow;
 int playerCol;
 int moveCount;

void movePlayer(char direction);
int hasWon();
int getMoveCount();

#endif
