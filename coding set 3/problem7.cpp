#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    float price;
   
   
    Car(){
        brand = "NA";
        price = 0;

    }
    Car(string b, float p){
        brand = b;
        price = p;
    }
    Car(const Car &obj){
        brand = obj.brand;
        price = obj.price;
    }
};
int main(){
    Car C1("Gucci", 50000);
    cout<<"Brand name is "<<C1.brand<<'\n';
    cout<<"Price is "<<C1.price<<'\n';
    Car C2(C1); //same as Car C2 = C1;
    cout<<"Brand name is "<<C2.brand<<'\n';
    cout<<"Price is "<<C2.price<<'\n';
    return 0;
}