//NAME: PRIESTLEY FOMECHE
//AIM: SIMPLE CALCULATOR PROGRAM
//DATE: 22ND JULY, 2021

#include <stdio.h>
#include <stdlib.h>
  
int main (void) 
{
    float num1, num2;
    int command;

    printf("COMMANDS:\n0 = EXIT\n1 = ADD\n2 = SUBTRACT\n3 = MULTIPLY\n4 = DIVIDE\n\n");
    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%f", &num2);
    printf("Enter a command: ");
    scanf("%d", &command);

    switch (command){
        case 1: printf("Their sum is %.2f", num1 + num2);
                break;

        case 2: printf("Their difference is %.2f", num1 - num2);
                break;

        case 3: printf("Their product is %.2f", num1 * num2);
                break;

        case 4: printf("Their quotient is %.2f", num1 / num2);
                break;

        case 0: break;

        default: printf("INCORRECT COMMAND");
                 break;
        }

    return 0;
}
