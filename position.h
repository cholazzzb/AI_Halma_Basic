#ifndef POSITION_H
#define POSITION_H

typedef struct {
    int x;
    int y;
} Position;

void createPosition(Position *P, int x, int y);
int getXPosition(Position *P);
int getYPosition(Position *P);

#endif
