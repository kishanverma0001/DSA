// Question 5 : Write a function that accepts a character (ch) as parameters & returns
// the character that occurs after ch in the English alphabet.
// Eg : input = ‘c’, return value = ‘d’
// Note : for ch = ‘z’, return ‘a’.

#include<iostream>
using namespace std;

char ch_after(char ch){
    if(ch =='z'){
        ch ='a';
    }else if(ch == 'Z'){
        ch ='A';
    }else{
        ch++;
    }
    cout<<"charcter after : "<<char(ch)<<endl;
    return char(ch);
}

int main(){
    ch_after('M');
    return 0;
}
