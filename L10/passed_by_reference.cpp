// Arrays are passed by reference

#include<iostream>
using namespace std;

int main(){
    // int a = 5;
    // int *ptr = &a;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr2 = &arr[0];
    cout<<ptr2<<endl;  // 0x16b12a4d0

    cout<<arr<<endl; // 0x16b12a4d0
    cout<<*arr<<endl;
    cout<<arr + 1<<endl; //0x16d7464d4
    cout<<*(arr+1)<<endl;
    return 0;
}