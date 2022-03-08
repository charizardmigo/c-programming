//NAME: PRIESTLEY FOMECHE
//AIM: PROGRAM TO COMPUTE VOLUME OF A CONE
//DATE: 27th NOVEMBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void)            
{  
    float diameter, height, area;

    printf("Enter the diameter of a cone: ");
    scanf("%f", &diameter);
    
    printf("Enter the height of the cone: ");
    scanf("%f", &height);

    area = diameter * height;   

    printf("The area is %.2f", area);

    return 0;
}
