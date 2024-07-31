#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct election
{
    char name[50];
    char cid[20];
    int votes;
} ELECTION;

int main()
{
    ELECTION e[10];

    int n;
    printf("Enter the number of candidates: ");
    scanf("%d", &n);

    int i;
    for (i=0; i<n; i++)
    {
        printf("Enter the details of candidate %d: \n", i+1);
        printf("Name: ");
        scanf("%s", &e[i].name);
        printf("Candidate ID: ");
        scanf("%s", &e[i].cid);
        printf("Number of Votes secured: ");
        scanf("%d", &e[i].votes);
        printf("\n");
    }

    int win=0;
    for (i=0; i<n; i++)
    {
        if (e[i].votes > e[win].votes)
        {
            win = i;
        }
    }

    printf("Candidate %d wins the elections: \n", win+1);
    printf("Name: %s\n", e[win].name);
    printf("Candidate ID: %s\n", e[win].cid);
    printf("Numver of Votes secured: %d\n", e[win].votes);
    printf("\n");

    return 0;
}