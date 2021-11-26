//NAME: PRIESTLEY FOMECHE
//AIM: CHECKS IF TWO NON-NEGATIVE INTEGERS HAVE THE SAME LAST DIGIT
//DATE: 7TH OCTOBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int num1, num2;

    printf("Enter a positive integer: ");
    scanf("%d", &num1);
    printf("Enter another positive integer: ");
    scanf("%d", &num2);
    printf("\n");

    if ((num1 % 10) == (num2 % 10))
        printf("Both numbers have the same last digit");
    else
        printf("They have different last digits");

    return 0;
}
