#include <stdio.h>
#include <stdlib.h>

struct Driver
{
    char name[34];
    char DLno[50];
    char routes[30];
    int kms;
};

int main()
{
    struct Driver d1, d2, d3;
    printf("Enter the details of driver\n");
    printf("Enter the name of driver1\n");
    scanf("%c\n", &d1.name);
    printf("Enter the DLno of driver1\n");
    scanf("%c\n", &d1.DLno);
    printf("Enter the routes of driver1\n");
    scanf("%c\n", &d1.routes);
    printf("Enter the kms of driver1\n");
    scanf("%d\n", &d1.kms);

    printf("Enter the details of driver2\n");
    scanf("%c\n", &d2.name);
    printf("Enter the DLno of driver2\n");
    scanf("%c\n", &d2.DLno);
    printf("Enter the routes of driver2\n");
    scanf("%c\n", &d2.routes);
    printf("Enter the kms of driver2\n");
    scanf("%d\n", &d2.kms);

    printf("Enter the details of driver3\n");
    scanf("%c\n", &d3.name);
    printf("Enter the DLno of driver3\n");
    scanf("%c\n", &d3.DLno);
    printf("Enter the routes of driver3\n");
    scanf("%c\n", &d3.routes);
    printf("Enter the kms of driver3\n");
    scanf("%d\n", &d3.kms);

    printf("********The details of drivers are********\n");
    printf("For driver NO 1:\n name is %c\n DLno is %c\n routes are %c\n kms are %d\n", &d1.name, &d1.DLno, &d1.routes, &d1.kms);
    printf("For driver NO 2:\n name is %c\n DLno is %c\n routes are %c\n kms are %d\n", &d2.name, &d2.DLno, &d2.routes, &d2.kms);
    printf("For driver NO 3:\n name is %c\n DLno is %c\n routes are %c\n kms are %d\n", &d3.name, &d3.DLno, &d3.routes, &d3.kms);
}