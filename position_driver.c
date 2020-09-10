#include <stdio.h>
#include "position.h"

int main(){
    Position position, position1, position2, range;
    int x = 5; 
    int y = 10; 
    CreatePosition(&position, x, y);
    printf("%d\n", GetXPosition(&position));
    printf("%d\n", GetYPosition(&position));

    CreatePosition(&position1, 3, 9);
    CreatePosition(&position2, 5, 4);
    range = RangeBetweenPosition(&position1, &position2);
    printf("%d\n", GetXPosition(&range));
    printf("%d\n", GetYPosition(&range));

    return 0;
}
