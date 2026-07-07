#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5, 4, 3, 9, 12};
    int min = arr[0];
    int n = sizeof(arr) / sizeof(int);
    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
            cout<<"Assigning value "<<arr[i]<<" to min \n";
        }
    }
    cout<<"largest element of array : "<<min<<endl;
    return 0;
}