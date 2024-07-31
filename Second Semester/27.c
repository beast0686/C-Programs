#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fptr1, *fptr2;
    fptr1 = fopen("27a.txt","r");
    fptr2 = fopen("27b.txt","r");

    char ch1, ch2;
    int i=1;

    while (1)
    {
        ch1 = fgetc(fptr1);
        ch2 = fgetc(fptr2);
        
        if (ch1 == EOF && ch2 == EOF)
        {
            break;
        }

        if (ch1 != ch2)
        {
            i=0;
            break;
        }
    }

    fclose(fptr1);
    fclose(fptr2);

    if (i == 1)
    {
        printf("Files are identical\n");
    }
    else
    {
        printf("Files are not ideantical\n");
    }

    return 0;
}