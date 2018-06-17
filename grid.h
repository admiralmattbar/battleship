#ifndef grid_h
#define grid_h

#include <stdio.h>
#include "ships.h"
#define ROW 10
#define COLUMN 10

extern char player_grid[ROW][COLUMN];

void drawGrid();
void printPlayerGrid();
void placeShip(Ship ship, int orientation);

#endif /*grid_h*/
