//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO COMPUTE AREA OF SQUARE
//DATE: 28th NOVEMBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int length, area1, area2;

    printf("Enter the length of a square: ");
    scanf("%d", &length);

    area1 = length * length;

   do {
        printf("Guess the area of the square: ");
        scanf("%d", &area2);

   }  while (area2 != area1);

    return 0;
}