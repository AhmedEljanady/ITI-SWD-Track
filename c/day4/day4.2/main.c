#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char fname[15];
    char lname[15];
    char fullName[31];
    printf("Enter first name: ");
    scanf("%s", fname);
    printf("Enter last name: ");
    scanf("%s",lname);

    strcat(fullName,fname);
    strcat(fullName," ");
    strcat(fullName,lname);
    printf("\n Welcome %s \n",fullName);
    return 0;
}
