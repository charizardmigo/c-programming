//NAME: PRIESTLEY FOMECHE
//AIM: CHECKS WHICH NUMBER IS CLOSER TO 100
//DATE: 7TH OCTOBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
    int num1, num2, near;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter another number: ");
    scanf("%d", &num2);
    
    printf("\n");

    near = (100 - num1) < (100 - num2) ? num1 : num2;

    if (num1 >= 100 || num2 >= 100)
        printf("INVALID");

    else if (num1 == num2)
        printf("Numbers are equal");

    else
        printf("The closest to 100 is %d", near);

    return 0;
}
