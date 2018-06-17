#include <stdio.h>
#include "grid.h"
#include "ships.h"

int main()
{
    drawGrid();
    printPlayerGrid();
    placeShip(battleship, 0);
    printPlayerGrid();
    return 0;
}
