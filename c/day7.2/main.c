#include <stdio.h>
#include <stdlib.h>

int factorial(int x)
{
    if (x==1 || x==0){
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}

int power(int x,int y)
{
    if (y==1){
        return x;
    } else if (y == 0){
        return 1;
    } else {
        return x * power(x,y-1);
    }
}
int main()
{
    int a = factorial(5);
    printf("%i \n",a);
    //printf("Factorial of %i is %i \n",x,a);

    int b = power(2,4);
    printf("%i \n",b);
    return 0;
}
