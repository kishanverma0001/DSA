/*Question 5 : For any 3 digit number check whether it’s an Armstrong number or not.Armstrong number is a number that is equal to the sum of cubes of its digits.Eg : 371 is an armstrong number.
3*3*3 + 7*7*7 + 1*1*1 = 371
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a three digit number : ";
    cin>>num;

    int a = num % 10;
    int x = num / 10;
    int b = x % 10;
    int y = x / 10;
    int c = y;

    int armstrong = (a * a * a) + (b * b * b) + (c * c * c);
    if(num == armstrong){
        cout<<num<<" is a armstrong number."<<endl;
    }else{
        cout<<num<<" is not a armstrong number."<<endl;
    }
    return 0;
}