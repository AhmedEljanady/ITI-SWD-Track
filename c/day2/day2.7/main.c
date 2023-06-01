#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sum;
    int x;
    while (sum <= 10000) {
        printf("enter number: ");
        scanf("%i",&x);
        sum += x;
        printf("%i\n",sum);
    }

    return 0;
}
