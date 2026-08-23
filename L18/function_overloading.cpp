#include<iostream>
using namespace std;

class Print{
    public:
        void show(int x){
            cout<<"int: "<<x<<endl;
        }

        void show(string str){
            cout<<"string: "<<str<<endl;
        }

        int add(int a, int b){
            return a + b;
        }

        int add(int a, int b, int c){
            return a + b + c;
        }


};

int main(){
    Print obj1;

    obj1.show(5);
    obj1.show("hello");
    cout<<obj1.add(1,2)<<endl;
    cout<<obj1.add(5, 7, 9)<<endl;
    return 0;
}