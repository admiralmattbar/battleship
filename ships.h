#ifndef SHIPS_H
#define SHIPS_H


#include <stdio.h>

typedef struct {

    char name[16];
    int size;
    char symbol;
} Ship;

extern Ship battleship;
extern Ship aircraft_carrier;
extern Ship submarine;
extern Ship cruiser;
extern Ship destroyer;



#endif /*ships_h*/
