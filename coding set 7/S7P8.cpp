#include <iostream>
#include <stdexcept>

using namespace std;

int main(){
    string x;
    cout<<"Enter the integer"<<endl;
    cin>>x;
     try{
        if ( x[0] =='-'){
            throw std::invalid_argument("Negative not Allowed") ;
        }
        else{
            cout<<x<<endl;
        }
     }
     catch( exception &e){
        cout<<e.what()<<endl;
     }
}
