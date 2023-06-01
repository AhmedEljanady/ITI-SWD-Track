#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#define null -32

void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
 void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
 struct employee
{
int ID;
char Name[20];
char Phone[12];
float Salary;
};


int main()
{
    int currentItem = 0 ;
    int coloredItem = 245;
    int normalItem = 15;
    char arr[6][20]={"Add","Display","Display All","SUM","Average","Exit"};
    char c;
    int col=80,row=5;

    //struct employee emp[3];
    int empSize;
    printf("Enter number of employees: ");
    scanf("%i",&empSize);
    struct employee *emp;
    emp = malloc(sizeof(struct employee) * empSize);

    do
    {
       for (int i=0;i<6;i++)
        {
            if(i == currentItem){
                textattr(coloredItem);
            }else{textattr(normalItem);}
            gotoxy(col,row+i);
            printf("%i - %s",i+1,arr[i]);
            textattr(normalItem);
        }

        c = getch();
        switch(c)
        {
            case -32:
            {
                c=getch();
                switch(c)
                {
                    case 72:
                    {
                        if(currentItem>0){
                            currentItem--;
                        }else{currentItem=6;}
                        break;
                    }
                    case 80:
                    {
                        if(currentItem<6){
                            currentItem++;
                        }else{currentItem=0;}
                        break;
                    }
                    break;
                }
                break;
            }
            case 13:
            {
                system("cls");                  //CLS
                switch(currentItem)
                {
                    case 0: //add
                    {
                        printf("------------- ADD -------------\n");
                        for(int i=0;i<empSize;i++)
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
                        break;
                    }
                    case 1: //display
                    {
                        printf("------------- DISPLAY -------------\n");
                        int x;
                        printf("Enter employee number (1-%i) \n",empSize);
                        scanf("%i",&x);
                        if (x <= empSize && x>0){
                            printf("employee %i ID is: %in\n",x,emp[x-1].ID);
                            printf("employee %i Name is: %s\n",x,emp[x-1].Name);
                            printf("employee %i Phone is: %s\n",x,emp[x-1].Phone);
                            printf("employee %i Salary is: %f\n",x,emp[x-1].Salary);
                        } else {
                            printf("Employee Number NOT Found!");
                        }
                      break;
                    }
                    case 2: //display all
                    {
                        printf("------------- DISPLAY ALL -------------\n\n");
                        for(int i=0;i<empSize;i++)
                        {
                            printf("-----------------------------\n");
                            printf("-------- EMPLOYEE %i ---------\n",i+1);
                            printf("-----------------------------\n");
                            printf(">> ID: %in\n",emp[i].ID);
                            printf(">> Name: %s\n",emp[i].Name);
                            printf(">> Phone: %s\n",emp[i].Phone);
                            printf(">> Salary: %f\n",emp[i].Salary);
                        }
                        break;
                    }
                    case 3:
                    {
                        printf("------------- SUM -------------\n");
                        float x,sum;
                        for(int i=0;i<empSize;i++){
                            x = emp[i].Salary;
                            sum += x;
                        }
                        printf("sum of salaries is: %f",sum);
                        break;
                    }
                    case 4:
                    {
                        printf("------------- AVERAGE -------------\n");
                        float x,sum;
                        for(int i=0;i<empSize;i++){
                            x = emp[i].Salary;
                            sum += x;
                        }
                        printf("Average of salaries is: %f",sum/empSize);
                        break;
                    }
                    case 5:
                    {
                        printf("------------- EXIT -------------");
                        printf("GOOD BEY");
                        c=27;
                        break;
                    }
                    break;
                }
                break;
            getch();
            }
            break;
        }
    }
    while (c!=27);
    free(emp);
    return 0;
}
