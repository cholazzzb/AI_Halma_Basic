#include <stdio.h>
#include "position.h"
#include "pawn.h"

int main(){
    Pawn pawn1;
    Position location_pawn1;
    CreatePosition(&location_pawn1, 3, 5);
    CreatePawn(&pawn1, 1, &location_pawn1);

    printf("%d\n", pawn1.number);
    printf("%d\n", GetXPosition(&pawn1.location));
    printf("%d\n", GetYPosition(&pawn1.location));

    return 0;
}
