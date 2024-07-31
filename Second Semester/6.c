#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char ch;
    char *pch;
    pch = &ch;

    int uc=0, lc=0;
    int *puc, *plc;
    puc = &uc;
    plc = &lc;

    for (;;)
    {
        printf("enter a character: ");
        scanf("%c", pch);

        if ((*pch) == '*')
        {
            break;
        }
        else if (islower(*pch) != 0)
        {
            printf("To Upper: %c\n", toupper(*pch));
            (*plc)++;
        }
        else if (isupper(*pch) != 0)
        {
            printf("To Lower: %c\n", tolower(*pch));
            (*puc)++;
        }
        else
        {
            printf("Character is not an alphabet\n");
            break;
        }
    }

    printf("Case of Alphabets: \n");
    printf("Upper Case: %d\n", (*puc));
    printf("Lower Case: %d\n", (*plc));
    printf("\n");

    return 0;
}