#include <stdio.h>
#include "grid.h"
#include "ships.h"

char player_grid[COLUMN][ROW];

void drawGrid()
{
    int y;
    int x;

    for(y=0; y<COLUMN; y++){
        for(x=0; x<ROW; x++){
            player_grid[y][x] = 'O';
        }
    }
}

void printPlayerGrid()
{
    int y;
    int x;

    for(y=0; y<COLUMN; y++){
        printf("\n");
        for(x=0; x<ROW; x++){
             printf("%c ", player_grid[y][x]);
        }
        printf("\n");
	printf("\n");
    }
}


void placeShip(Ship ship, int orientation)
{
    int x_pos;
    int y_pos;
    switch(orientation){
    
    case 0:

	printf("Which column would you like to place your %s in?\n", ship.name);
	scanf("%d\n", &x_pos);
	if(x_pos + ship.size > ROW-1){
	    printf("Ship has to fit on the grid.\n");
	    placeShip(ship, orientation);
	} else {
	    printf("Which row would you like to place your %s in?\n", ship.name);
	    scanf("%d\n", &y_pos);
	    int i;
	    for(i=0; i < ship.size; i++){
	        player_grid[y_pos + i][x_pos] = ship.symbol;
	    }
	}
    case 1:

	printf("Which row would you like to place your %s in?\n", ship.name);
	scanf("%d\n", &y_pos);
	if(y_pos + ship.size > COLUMN-1){
	    printf("Ship has to fit on the grid.\n");
	    placeShip(ship, orientation);
	} else {
	    printf("Which column would you like to place your %s in?\n", ship.name);
	    scanf("%d\n", &x_pos);
	    int i;
	    for(i=0; i<ship.size; i++){
	        player_grid[y_pos][x_pos + i] = ship.symbol;
	    }
	}
    }
}
