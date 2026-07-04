//WAF to find the products of a & b

#include<iostream>
using namespace std;

float product(float a, float b){
    float product = a * b;
    cout<<"Product of "<<a<<" & "<<b<<" is : "<<product<<endl;
    return product;
}
int main(){
    product(1.7,4);
    return 0;
}