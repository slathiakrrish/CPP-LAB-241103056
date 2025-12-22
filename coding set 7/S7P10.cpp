#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
 
class filecheck : public exception{
    public:
    const char *what(){
        return "Not txt";
    }
};

int main(){
    string x;
    cout<<"Enter the name of the file:"<<endl;
    cin >> x;
    try{
        if (x.rfind(".txt")!= x.npos){
            cout<<"Ok"<<endl;
        }
        else{
            throw filecheck();

        }
    }
    catch(filecheck &e){
        cout<<e.what();
    }
}
