#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    double basicSalary, hra, da;
    double netSalary = 0;

public:
    Employee()
    {
        id = 0;
        name = "No Name";
        basicSalary = hra = da = netSalary = 0;
    }

    Employee(int i, string n, double b, double h, double d)
    {
        id = i;
        basicSalary = b;
        name = n;
        hra = h;
        da = d;
    }

    void setData()
    {
        cout<<"Enter name of Employee: "<<'\n';
        cin>>name;

        cout<<"Id: "<<'\n';
        cin>>id;

        cout<<"Basic Salary: "<<'\n';
        cin>>basicSalary;

        cout<<"House rent allowance(HRA): "<<'\n';
        cin>>hra;

        cout<<"Dearness Allowance(DA): "<<'\n';
        cin>>da;

        netSalary = basicSalary + hra + da;
        
    }
 
    double getNetSalary()
    {
        return netSalary;
    }

    string getName()
    {
        return name;
    }

    

};

int main()
{
    int n;
    cout <<"Enter number of Employees: " << '\n';
    cin >> n;

    Employee arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i].setData();
    }
  
    double temp = 50000;
    cout<<"Employees earning above 50k are: "<<'\n';
    for(int i=0; i<n; i++)
    {
        if(temp < arr[i].getNetSalary())
        {
            cout<<arr[i].getName()<<'\n';
        }
    }
}