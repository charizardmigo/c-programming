//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO CALCULATE AVERAGE SPEED OF A CAR
//DATE: 30th NOVEMBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
    float distance, speed, time;

    printf("Enter the distance travelled: ");
    scanf("%f", &distance);
    printf("Enter the total time taken: ");
    scanf("%f", &time);

    speed = distance / time;

    printf("The  average speed is %.3f", speed);

    return 0;
}
