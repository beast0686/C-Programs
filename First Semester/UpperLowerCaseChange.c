#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        if (ch>='A' && ch<='Z')
        {
            ch = ch+32;
            printf("To Lower: %c\n", ch);
        }
        else
        {
            ch = ch-32;
            printf("To Upper: %c\n", ch);
        }
    }
    else
    {
        printf("Character is not an alphabet\n");
    }

    return 0;
}