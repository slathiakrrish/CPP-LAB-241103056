#include <iostream>
#include <fstream>
using namespace std;

int main(){
string name;
    cout<<"Enter the name of text file :"<<endl;
    cin>>name;

    ifstream myFile(name,ios::in);
    if (myFile.is_open()){
        string line;
        while(getline(myFile,line)){
            cout<<line<<endl;
        }
        myFile.close();
    }
}
