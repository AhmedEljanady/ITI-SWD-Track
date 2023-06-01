#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    printf("Enter your score: \n");
    scanf("%i", &s);
    if (s>= 90) {
        printf("your grade is A");
    } else if (s>= 80 && s<90) {
        printf("your grade is B");
    } else if (s>= 70 && s<80) {
        printf("your grade is C");
    } else if (s>= 60 && s<70) {
        printf("your grade is D");
    } else  {
        printf("your grade is F");
    }
    return 0;
}
