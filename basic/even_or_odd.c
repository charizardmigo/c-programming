//NAME: PRIESTLEY FOMECHE
//AIM: PRINTS DAY OF THE WEEK FROM A NUMBER ENTERED BY USER
//DATE: 22ND JULY, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void)    
{
    int week;

    printf("Enter week number: ");
    scanf("%d", &week);

    switch (week){
       case 1: printf("The day of the week is Monday");
               break;

       case 2: printf("The day of the week is Tuesday");
               break;

       case 3: printf("The day of the week is Wednesday");
               break;

       case 4: printf("The day of the week is Thursday");
               break;

       case 5: printf("The day of the week is Friday");
               break;

       case 6: printf("The day of the week is Saturday");
               break;

       case 7: printf("The day of the week is Sunday");
               break;

       default: printf("INVALID INPUT");
                break;
    }

    return 0;
}
