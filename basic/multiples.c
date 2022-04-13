//NAME: PRIESTLEY FOMECHE
//AIM: CHECKS IF A GIVEN INTEGER IS A MULTIPLE OF 3 OR 7
//DATE: 5TH OCTOBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void)  
{
    int num;             

    printf("Enter a positive number: ");
    scanf("%d", &num);
    printf("\n");                  

    if (num % 7 == 0 && num % 3 == 0)
        printf("%d is a multiple of both 3 and 7", num);

    else if (num % 3 == 0)
        printf("%d is a multiple of 3", num);    

    else if (num % 7 == 0)       
        printf("%d is a multiple of 7", num);

    else
        printf("%d is neither a multiple of 3 nor 7", num);

    return 0;
}
