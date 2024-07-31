#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n, i;
    int large, small, sum=0;
    float average;
    int arr[100];
    int *ptr;
    ptr = arr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the arrau: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));

        if (i == 0)
        {
            large = *(ptr+i);
            small = *(ptr+i);
        }

        if (*(ptr+i) > large)
        {
            large = *(ptr+i);
        }
        if (*(ptr+i) < small)
        {
            small = *(ptr+i);
        }

        sum += *(ptr+i);
    }

    average  = (float)(sum/n);

    printf("Properties of the elements of the array: \n");
    printf("Sum: %d\n", sum);
    printf("Average: %f\n", average);
    printf("Largest Element: %d\n", large);
    printf("Smallest Element: %d\n", small);
    printf("\n");

    return 0;
}