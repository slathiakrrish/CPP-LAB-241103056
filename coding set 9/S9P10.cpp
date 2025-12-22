#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
    int age;
};

bool compare(const Student &a, const Student &b) {
    if (a.marks != b.marks)
        return a.marks > b.marks;
    if (a.age != b.age)
        return a.age < b.age;
    return a.name < b.name;
}

int main() {
    int N;
    cin >> N;

    vector<Student> students(N);
    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].marks >> students[i].age;
    }

    sort(students.begin(), students.end(), compare);

    for (auto &s : students) {
        cout << s.name << " " << s.marks << " " << s.age << "\n";
    }

    return 0;
}
