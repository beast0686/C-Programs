#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    fptr = fopen("18.txt","w");

    char name[50];
    char usn[20];
    char branch[5];

    printf("Enter Student details: \n");
    printf("Name: ");
    gets(name);
    printf("USN: ");
    gets(usn);
    printf("Branch: ");
    gets(branch);

    fprintf(fptr, "Student Details: \n");
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "USN: %s\n", usn);
    fprintf(fptr, "branch: %s\n", branch);

    printf("Student Details entered in file\n");

    fclose(fptr);

    return 0;
}