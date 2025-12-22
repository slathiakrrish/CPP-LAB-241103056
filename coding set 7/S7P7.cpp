#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
    int x;
    cout<<"Enter the value of x :"<<endl;
    cin>>x;

    try{
        if (x==0){
            throw "Zero" ;
        }
        else{
            cout<<"OK"<<endl;
        }
    }
    catch ( const char *str){
        cout<<"Caught "<<str<<endl;
    }
}
