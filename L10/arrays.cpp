#include<iostream>
using namespace std;

int main(){
    // without initialzing >> stores garbedge values
    cout<<"Without initialzing"<<endl;
    int marks[50]; // 0 to 49
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<"\n"<<endl;
    // cout<<marks[50]<<"\n"<<endl;  //array index 50 is past the end of the array

    // initilazing with some values then at remaining positions value is 0
    cout<<"initilazing with some values"<<endl;
    int marks2[50] = {1, 2, 3}; // 0 to 49
    cout<<marks2[0]<<endl;
    cout<<marks2[1]<<endl;
    cout<<marks2[2]<<endl;
    cout<<marks2[5]<<endl;
    cout<<marks2[10]<<"\n"<<endl;

    // without defining array size
    cout<<"without defining array size"<<endl;
    int marks3[] = {1, 2, 3};
    cout<<marks3[0]<<endl;
    cout<<marks3[1]<<endl;
    cout<<marks3[2]<<endl;
    // cout<<marks3[10]<<endl; // warning
    int length = sizeof(marks3) / sizeof(int);
    cout<<"size of marks3 : "<<sizeof(marks3)<<endl; // 12 >> 3 * 4 bytes
    cout<<"length of marks3 : "<<length<<endl; // 12 / 4 = 3
    return 0;
}