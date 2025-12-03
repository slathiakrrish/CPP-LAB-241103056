#include <iostream>
using namespace std;

class Person
{
protected:
string name;
public:
Person(string n)
{
    name = n;
}
};

class Employee : public Person
{public:
    int age;
    Employee(string n, int a) : Person(n)
    {
        age = a;
    }

};

class Manager : public Employee
{public:
    double salary;
    Manager(string n, int a, double s) : Employee(n, a)
    {
        salary = s;
    }
   
    void displayDetail()
    {
        cout<<"Name: "<<name<<'\n';
        cout<<"Age: "<<age<<'\n';
        cout<<"Salary: "<<salary<<'\n';
    }

};
int main()
{
    Manager m1("aarav", 20, 5000);
    m1.displayDetail();
}