#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[4][15]={};
    for(int i=0;i<4;i++) {
        printf("Enter name of student %i: ",i+1);
        scanf("%s",name[i]);
    }
    for(int i=0;i<4;i++) {
        printf("Name of student %i is %s \n",i+1,name[i]);
    }
    return 0;
}
