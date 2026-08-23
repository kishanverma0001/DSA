#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
public:
    Complex(int r, int i){
        real = r;
        img = i;
    }

    void show(){
        cout<<"complex number is "<<real<<" + "<<img<<"i"<<endl;
    }

    Complex operator - (const Complex &obj){ // using const by suggestion const mean obj is read-only
        int resReal = this->real - obj.real;
        int resImg = this->img - obj.img;

        Complex c(resReal , resImg);
        return c;
    }
};

int main(){
    Complex c1(2, 3);
    Complex c2(4,5);
    // c1.show();
    // c2.show();

    Complex c3 = c2 - c1;
    c3.show();
    return 0;
}