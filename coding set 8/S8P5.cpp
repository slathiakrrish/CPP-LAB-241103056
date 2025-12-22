#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of entries" << endl;
    cin >> n;

    fstream myfile;
    myfile.open("yyy.txt", ios::app);
    for (int i = 0; i < n; i++)
    {
        int roll;
        string name;
        double marks;
        cout << "Enter name of student " << i + 1 << ":" << endl;
        cin>>name;
        cout << "Enter rollno of student " << i + 1 << ":" << endl;
        cin>>roll;
        cout << "Enter marks of student " << i + 1 << ":" << endl;
        cin>>marks;
        myfile<<roll<<" "<<name<<" "<<marks<<endl;
    }
    myfile.close();
    myfile.open("yyy.txt",ios::in);
    int r;
    string n1;
    double m;
    cout<<"Details of students are :"<<endl;
    while(myfile>>r>>n1>>m){
        cout<<r<<endl;
        cout<<n1<<endl;
        cout<<m<<endl;
    }
}
