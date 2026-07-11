#include<iostream>
using namespace std;
bool containsDuplicate(int *nums , int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++)
        if(i != j){
            if(nums[i] == nums[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    // int nums[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int nums[] = {1,2,3,4,1,5};
    int n = sizeof(nums) / sizeof(int);
    
    cout<<containsDuplicate(nums,n)<<endl;
    return 0;
}