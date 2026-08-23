#include<iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;
};

class Student : public Person{
    public:
        string studentID;

        Student(string name, int age, string studentID){
            this->name = name;
            this->age = age;
            this->studentID = studentID;
        }

        void displayStudentInfo(){
            cout<<"("<<name<<", "<<age<<", "<<studentID<<")"<<endl;
        }
};
int main(){
    Student s1("Kishan" , 22 , "24UADS1025");
    s1.displayStudentInfo();
    return 0;
}