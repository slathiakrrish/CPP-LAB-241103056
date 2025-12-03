#include <iostream>
using namespace std;

class Student
{
    int rollno;
    string name;
    int marks[5];
    int total = 0;

public:
    void setData()
    {
        cout << "Enter name: " << '\n';
        cin >> name;

        cout << "Enter rollno: " << '\n';
        cin >> rollno;

        cout << "Enter marks: " << '\n';
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }

        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
    }

    string showName()
    {
        return name;
    }

    int totalMarks()
    {
        return total;
    }
};

int main()
{
    int n;
    cout << "Enter number of students: " << '\n';
    cin >> n;

    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].setData();
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i].totalMarks();
        if (arr[i].totalMarks() > max)
        {
            max = arr[i].totalMarks();
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (max == arr[i].totalMarks())
        {
            cout << "Student with Highest Marks is: " << arr[i].showName() << " " << arr[i].totalMarks();
        }
    }
}