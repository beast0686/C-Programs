#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    fptr = fopen("19.txt","r");

    char ch;
    int count=0;

    ch = fgetc(fptr);
    while (ch != EOF)
    {
        if (ch!=EOF && ch!='\n')
        {
            count++;
        }
        ch = fgetc(fptr);
    }

    printf("\n");
    printf("Total number of character present in the file: %d\n", count);
    printf("\n");

    fclose(fptr);

    return 0;
}