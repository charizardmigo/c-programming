//NAME: PRIESTLEY FOMECHE
//AIM: CHECKS IF A NUMBER IS DIVISIBLE BY 5 AND/OR 11
//DATE: 22ND JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void)  
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);
    
    printf("\n");

    if ((a % 5) == 0 && (a % 11) == 0)
        printf("%d is divisible by 5 and 11", a);

    else if ((a % 5) != 0 && (a % 11) != 0)
        printf("%d is neither divisible by 5 nor 11", a);

    else if ((a % 5) == 0 && (a % 11) != 0)
        printf("%d is divisible by 5 but not divisible by 11", a);

    else
        printf("%d is not divisible by 5 but divisible by 11", a);

    return 0;
}
