#include<iostream>
using namespace std;

class Student{
    public:
    int rollno;
    string name;

    void getData(int r, string n){
        rollno = r;
        name = n;
}
    void displayData(){
        cout<<"Name is: "<<name<<'\n'<<"Roll no is: "<<rollno<<'\n';
    }
     
};

int main(){
    Student S1, S2;
    S1.getData(15, "Aarav");
    S2.getData(25, "Aditya");
    S1.displayData();
    S2.displayData();
    return 0;
}