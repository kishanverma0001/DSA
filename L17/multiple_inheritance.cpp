#include<iostream>
using namespace std;

class Teacher{
    public:
        int salary;
        string subject;

};

class Student{
    public:
        int rollno;
        float cgpa;
};

class TA : public Teacher, public Student{
    public:
        string name;
};
int main(){
    TA ta1;
    ta1.name = "kishan verma";
    ta1.subject = "C++";
    ta1.cgpa = 8.28;
    ta1.salary = 12400;

    cout<<ta1.name<<endl;
    cout<<ta1.cgpa<<endl;
    cout<<ta1.subject<<endl;
    cout<<ta1.salary<<endl;
    return 0;
}