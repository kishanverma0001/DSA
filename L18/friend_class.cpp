#include<iostream>
using namespace std;

class A{
    string secret = "secret data";
    friend class B;
    friend void revalSecret(A &obj);
};

class B{ // becomes a friend class of b
    public:
        void showSecrect(A &obj){
            cout<< obj.secret<<endl;
        }
};

void revalSecret(A &obj){ // freind function
    cout<<obj.secret<<endl;
}
int main(){
    A a1;
    B b1;
    b1.showSecrect(a1);
    revalSecret(a1);
    return 0;
}