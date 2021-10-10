//NAME: PRIESTLEY FOMECHE
//AIM: PRINTS MULTIPLICATION TABLE OF ANY NUMBER
//DATE: 10TH OCTOBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1, num;
    long result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nThe Multiplication Table is:\n");

    for (i = 1; i < 13; i++){
        result = num * i;
        printf("\n%d x %d = %ld", num, i, result);
    }
    printf("\n");

    return 0;
}
