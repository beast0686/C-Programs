#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    fptr = fopen("16.txt","w");

    char str[100];
    printf("Enter a String: ");
    fgets(str,100,stdin);
    fputs(str, fptr);

    fclose(fptr);

    printf("File Updated\n");

    return 0;
}