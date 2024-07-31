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

    int sum;
    float average;

    sum = a+b;
    average = (float)(sum/2);

    printf("Sum of the two numbers %d and %d is %d\n", a, b, sum);
    printf("Average of the two numbers %d and %d is %.2f\n", a, b, average);

    return 0;
}