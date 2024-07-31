#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    fptr = fopen("17.txt","w");

    char str[60];
    printf("Enter a String: ");
    fgets(str,61,stdin);
    fputs(str, fptr);

    fclose(fptr);

    printf("File Updated\n");

    return 0;
}