#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    char arr[4][15];
    int *apt;
    *apt = arr;

    for(int i=0;i<4;i++){
        printf("Enter student %i: ",i+1);
        scanf("%s",&apt[i]);
    }
    for(int i=0;i<4;i++){
        printf("name of student %i is: %s\n",i+1,&apt[i]);
    }
*/
    int arr[4];
    int *apt;
    *apt = arr;
    for(int i=0;i<4;i++){
        printf("Enter grades %i: ",i+1);
        scanf("%i",apt);
        apt++;
    }
    apt = arr;
    for(int i=0;i<4;i++){
        printf("name of grades %i is: %i\n",i+1,*apt);
        apt++;
    }

*/
    return 0;
}
