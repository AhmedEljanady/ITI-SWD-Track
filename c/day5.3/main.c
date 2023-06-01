#include <stdio.h>
#include <stdlib.h>
int swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
    printf("inside F values of x and y are: %i & %i \n",*x,*y);
    printf("inside F address of x and y are: %i & %i \n\n",&x,&y);
    return 0;
}


int main()
{
    int x=5 , y=10;
    printf("before F values of x and y are: %i & %i \n",x,y);
    printf("before F address of x and y are: %i & %i \n \n",&x,&y);
    swap(&x,&y);
    printf("after F values of x and y are: %i & %i \n",x,y);
    printf("after F address of x and y are: %i & %i \n",&x,&y);

    return 0;
}
