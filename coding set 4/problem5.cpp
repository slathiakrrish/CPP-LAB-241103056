#include <iostream>
using namespace std;

class Student
{
    string name;
    int marks;

public:
    Student(string n = "NA", int m = 0)
    {
        name = n;
        marks = m;
    }

    string getName() const{ return name; }
    int getMarks() const{ return marks; }

    void display()
    {
        cout << "Name of Student: " << name << '\n';
        cout << "Marks: " << marks << '\n';
    }
};

Student compare(const Student &s1, const Student &s2)
{
    if (s1.getMarks() > s2.getMarks())
    {
       return s1;
    }
    else
    {
       return s2;
    }
}

int main()
{
    Student S1("Rohit", 92);
    Student S2("Virat", 95);
    Student topper = compare(S1, S2);
    topper.display();
    return 0;
}