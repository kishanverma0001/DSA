//whith space
#include<iostream>
using namespace std;
void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

void reverseArr(int *arr,int n){
    int copyArr[n];
    for(int i=0;i<n;i++){
        int j = n-i-1;
        copyArr[i] = arr[j];
    }for(int i=0;i<n;i++){
        arr[i] = copyArr[i];
    }
    printArr(arr,n);
}
int main(){
    int arr[] = {5, 4, 3, 9, 2};
    reverseArr(arr,5);
    return 0;
}