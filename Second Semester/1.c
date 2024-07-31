#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int m, n;
    printf("Enter the range: ");
    scanf("%d %d", &m, &n);

    int num;
    int *ptr;
    ptr = &num;

    for ((*ptr)=m+1; (*ptr)<n; (*ptr)++)
    {
        if ((*ptr)%2 == 0)
        {
            printf("%d\t", (*ptr));
        }
    }
    printf("\n");

    return 0;
}