//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO DISTRIBUTE NEWSPAPERS
//DATE: 29th NOVEMBER 2021

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int reserve = 100, request;

    printf("THERE ARE CURRENTLY 100 NEWSPAPERS ON BOARD!\n\n");
    printf("How many newspapers do you need? ");
    scanf("%d", &request);

    while (reserve > 0){
        if (reserve - request < 0){
            printf("Invalid Operation!\n");
            break;
        }
        else
            reserve -= request;
            printf("\n\nThere are %d newspaper(s) left!\n\n", reserve);
            printf("How many newspapers do you need? ");
            scanf("%d", &request);
    }

    return 0;
}
