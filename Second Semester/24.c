#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    int *ptr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n,sizeof(int));

    int i;
    printf("Enter the elements of the array: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));
    }
    printf("\n");

    printf("Elements of the array are: \n");
    for (i=0; i<n; i++)
    {
        printf("%d\n", *(ptr+i));
    }
    printf("\n");

    return 0;
}