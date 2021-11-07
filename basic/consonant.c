//NAME: PRIESTLEY FOMECHE
//AIM: CHECKS IF AN ALPHABET IS A VOWEL OR CONSONANT
//DATE: 13TH OCTOBER, 2021

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char ch;

    printf("Enter any letter from the alphabet: ");
    ch = getchar();

    printf("\n");

    if (ch < 'A' || ch > 'z'){
        printf("Invalid Character");
        return 0;
    }

    else if (ch > 'Z' && ch < 'a'){
        printf("Invalid Character");
        return 0;
    }

    else {
        switch (ch){
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
                printf("%c is a vowel", ch);
                break;

            default:
                printf("%c is a consonant", ch);
                break;
                }
        }

    return 0;
}
