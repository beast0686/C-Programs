#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    fptr = fopen("29.txt","r");

    char ch;

    printf("\n");
    printf("File Contents are displayed as follows: \n");
    printf("\n");

    ch = fgetc(fptr);
    while (ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);

    return 0;
}