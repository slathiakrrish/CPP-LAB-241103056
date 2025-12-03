#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
};
class Student : public Person
{
public:
    string course;
     void input()
    {
        cout << "Enter name:" << '\n';
        cin >> name;
    
        cout << "Enter age:" << '\n';
        cin >> age;
        
        cout << "Enter course:" << '\n';
        cin >> course;
    }
    void display()
    {
        cout<<"Name: "<<name<<'\n';
        cout<<"Age: "<<age<<'\n';
        cout<<"Course: "<<course<<'\n';
    }
    
};

    
int main()
{
    Student s1;
    s1.input();
    s1.display();
}