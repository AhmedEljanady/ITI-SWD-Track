#include <iostream>

using namespace std;

void insertionSort(int arr[],int n)
{
    int key,j;                  // 0  1  2  3  4  5  6
    for (int i=1;i<n;i++)       // 80 90 60 40 70 50 30
    {
        key = arr[i]; //90
        j = i-1;      //0
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j -=1;
        }
        arr[j+1] = key;//90
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}


int main()
{
    int arr[] = { 80, 90, 60, 40, 70, 50, 30 };
    insertionSort(arr,7);
    printArray(arr,7);
    return 0;
}
