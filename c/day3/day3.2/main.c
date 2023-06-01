#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[4][5]= {};
    for(int i=0;i<4;i++){
        for(int k=0;k<5;k++){
            printf("Enter score of student %i for subject %i is: ", i+1,k+1);
            scanf("%i",&arr[i][k]);
        }
    }

    // display
    for(int i=0;i<4;i++){
        for(int k=0;k<5;k++){
            printf("the score of student %i for subject %i is: ", i+1,k+1);
            printf("%i \n",arr[i][k]);
        }
    }
    printf("\n ------------------------------------- \n");
    // sum & avg
    int sum[4]={};
    int avg[5]={};
    for(int i=0;i<4;i++){
        for(int k=0;k<5;k++){
            sum[i] += arr[i][k];
            avg[k] += arr[i][k];
        }
    }

    // display sum
    for(int i=0;i<4;i++){
        printf("Sum scores of student %i is: %i \n",i+1,sum[i]);
    }

    printf("\n ------------------------------------- \n");

    // display avg
    for(int i=0;i<5;i++){
        avg[i] = avg[i] / 4;
        printf("Average scores of subject %i is: %i \n",i+1,avg[i]);
    }
    return 0;
}
