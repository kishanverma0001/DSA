// without extra space  >> 2 pointer approach

#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

void reverseArr(int *arr,int n){
    int start = 0,end = n-1;
    while(start < end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start],arr[end]);
        start++;
        end--;     
    }
    printArr(arr,n);
}

int main(){
    int arr[] = {5, 4, 3, 9, 2};
    reverseArr(arr,5);

    return 0;
}