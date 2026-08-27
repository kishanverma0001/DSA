#include<iostream>
using namespace std;

bool isSorted(int arr[],int n,int i){
        if(i == n-1){
            return true;
        }if(arr[i] > arr[i+1]){
            return false;
        }
        return isSorted(arr,n , i+1) ;
}
int main(){
    int arr1[] = {1,3,5,6,9};
    int arr2[] = {1,1,3,2,6,10,-4,1};
    cout<<isSorted(arr1,5,0)<<endl;
    cout<<isSorted(arr2,8,0)<<endl;
    return 0; 
} 