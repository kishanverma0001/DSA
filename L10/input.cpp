#include<iostream>
using namespace std;

int main(){
    // int arr[5];
    // int n = sizeof(arr)/ sizeof(int);

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<", ";
    // }
    // cout<<endl;

    // input size of array
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

     int arr2[n];
    // int n = sizeof(arr)/ sizeof(int);

    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<", ";
    }
    cout<<endl;
    return 0;
}