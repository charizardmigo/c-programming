//NAME: PRIESTLEY FOMECHE
//AIM: RETURNS TRUE IF AN INTEGER AMONG TWO OR THEIR SUM EQUALS 30
//DATE: 30TH SEPTEMBER, 2021

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int i, j;
    const int x = 30;

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter another integer: ");
    scanf("%d", &j);

    if (i == x || j == x || i + j == x)
        printf("True");

    else
        printf("False");

    return 0;
}
