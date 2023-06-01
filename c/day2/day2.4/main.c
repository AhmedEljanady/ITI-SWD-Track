#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("choose your favorite color: \n");
    printf("choose R for Red \n");
    printf("choose B for Blue \n");
    printf("choose Y for Yellow \n");
    printf("choose G for Green \n");
    char x;

    do{
    x= getchar();

    switch(x){

        case'R':
        case'r':
            printf("Red \n");
            break;
        case'B':
        case'b':
            printf("Blue \n");
            break;
        case'Y':
        case'y':
            printf("Yellow \n");
            break;
        case'G':
        case'g':
            printf("Green \n");
            break;

    }
    }
    while(x != 27);
    return 0;
}
