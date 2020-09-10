#include "pawn.h"

void CreatePawn(Pawn *pawn, int number, Position *location){
    (*pawn).number = number;
    (*pawn).location = *location;
}
