#include<iostream>
using namespace std;

void max_sum_subArray(int *arr,int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0;i<n;i++){
        currSum  += arr[i];
        maxSum = max(currSum , maxSum);
        if(currSum < 0 ){
            currSum = 0;
        }
    }
    cout<<"Maximum sum of sub arrays = "<<maxSum<<endl;
}
int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    max_sum_subArray(arr,n);
    return 0;
}