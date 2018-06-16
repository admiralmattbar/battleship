//SHIPS.C
#include <stdio.h>
#include "ships.h"
#include "grid.h"

struct Ship battleship = {"Battleship", 4, 'b'};

struct Ship aircraft_carrier = {"Aircraft Carrier", 5, 'a'};

struct Ship submarine = {"Submarine", 3, 's'};

struct Ship cruiser = {"Cruiser", 3, 'c'};

struct Ship destroyer = {"Destroyer", 2, 'd'};

enum orientation (vertical = 0, horizontal = 1);
