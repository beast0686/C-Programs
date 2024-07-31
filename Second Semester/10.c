#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct marks
{
    char name[50];
    char usn[20];
    int phy_marks;
    int chem_marks;
    int math_marks;
    float percent;
} MARKS;

int main()
{
    MARKS m[10];

    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int i;
    for (i=0; i<n; i++)
    {
        printf("Enter details of Student %d\n", i+1);
        printf("Name: ");
        scanf("%s", &m[i].name);
        printf("USN: ");
        scanf("%s", &m[i].usn);
        printf("Physics Marks: ");
        scanf("%d", &m[i].phy_marks);
        printf("Chemistry Marks: ");
        scanf("%d", &m[i].chem_marks);
        printf("Mathematics Marks: ");
        scanf("%d", &m[i].math_marks);
    }

    for (i=0; i<n; i++)
    {
        m[i].percent = (float)((m[i].phy_marks + m[i].chem_marks + m[i].math_marks)/3);
    }

    for (i=0; i<n; i++)
    {
        printf("Percentage obtained by Student %d: \n");
        printf("Name %s\n", m[i].name);
        printf("USN: %s\n", m[i].usn);
        printf("Physics Marks: %d\n", m[i].phy_marks);
        printf("Chemistry Marks: %d\n", m[i].chem_marks);
        printf("Mathematics Marks: %d\n", m[i].math_marks);
        printf("Percentage: %f\n", m[i].percent);
        printf("\n");
    }

    printf("\n");

    return 0;
}