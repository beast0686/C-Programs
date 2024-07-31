#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define pi 3.14

int main()
{
    int r;
    float area;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    area = pi*r*r;

    printf("Area of the circle with radius %d is: %f\n", r, area);

    return 0;
}