//NAME: PRIESTLEY FOMECHE
//AIM: DISPLAYS NUMBER OF SUBNOTES IN A GIVEN AMOUNT
//DATE: 23rd JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int amount, tenk, fivek, twok, onek, fapshi, pies, fifty, twentyfive;

    printf("\tEnter any amount: ");
    scanf("%d", &amount);

    tenk = amount / 10000;
    fivek = (amount - (10000 * tenk)) / 5000;
    twok = ((amount - (10000 * tenk)) - (5000 * fivek)) / 2000;
    onek = (((amount - (10000 * tenk)) - (5000 * fivek)) - (twok * 2000)) / 1000;
    fapshi = ((((amount - (10000 * tenk)) - (5000 * fivek)) - (twok * 2000)) - (onek * 1000)) / 500;

    pies = (((((amount - (10000 * tenk)) - (5000 * fivek)) - (twok * 2000)) - (onek * 1000)) - (fapshi * 500)) / 100;

    fifty = ((((((amount - (10000 * tenk)) - (5000 * fivek)) - (twok * 2000)) - (onek * 1000)) - (fapshi * 500)) - (pies * 100)) / 50;

    twentyfive = (((((((amount - (10000 * tenk)) - (5000 * fivek)) - (twok * 2000)) - (onek * 1000)) - (fapshi * 500)) - (pies * 100)) - (fifty * 50)) / 25;

    printf("\n\tThe amount %d contains: \n\n", amount);
    printf("\t10,000frs notes: %d\n", tenk);
    printf("\t5,000frs notes: %d\n", fivek);
    printf("\t2,000frs notes: %d\n", twok);
    printf("\t1,000frs notes: %d\n", onek);
    printf("\t500frs notes: %d\n", fapshi);
    printf("\t100frs coins: %d\n", pies);
    printf("\t50frs coins: %d\n", fifty);
    printf("\t25frs coins: %d\n\n", twentyfive);

    return 0;
}
