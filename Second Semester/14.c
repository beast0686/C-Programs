#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char ch;
    char *pch;
    pch = &ch;

    printf("Enter a character: ");
    scanf("%c", pch);

    if (*pch >= 'A' && *pch <= 'Z' || *pch >= 'a' && *pch <='z')
    {
        if (*pch == 'A' || *pch == 'E' || *pch == 'I' || *pch == 'O' || *pch == 'U' || *pch == 'a' || *pch == 'e' || *pch == 'i' || *pch == 'o' || *pch == 'u')
        {
            printf("Character is a vowel.\n");
        }
        else
        {
            printf("Character is a consonant.\n");
        }
    }
    else
    {
        printf("Character is not an alphabet.\n");
    }

    return 0;
}