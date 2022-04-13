//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO ASK FOR A NUMBER LESS THAN 5
//DATE: 28th NOVEMBER 2021

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int number;

    do {                   
        printf("Enter a number less than 5: ");
        scanf("%d", &number);           

        if (number < 5)
            return 0;
    } while (number != 5);

    return 0;
}
