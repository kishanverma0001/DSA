#include<iostream>
using namespace std;
// void printArr1(int nums[]){
//     cout<<sizeof(nums)<<endl; // 8 >> nums -> pointer 8-> int pointer
//     int n = sizeof(nums) / sizeof(int);
//     for(int i=0;i<n;i++){
//         cout<<nums[i]<<", ";
//     }
//     cout<<endl;
// }
void printArr(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<< nums[i]<<", ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(int);
    printArr(arr,5);
    return 0;
}