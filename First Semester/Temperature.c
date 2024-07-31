#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    float c;
    printf("Enter the temperature in celcius: ");
    scanf("%f", &c);

    float f;
    f = (float)(((9*c)/(5))+32);
    printf("Temperature in farenheght: %.2f\n", f);

    return 0;
}