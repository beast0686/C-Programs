#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int a, b, c;
    printf("Enter the length of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    float area;
    float s;

    s = (float)(a+b+c)/3;
    area = (float)sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of the triangle is: %.2f\n", area);

    return 0;
}