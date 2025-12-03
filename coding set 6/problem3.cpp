#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    double salary;
};

class Manager : public Employee
{
public:
    void setDetail()
    {
        cout<<"Enter ID:"<<'\n';
        cin>>id;
        cout<<"Enter salary:"<<'\n';
        cin>>salary;
    }
    void displayDetail()
    {
        cout<<"ID: "<<id<<'\n';
        cout<<"Salary: "<<salary<<'\n';
    }
};
int main()
{
    Manager m1;
    m1.setDetail();
    m1.displayDetail();
}