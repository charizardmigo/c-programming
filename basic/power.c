// NAME: PRIESTLEY FOMECHE
// AIM: FINDS POWER OF A NUMBER
// DATE: 13TH OCTOBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, pow, i, result = 1;

    printf("Inputa Base: ");
    scanf("%d", &num);
    printf("Input an Exponent: ");
    scanf("%d", &pow);

    for (i = 1; i <= pow; i++)
    {
        result *= num;
    }

    printf("\n%d ^ %d = %d", num, pow, result)

        return 0;
}
