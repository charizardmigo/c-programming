//NAME: PRIESTLEY FOMECHE
//AIM: PRINTS ABSOLUTE DIFFERENCE BETWEEN N AND 51 WHILE RETURNING TRIPLE THE ABSOLUTE DIFFERENCE IF N IS GREATER THAN 51
//DATE: 30TH SEPTEMBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, abs, trip;

    printf("Enter a number, n: ");
    scanf("%d", &n);

    //Computes absolute value of difference between n and 51
    abs = (n - 51) > 0 ? (n - 51) : 51 - n;

    //
    trip = n > 51 ? abs * 3 : abs;

    printf("%d", trip);

    return 0;
}
