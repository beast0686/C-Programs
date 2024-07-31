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

    if (a == 0)
    {
        printf("ZERO is neither even nor odd integer\n");
    }
    else if (a%2 == 0)
    {
        printf("%d is an even number\n", a);
    }
    else
    {
        printf("%d is an odd number\n", a);
    }

    return 0;
}