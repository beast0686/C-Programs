#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a>b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else
    {
        printf("%d is greater than %d\n", b, a);
    }

    return 0;
}