#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    float p;
    printf("Enter the percentage obtained by the student: ");
    scanf("%f", &p);

    if (p>=90 && p<=100)
    {
        printf("Grade Obtained: O\n");
    }
    else if (p>=85 && p<90)
    {
        printf("Grade Obtained: A+\n");
    }
    else if (p>=80 && p<85)
    {
        printf("Grade Obtained: A\n");
    }
    else if (p>=75 && p<80)
    {
        printf("Grade Obtained: B+\n");
    }
    else if (p>=70 && p<75)
    {
        printf("Grade Obtained: B\n");
    }
    else if (p>=65 && p<70)
    {
        printf("Grade Obtained: C+\n");
    }
    else if (p>=60 && p<65)
    {
        printf("Grade Obtained: C\n");
    }
    else if (p>=55 && p<60)
    {
        printf("Grade Obtained: D+\n");
    }
    else if (p>=50 && p<55)
    {
        printf("Grade Obtained: D\n");
    }
    else if (p>=45 && p<50)
    {
        printf("Grade Obtained: E+\n");
    }
    else if (p>=40 && p<45)
    {
        printf("Grade Obtained: E\n");
    }
    else
    {
        printf("Grade Obtained: F\n");
    }

    return 0;
}