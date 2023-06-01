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

int main()
{
    int currentItem = 0 ;
    int coloredItem = 250;
    int normalItem = 15;
    char arr[6][20]={"Add","Display","Display All","Update","Remove","Exit"};
    char c;
    int col=10,row=5;
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
                    case 0:
                    {

                        printf("ADD");
                        break;
                    }
                    case 1:
                    {
                        printf("Display");
                        break;
                    }
                    case 2:
                    {
                        printf("Display All");
                        break;
                    }
                    case 3:
                    {
                        printf("Update");
                        break;
                    }
                    case 4:
                    {
                        printf("Remove");
                        break;
                    }
                    case 5:
                    {
                        printf("Exit");
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
    }while (c!=27);
    return 0;
}
