#include<iostream>
using namespace std;

void max_subArraySum(int *arr,int n){
    int maxSum = INT_MIN;
    for(int start = 0;start<n;start++){
        int currSum = 0;
        for(int end=start;end<n;end++){
            currSum +=  arr[end];
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

// time complexity O(n^2) >> two for loops only