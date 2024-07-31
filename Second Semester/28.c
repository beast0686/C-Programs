#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fptr1, *fptr2;
    fptr1 = fopen("28a.txt","r");
    fptr2 = fopen("28b.txt","w");

    char ch;
    ch = fgetc(fptr1);
    while (ch != EOF)
    {
        fputc(ch, fptr2);
        ch = fgetc(fptr1);
    }

    fclose(fptr1);
    fclose(fptr2);

    printf("File contents copied\n");

    return 0;
}