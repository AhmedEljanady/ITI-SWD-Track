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
    char arr [5][12]={"Add","Display","Display all","Remove","Exit"};
    char c = getch();
    int col=5, row=10;

    do {

        for(int i=0;i<6;i++){
            gotoxy(col,row[i]);
            printf("%s",arr[i]);
        }
        getch();
        switch(c){
            case '-32':
            {
                c= getch();
                switch(c)
                {
                    case '72':

                    break;
                    case '80':

                    break;
                }

            break;
            }


        }










    }while (c != 27);
    return 0;
}
