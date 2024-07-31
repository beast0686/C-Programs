#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);


    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("To Lowercase: %c\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch -32;
        printf("To Uppercase: %c\n", ch);
    }
    else
    {
        printf("Character is not an alphabet\n");
    }

    return 0;
}