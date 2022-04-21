//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO CALCULATE SIMPLE INTEREST
//DATE: 10TH OCTOBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void)       
{
    long principal;
    int time;
    float rate, simple_interest;

    printf("Enter the principal: ");    
    scanf("%ld", &principal);

    printf("Enter the rate: ");            
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%d", &time);

    simple_interest = (principal * (rate / 100.00f) * time) / 100.00f;

    printf("\nThe Simple Interest is %.2f per year", simple_interest);

    return 0;
}
