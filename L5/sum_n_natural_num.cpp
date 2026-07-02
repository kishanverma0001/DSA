#include<iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    cout<<"Enter a number : ";
    cin>>num;
    for(int i = 0;i < num;i++){
        sum += (i+1);
    }
    cout<<"Sum of 1st "<<num<<" natural number = "<<sum<<endl;
    
 return 0;
}