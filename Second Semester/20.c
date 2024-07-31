#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    fptr = fopen("20.txt","r");

    char ch;

    printf("File contents areas follows: \n");
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);

    return 0;
}