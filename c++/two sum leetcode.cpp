#include <iostream>

using namespace std;
    void twoSum(int nums[], int target) {
        int a,b,c;
        int l = sizeof(nums);
        for(int i = 0;i<l;i++){
            for(int j = 0;j<l;j++ ){
                if(nums[i]+nums[j] == target)
                {
                   // a = {i,j};
                    cout <<"[" <<i<<","<<j<<"]"<<endl;
                    break;
                }
            }
        }
    }
int main()
{
int a[] = {2,7,11,15};
twoSum(a,9);

return 0;
}
