/* Question 1 : In a program, input the side of a square. You have to output the area of the square. 
Input : n (side) Output
: n*n (area)*/

#include<iostream>
using namespace std;

int main(){
    float n;
    cout<<"Enter side(n) of a square : ";
    cin>>n;
    float area = n * n;
    cout<<"Area of a square = "<<area<<endl;
    return 0;
}