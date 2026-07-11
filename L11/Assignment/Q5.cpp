#include<iostream>
using namespace std;

void singleElement(int *nums,int n){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(nums[i] == nums[j]){
            }
        }
    }
}
int main(){
    int nums[] = {2, 2, 1};
    int n = sizeof(nums) / sizeof(int);
    singleElement(nums,n);
    return 0;
}