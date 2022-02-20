//NAME: PRIESTLEY FOMECHE
//AIM: PRINTS MULTIPLICATION TABLE OF ANY NUMBER
//DATE: 10TH OCTOBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
    int i, num;
    long result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nThe Multiplication Table of %d is:\n", num);

    for (i = 10; i <= 22; i++){
        result = num * i;
        printf("\n%d x %d = %ld", num, i, result);
    }

    printf("\n");

    return 0;
}
