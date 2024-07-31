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
        printf("%c is an alphabet\n", ch);

        if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            printf("%c is a vowel\n", ch);
        }
        else
        {
            printf("%c is a consonant\n");
        }
    }
    else
    {
        printf("%c is not an alphabet\n", ch);
    }

    return 0;
}