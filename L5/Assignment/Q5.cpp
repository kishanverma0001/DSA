/*Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.(Assume N >= 2)
Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ….
This is a series where each number is a sum of previous 2 numbers in the series. Eg
: 1 = 0 + 1,
2 = 1 + 1,
3 = 1 + 2,
5 = 2 + 3,
8 = 3 + 5 & so on.
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int sum1 = 0;
    int sum2 = 1;

    int sum = 0;
    for(int i = 1;i <= num;i++){
        int sum = sum1 + sum2;
        cout<<sum1<<" ";
        sum1 = sum2;
        sum2 = sum;
    }
    cout<<endl;
    return 0;
}
