// Question 1 : Write a function to check if a number is a palindrome in C++.
// (121 is a palindrome, 321 is not)

#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int num = n;
    int result = 0;

    int digit;
    while(num > 0){
        digit = num % 10;
        result = result * 10 + digit;
        num = num / 10;
    }
    if(n == result){
        return true;
    }else{
        return false;
    }
}
int main(){
    cout<<isPalindrome(121)<<endl;
    return 0;
}