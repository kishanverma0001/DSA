#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5, 4, 3, 9, 12};
    int max = arr[0];
    int n = sizeof(arr) / sizeof(int);
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
            cout<<"Assigning value : "<<arr[i]<<" to max \n";
        }
    } 
    cout<<"largest element of array : "<<max<<endl;
    return 0;
}

// for max and min is same code just add one more if condition for min in loop