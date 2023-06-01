#include <stdio.h>
#include <stdlib.h>

struct employee
{
int ID;
char Name[20];
char Phone[12];
float Salary;
};


int main()
{
    struct employee emp[5];


    for(int i=0;i<5;i++)
    {
        printf("Enter employee %i ID: ",i+1);
        scanf("%i",&emp[i].ID);
        printf("Enter employee %i Name: ",i+1);
        scanf("%s",emp[i].Name);
        printf("Enter employee %i Phone Number: ",i+1);
        scanf("%s",emp[i].Phone);
        printf("Enter employee %i Salary: ",i+1);
        scanf("%f",&emp[i].Salary);
    }
    for(int i=0;i<5;i++)
    {
        printf("\n-----------------------------\n");
        printf("Address of employee %i: %i\n",i+1,&emp[i]);
        printf("employee %i ID is: %in\n",i+1,emp[i].ID);
        printf("employee %i Name is: %s\n",i+1,emp[i].Name);
        printf("employee %i Phone is: %s\n",i+1,emp[i].Phone);
        printf("employee %i Salary is: %f\n",i+1,emp[i].Salary);
    }



    return 0;
}
