#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    fptr  = fopen("22.txt", "r");

    char ch;
    int upper=0, lower=0, digits=0, special=0;

    ch = fgetc(fptr);
    while(ch != EOF)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            upper++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            lower++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else
        {
            special++;
        }
        ch = fgetc(fptr);
    }

    printf("Uppercase Characters: %d\n", upper);
    printf("lowercase Characters: %d\n", lower);
    printf("Numerical Characters: %d\n", digits);
    printf("Special Characters: %d\n", special);

    fclose(fptr);

    return 0;
}