//NAME: PRIESTLEY FOMECHE
//AIM: CHECKS IF A NUMBER LIES BETWEEN 100 AND 200
//DATE: 6TH OCTOBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 200)
        printf("\n%d lies between 100 and 200", num);

    else
        printf("\n%d doesn't lie between 100 and 200", num);

    return 0;
}
