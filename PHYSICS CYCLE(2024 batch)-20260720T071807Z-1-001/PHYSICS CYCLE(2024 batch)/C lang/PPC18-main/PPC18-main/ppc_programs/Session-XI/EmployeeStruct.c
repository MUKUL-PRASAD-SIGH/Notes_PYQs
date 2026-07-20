#include<stdio.h>
#include<string.h>
struct Employee
        {
                char name[50];
                long salary;
                char address[500];
        };
int main(void)
{
        struct Employee e1; int i;
        printf("Enter the name of the employee: ");
        fgets(e1.name,50,stdin);
        printf("Enter the address of the employee (Limit: 500 characters): ");
        fgets(e1.address, 200, stdin);
        printf("Enter the salary of the employee in INR: ");
        scanf("%ld",&e1.salary);
        for(i=0;i<50;i++)
                if(e1.name[i] == '\n')
                        e1.name[i] = '\0';
        for(i=0;i<200;i++)
                if(e1.address[i] == '\n')
                        e1.address[i] = '\0';

        printf("\nThe name of the Employee is: %s",e1.name);
        printf("\nThe salary of the Employee is: INR %ld",e1.salary);
        printf("\nThe address of the Employee is: %s",e1.address);
}


