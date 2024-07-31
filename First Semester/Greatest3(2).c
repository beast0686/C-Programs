#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b)
    {
        if (a>c)
        {
            printf("%d is the greatest number\n", a);
        }
        else
        {
            printf("%d is the greatest number\n", c);
        }
    }
    else
    {
        if (b>a)
        {
            printf("%d is the greatest number\n", b);
        }
        else
        {
            printf("%d is the greatest number\n", c);
        }
    }

    return 0;
}