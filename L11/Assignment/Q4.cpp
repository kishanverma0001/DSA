#include<iostream>
using namespace std;

void twoSum(int *nums,int n,int target){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(nums[i] + nums[j] == target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
}
int main(){
    // int nums[] = {2, 7, 11, 15};
    int nums[] = {3, 2, 4};
    int n = sizeof(nums) / sizeof(int);
    twoSum(nums,n,6);
    return 0;
}