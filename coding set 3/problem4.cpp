#include<iostream>
using namespace std;

class Employee{
    double id;
    float salary;
    public:
    Employee(){
        cout<<"Default constructor is created"<<'\n';
    }
    Employee(double i, float s){
        cout<<"Parameterized constructor is created"<<'\n';
        id = i;
        salary = s;
    }
    
    void getData(){
        cout<<"Id is "<<id<<'\n';
        cout<<"Salary is "<<salary<<'\n';
    }
};
int main(){
    Employee E1(122334, 35000);
    Employee E2(112233, 30000);
    E1.getData();
    E2.getData();
    return 0;
}