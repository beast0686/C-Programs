#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    float a, b, c, r1, r2, D;
    printf("Enter the values of a b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = ((b*b)-(4*a*c));

    if (a==0 && b!=0)
    {
        r1 = (-c/b);
        printf("Solution of the linear equation: %f\n", r1);
    }
    else if (b==0)
    {
        printf("Roots are Invalid\n");
    }
    else
    {
        if (D>0)
        {
            r1 = (((-b)+D)/(2*a));
            r2 = (((-b)-D)/(2*a));
            printf("Roots are real and Unequal: %f\t %f\n", r1, r2);
        }
        else if (D==0)
        {
            r1 = ((-b)/(2*a));
            r2 = r1;
            printf("Roots are real and equal: %f\t %f\n", r1, r2);
        }
        else
        {
            printf("Roots are Imaginary: \n");
            r1 = ((-b)/(2*a));
            r2 = sqrt(abs(D));
            printf("Real Part: %f\n", r1);
            printf("Imaginary Part: %f\n", r2);
        }
    }

    return 0;
}