#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string filename;
    cout<<"Enter filename :";
    cin>>filename;
    
    fstream myfile(filename,ios::in);
    if(myfile.is_open()){
        cout<<"File Already Exists!"<<endl;
    }
    else{
        cout<<"Creating new file..."<<endl;
        fstream myfile(filename,ios::out);
        myfile<<"This file was automatically created because it doesnot exists!";
    }
    myfile.close();

}
