#include <stdio.h>
#include "position.h"

void createPosition(Position *P, int x, int y)
{
    (*P).x = x;
    (*P).y = y;
}

int getXPosition(Position *P){
    return (*P).x;
}

int getYPosition(Position *P){
    return (*P).y;
}
