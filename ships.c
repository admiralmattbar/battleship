//SHIPS.C
#include <stdio.h>
#include "ships.h"
#include "grid.h"


Ship battleship = {"Battleship", 4, 'b'};
Ship aircraft_carrier = {"Aircraft Carrier", 5, 'a'};
Ship submarine = {"Submarine", 3, 's'};
Ship cruiser = {"Cruiser", 3, 'c'};
Ship destroyer = {"Destroyer", 2, 'd'};

enum orientation {vertical = 0, horizontal = 1};
