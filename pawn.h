#include "position.h"

#ifndef PAWN_H
#define PAWN_H

typedef struct {
    int number;
    Position location;
} Pawn;

void CreatePawn(Pawn *pawn, int number, Position *location);

#endif
