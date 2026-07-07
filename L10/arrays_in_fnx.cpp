// pass by reference 
// func and func2 both are same
#include<iostream>
using namespace std;

void func(int arr[]){
    arr[0] = 10;
    cout<<arr[0]<<endl;         //10
    cout<<arr<<endl;            //0x16fc0a4d0
}
void func2(int *ptr){
    ptr[0] = 10;
    cout<<ptr[0]<<endl;         //10
    cout<<ptr<<endl;            //0x16fc0a4d0
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    // func(arr);              // passing array name is eq. to passing e pointer
    func2(arr);
    cout<<arr[0]<<endl;     //10
    cout<<arr<<endl;        //0x16fc0a4d0
    return 0;
}