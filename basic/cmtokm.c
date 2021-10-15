//NAME: PRIESTLEY FOMECHE
//AIM: CONVERTS CENTIMETRE TO METRE AND KILOMETRE
//DATE: 15TH OCTOBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float cent, metre, kilo;

    printf("Enter a dimension (in cm): ");
    scanf("%f", &cent);

    metre = cent / 100.00f;
    kilo = cent / 100000.00f;

    printf("\n%fcm in m is %fm and in km is %fkm", cent, metre, kilo);

    return 0;
}
