#include <stdio.h>
#include <stdlib.h>

int main()
{

    char x;
    do {

        x = getch();

        printf("the ASCII of %c is %i \n",x,x);
    }while (x != 27);

    return 0;
}
