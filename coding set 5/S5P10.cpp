#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    int marks[3];
    int total;
    char grade;

    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        total = 0;
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks " << i+1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }
        int avg = total / 3;
        if (avg >= 90) grade = 'A';
        else if (avg >= 80) grade = 'B';
        else if (avg >= 70) grade = 'C';
        else if (avg >= 60) grade = 'D';
        else grade = 'F';
    }

    void display(int rank) {
        cout << "Rank " << rank << ": "
             << "Roll No: " << rollNo
             << "  Name: " << name
             << "  Total: " << total
             << "  Grade: " << grade << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++) s[i].input();

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (s[j].total < s[j+1].total) {
                Student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }

    cout << "\nRank List:\n";
    for (int i = 0; i < n; i++)
        s[i].display(i + 1);

    return 0;
}
