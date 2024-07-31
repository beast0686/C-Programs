#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define square(x) (x*x)
#define cube(x) (square(x)*x)

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square of the number %d is: %d\n", n, square(n));
    printf("Cube of the number %d is: %d\n", n, cube(n));

    return 0;
}