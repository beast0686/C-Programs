#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct student
{
    char name[50];
    char usn[20];
    float cgpa;
} STUDENT;

int main()
{
    STUDENT s;
    STUDENT *ptr;
    ptr = &s;

    printf("Enter details of student: \n");
    printf("Name: ");
    scanf("%s", &ptr->name);
    printf("USN: ");
    scanf("%s", &ptr->usn);
    printf("CGPA: ");
    scanf("%f", &ptr->cgpa);
    printf("\n");

    printf("Details of the Student are: \n");
    printf("Name: %s\n", ptr->name);
    printf("USN: %s\n", ptr->usn);
    printf("CGPA: %.2f\n", ptr->cgpa);
    printf("\n");

    return 0;
}