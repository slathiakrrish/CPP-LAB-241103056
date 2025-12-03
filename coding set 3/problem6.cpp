#include<iostream>
using namespace std;

class FileHandler{
    public:
    FileHandler(){
        cout<<"File opened"<<'\n';
    }
    ~FileHandler(){
        cout<<"File closed";
    }
};
int main(){
    FileHandler F1;
    return 0;
    
}