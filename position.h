#ifndef POSITION_H
#define POSITION_H

typedef struct {
    int x;
    int y;
} Position;

void CreatePosition(Position *position, int x, int y);
int GetXPosition(Position *position);
int GetYPosition(Position *position);
Position RangeBetweenPosition(Position *position1, Position *position2);

#endif
