#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], cpy[100];
    char *pstr, *pcpy;
    pstr = str;
    pcpy = cpy;

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    int i, j;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n > strlen(str))
    {
        printf("Invaid input for n\n");
    }
    else
    {
        for (i=strlen(str)-n, j=0; *(str+i)!= '\0'; i++, j++)
        {
            *(pcpy+j) = *(pstr+i);
        }
        *(pcpy+j) = '\0';

        printf("Removed String: ");
        puts(cpy);
    }

    return 0;
}