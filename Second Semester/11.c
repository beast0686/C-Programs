#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

typedef struct distance
{
    int x;
    int y;
} DIS;

int main()
{
    DIS d1, d2;

    printf("Enter coordinates of first point: ");
    scanf("%d %d", &d1.x, &d1.y);
    printf("Enter coordinates of second point: ");
    scanf("%d %d", &d2.x, &d2.y);

    float dist;
    dist = (float)sqrt(pow((d1.x-d2.x),2)+pow((d1.y-d2.y),2));

    printf("Distance between the two points is: %f\n", dist);

    return 0;
}