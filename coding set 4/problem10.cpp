#include <iostream>
using namespace std;

class Employee
{
    int id;
    double salary;

    public:
    Employee(int i = 0, double s = 0)
    {
        id = i;
        salary = s;
    }

   double getSalary() {return salary;}
   void setSalary(double s) { salary = s;}

    void updateSalary(Employee &e)
    {
        this->salary = e.salary;
    }
   void display()
   {
        cout<<" "<<salary<<'\n';
   }
};

void swap(Employee *e1, Employee *e2)
{
    double temp;
    temp = e1->getSalary();
    e1->setSalary(e2->getSalary());
    e2->setSalary(temp);
}

int main(){
    Employee E1(1234, 35000);
    Employee E2(5678, 40000);
    Employee E3(9101, 45000);
    cout<<"Salary of Employee 1 before swapping:"<<'\n';
    E1.display();
    cout<<"Salary of Employee 2 before swapping"<<'\n';
    E2.display();
    cout<<"Salary of Employee 3:"<<'\n';
    E3.display();

    cout<<"Updated Salary of Employee 3:"<<'\n';
    E3.updateSalary(E2);
    E3.display();

    swap(&E1, &E2);
    cout<<"Salary of Employee 1 after swapping:"<<'\n';
    E1.display();
    cout<<"Salary of Employee 2 after swapping"<<'\n';
    E2.display();

    return 0;

}