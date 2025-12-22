#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter first variable"<<endl;
    cin>>a;
    cout<<"Enter second variable"<<endl;
    cin>>b;
    if (b==0){
        cout<<"Error"<<endl;
    }
    else{
        c = a / b;
        cout<<"The result :"<<c<<endl;
    }
}
