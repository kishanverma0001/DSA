#include<iostream>
using namespace std;

void max_subArraySum(int *arr,int n){
    int maxSum = INT_MIN;
    for(int start = 0;start<n;start++){
        for(int end=start;end<n;end++){
            // cout<<"("<<arr[i]<<","<<arr[j]<<") ";
            int currSum = 0;
            for(int i=start;i<=end;i++){
                currSum += arr[i];
            }
        cout<<currSum<<", ";
        maxSum = max(currSum , maxSum);
        }
        cout<<endl;
    }
    cout<<"Maximum subarrays sum = "<<maxSum<<endl;
}

int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    max_subArraySum(arr,n);
    return 0;
}