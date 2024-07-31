#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fptr1, *fptr2, *fptr3;
    fptr1 = fopen("21a.txt","r");
    fptr2 = fopen("21b.txt","r");
    fptr3 = fopen("21c.txt","w");

    char ch1, ch2;

    ch1 = fgetc(fptr1);
    while (ch1 != EOF)
    {
        fputc(ch1, fptr3);
        ch1 = fgetc(fptr1);
    }

    ch2 = fgetc(fptr2);
    while (ch2 != EOF)
    {
        fputc(ch2, fptr3);
        ch2 = fgetc(fptr2);
    }

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);

    printf("File contents are merged\n");

    return 0;
}