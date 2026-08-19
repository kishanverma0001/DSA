#include<iostream>
using namespace std;

class Animal{ // base class
    public:
        void eat(){
            cout<<"eats\n";
        }

        void breath(){
            cout<<"breaths\n";
        }
};

class Bird : public Animal{ // derived class
    public:
        void fly(){
            cout<<"flies"<<endl;
        }
};

class Fish : public Animal{ // derived class
    public:
        void swim(){
            cout<<"swims"<<endl;
        }
};

class Mammal : public Animal{ // derived class
    public: 
        void walk(){
            cout<<"walks"<<endl;
        }
};
int main(){
    cout<<"fish class"<<endl;
    Fish f1;
    f1.breath();
    f1.eat();
    f1.swim();

    cout<<"bird class"<<endl;
    Bird b1;
    b1.breath();
    b1.eat();
    b1.fly();

    cout<<"mammal class"<<endl;
    Mammal m1;
    m1.breath();
    m1.eat();
    m1.walk();
    return 0;

}