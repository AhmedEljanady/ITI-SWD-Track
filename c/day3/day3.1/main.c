#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int main()
{

    char x;
    int arr[5] = {};
    int sum = 0;
    int max,min;
    char temp;


    do{
        system("clear");
        printf("choose from the menu: \n");
        printf("choose A for Add \n");
        printf("choose E for Edit \n");
        printf("choose D for Display \n");
        printf("choose R for Remove \n");
        x= getch();

    switch(x){

        case'A':
        case'a':
            {
            printf("Add \n");
            for (int i=0;i<5;i++)
            {
                printf("Enter score of subject %i: ", i+1);
                scanf("%i",&arr[i]);
            }
            break;
            }
        case'E':
        case'e':
            {
            printf("Edit \n");
            break;
            }
        case'D':
        case'd':
            {
            printf("Display \n");
            for(int i=0;i<5;i++){
                printf("Score of subject %i is: %i \n", i+1, arr[i]);
            }
            // scanf("%c",&temp);
            break;
            }
        case'R':
        case'r':
            {
            printf("Remove \n");
            break;
            }

    }
        getch();
    }
    while(x != 27);

    /*
    int arr[5] = {};
    int sum = 0;
    int max,min;

    // fill array
    for (int i=0;i<5;i++) {
        printf("Enter score of subject %i: ", i+1);
        scanf("%i",&arr[i]);
    }
    // display
    printf("\n Your scores are: \n");
    for(int i=0;i<5;i++){
        printf("Score of subject %i is: %i \n", i+1, arr[i]);

    }

    // total
    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    printf("\n Your total score is: %i \n", sum);

    // MAX & MIN

    max = arr[0];
    min = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("your maximum score is: %i \n",max);
    printf("your minimum score is: %i \n",min);
    */
    return 0;
}
