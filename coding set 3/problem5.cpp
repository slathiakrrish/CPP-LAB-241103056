#include<iostream>
using namespace std;

class Circle{
    float radius;
    
    public:
    
    Circle(){
        cout<<"Default constructor created"<<'\n';
        radius = 1;
    }
    Circle(float r){
        radius = r;
    }
    float area(){
        return  3.14*radius*radius;
     }
};
 int main(){
    Circle C1;
    cout<<"Area of Circle is "<< C1.area()<<'\n';

    Circle C2(5.5);
    cout<<"Area of Circle is "<<C2.area();
    return 0;
 }