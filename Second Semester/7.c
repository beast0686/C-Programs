#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int arr[100];
    int *ptr;
    ptr = arr;

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int large, pos;
    int i;
    
    printf("Enter the elements of the array: \n");
    for (i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));

        if (i == 0)
        {
            large = *(ptr+i);
            pos = i+1;
        }

        if (*(ptr+i) > large)
        {
            large = *(ptr+i);
            pos = i+1;
        }
    }

    printf("Largest element of the array: %d\n", large);
    printf("Position of the largest element of the array: %d\n", pos);
    printf("\n");

    return 0;
}