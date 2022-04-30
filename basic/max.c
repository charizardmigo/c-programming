//NAME: PRIESTLEY FOMECHE
//AIM: PRINTS THE GREATEST NUMBER AMONG 3 
//DATE: 22ND JULY, 2021

#include <stdio.h> 
#include <stdlib.h>

int main (void)  
{
    int a, b, c;                         
                    
    printf("Enter three numbers (separated with spaces): ");              
    scanf("%d%d%d", &a, &b, &c);             

    if (a > b && a > c)         
        printf("Max number is %d", a);  

    else if (b > a && b > c)       
        printf("Max number is %d", b);   

    else    
        printf("Max number is %d", c);      
       
    return 0;         
}
