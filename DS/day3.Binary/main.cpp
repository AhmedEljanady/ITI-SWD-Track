#include <iostream>

using namespace std;

int BinarySearch(int arr[],int num)
{
    int low = 0;
    int high = sizeof(arr)-1;
    while(low<=high)
    {
        int mid = (high + low)/2;
        int guess = arr[mid];
        if(guess==num){
            return mid;
        }
        else if(guess < num) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return -1;
}
/*int BinarySearch(int arr[],int num)
{
    int x = sizeof(arr);
    for(int i = 0;i<x;i++){
        if (arr[i]==num){
            return ff(arr,num);
        }
    cout<< "NOT FOUND!!";
    }
}*/
int main()
{
    int arr[] = {1,3,4,5,7,9,10,13,14,16,20};
    int x = BinarySearch(arr,10);
    cout<<x;
    return 0;
}
