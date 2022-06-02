// NAME: PRIESTLEY FOMECHE
// AIM: PRINTS A NUMBER IN REVERSE
// DATE: 9TH OCTOBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, reverse = 0;

    printf("Enter a number: ");  
    scanf("%d", &num);

    while (num > 0)
    { 
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }

    printf("The reverse is %d", reverse);

    return 0;
}
