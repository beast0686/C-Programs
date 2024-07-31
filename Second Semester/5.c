#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[100], str2[100], str3[200];
    char *ptr1, *ptr2, *ptr3;
    ptr1 = str1;
    ptr2 = str2;
    ptr3 = str3;

    printf("Enter String 1: ");
    fgets(str1, 100, stdin);

    printf("Enter String 2: ");
    fgets(str2, 100, stdin);

    int i, j;

    for (i=0, j=0; i<strlen(str1); i++, j++)
    {
        *(ptr3+j) = *(ptr1+i);
    }
    for (i=0; i<strlen(str2); i++, j++)
    {
        *(ptr3+j) = *(ptr2+i);
    }
    *(ptr3+j) = '\0';

    printf("Concatenated String: ");
    puts(str3);

    return 0;
}