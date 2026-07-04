// Question 3 : Write a function which takes 2 numbers as parameters (a & b) and
// outputs : a^2 + b^2 + 2*ab.

#include<iostream>
#include<cmath>
using namespace std;

double myfunction(double a,double b){
    int fnx = ((a * a) + (b * b) + (2 * a * b));
    cout<<fnx<<endl;
    return fnx;
}
    

int main(){
    myfunction(2,3);
}