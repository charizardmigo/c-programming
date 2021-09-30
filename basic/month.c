//NAME: PRIESTLEY FOMECHE
//AIM: PRINTS NUMBER OF DAYS IN A MONTH
//DATE: 22ND JULY, 2021

#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int month;

    printf("Enter a month number: ");
    scanf("%d", &month);

    switch (month){

        case 1: printf("Number of days in January are 31");
                break;

        case 2: printf("Number of days in February are 28/29");
                break;

        case 3: printf("Number of days in March are 31");
                break;

        case 4: printf("Number of days in April are 30");
                break;

        case 5: printf("Number of days in May are 31");
                break;

        case 6: printf("Number of days in June are 30");
                break;

        case 7: printf("Number of days in July are 31");
                break;

        case 8: printf("Number of days in August are 31");
                break;

        case 9: printf("Number of days in September are 30");
                break;

        case 10: printf("Number of days in October are 31");
                break;

        case 11: printf("Number of days in November are 30");
                break;

        case 12: printf("Number of days in December are 31");
                break;

        default: printf("INVALID MONTH");
                 break;
    }

    return 0;
}
