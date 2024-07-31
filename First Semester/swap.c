#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int a, b;
    int temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: \n");
    printf("Number 1: %d\n", a);
    printf("Number 2: %d\n", b);
    temp = a;
    a = b;
    b = temp;
    printf("\n");
    printf("After swapping: \n");
    printf("Number 1: %d\n", a);
    printf("Number 2: %d\n", b);

    return 0;
}