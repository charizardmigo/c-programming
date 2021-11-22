//NAME: PRIESTLEY FOMECHE
//AIM: SUMS 2 INTEGERS AND RETURNS TRIPLE THEIR SUM IF INTEGERS ARE THE SAME
//DATE: 30TH SEPTEMBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int num1, num2, sum;

    printf("Enter an integer: ");
    scanf("%d", &num1);
    printf("Enter another integer: ");
    scanf("%d", &num2);

    sum = num1 == num2 ? (num1 + num2) * 3 : num1 + num2;

    printf("%d", sum);

    return 0;
}
