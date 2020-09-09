#include <stdio.h>
#include "position.h"

int main(){
    Position P;
    int x = 5; 
    int y = 10; 
    createPosition(&P, x, y);
    printf("%d\n", getXPosition(&P));
    printf("%d\n", getYPosition(&P));

    return 0;
}
