//NAME: PRIESTLEY FOMECHE       
//AIM: DETECTS IF A TRIANGLE IS VALID OR NOT                     
//DATE: 22ND JULY, 2021            

#include <stdio.h>                                   
#include <stdlib.h>  

int main (void)                     
{                 
    float ang1, ang2, ang3, sum;         

    printf("Enter first angle of a triangle: ");   
    scanf("%f", &ang1);        
    printf("Enter second angle of the triangle: ");                           
    scanf("%f", &ang2);                                             
    printf("Enter third angle of the triangle: ");                   
    scanf("%f", &ang3);                  

    sum = ang1 + ang2 + ang3;             
     
    if (sum == 180)                          
        printf("The triangle is valid");   
            
    else      
        printf("Invalid triangle");                 
                     
}  
