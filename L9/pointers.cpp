#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    
    float pi = 3.14;
    float *ptr2 = &pi;

    cout<<&a<<" = "<<ptr<<endl;
    cout<<&pi<<" = "<<ptr2<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr2)<<endl;

    // pointer to pointer
    int **pptr = &ptr;
    cout<<pptr<<" = "<<&ptr<<endl;
    // Dereferece operator
    cout<<*ptr<<endl;

    *ptr = 20; // a = 20;
    cout<<"a = "<<a<<endl;
    return 0;
}