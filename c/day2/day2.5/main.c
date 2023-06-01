#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount, years;
    printf("Enter the amount: \n");
    scanf("%i",&amount);
    printf("Enter the years: \n");
    scanf("%i",&years);
    for(int i=0;i<years;i++) {
        int intrest = amount * .1;
        amount += intrest;
        printf("total amount after %i years is: %i \n", i+1,amount );
    };
    return 0;
}
