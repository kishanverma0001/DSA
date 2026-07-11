#include<iostream>
using namespace std;

void max_subArrayProduct(int *nums,int n){
    int maxProduct = INT_MIN;
    int start;
    int end;
    int i;
    for( start = 0;start<n;start++){
        for( end=start;end<n;end++){
            int currProduct = 1;
            for(i=start;i<=end;i++){
                currProduct *= nums[i];
            }
        maxProduct = max(currProduct , maxProduct);
        cout<<"("<<nums[start]<<","<<nums[end]<<")"<<endl;
        }
    }
    // cout<<"("<<nums[i]<<","<<nums[end]<<")"<<endl;
    cout<<"Maximum subarrays Product = "<<maxProduct<<endl;
}


int main(){
    int nums[] = {2, 3, -2, 4};
    int n = sizeof(nums)/ sizeof(int);
    max_subArrayProduct(nums,n);
    return 0;
}