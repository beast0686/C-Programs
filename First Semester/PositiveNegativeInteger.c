#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("%d is a positive integer\n", a);
    }
    else if (a < 0)
    {
        printf("%d is a negative integer\n", a);
    }
    else
    {
        printf("ZERO is neither positive nor negative integer\n");
    }

    return 0;
}