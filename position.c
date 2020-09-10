#include "position.h"

void CreatePosition(Position *position, int x, int y)
{
    (*position).x = x;
    (*position).y = y;
}

int GetXPosition(Position *position){
    return (*position).x;
}

int GetYPosition(Position *position){
    return (*position).y;
}

Position RangeBetweenPosition(Position *position1, Position *position2){
    Position range;
    range.x = (*position2).x - (*position1).x;
    range.y = (*position2).y - (*position1).y;
    return range;
}

