#include <iostream>
using namespace std;

class Person
{
    public:
    string name;
};


class Teacher : public virtual Person
{
public:
    int salary;
};


class Student : public virtual Person
{
public:
    string course;
};


class TA : public Teacher, public Student
{
    public:
    string guide;
};

int main(){
    TA obj1;
    obj1.name = "John";
    cout<<obj1.name;
}
