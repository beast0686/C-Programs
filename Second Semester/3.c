#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void call_by_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("Call by Value Swap: \n");
    printf("Number 1: %d\n", x);
    printf("Number 2: %d\n", y);
}

void call_by_reference(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("Call by Reference Swap: \n");
    printf("Number 1: %d\n", *x);
    printf("Number 2: %d\n", *y);
}

int main()
{
    int a, b;
    int *ptra, *ptrb;
    
    ptra = &a;
    ptrb = &b;

    printf("Enter Two numbers: ");
    scanf("%d %d", &a, &b);

    int choice;
    printf("Swap by: \n");
    printf("1. Call by Value\n");
    printf("2. Call by Reference\n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        printf("Before Swapping: \n");
        printf("Number 1: %d\n", a);
        printf("Number 2: %d\n", b);
        printf("After Swapping: \n");
        call_by_value(a, b);
        printf("\n");
        printf("In main function: \n");
        printf("Number 1: %d\n", a);
        printf("Number 2: %d\n", b);
        break;

        case 2:
        printf("Before Swapping: \n");
        printf("Number 1: %d\n", a);
        printf("Number 2: %d\n", b);
        printf("After Swapping: \n");
        call_by_reference(ptra, ptrb);
        printf("\n");
        printf("In main function: \n");
        printf("Number 1: %d\n", a);
        printf("Number 2: %d\n", b);
        break;

        default:
        printf("Invalid Choice\n");
        break;
    }

    return 0;
}