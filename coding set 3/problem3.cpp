#include<iostream>
using namespace std;

class Rectangle{
    float length, width;
    public:
     float area();
     Rectangle(float l, float w){
        length = l;
        width = w;
     }
};
float Rectangle:: area(){
    return length * width;
}
int main(){
    Rectangle R1(15, 10);
    Rectangle R2(20.12, 5.20);
    cout<<"Area of Rectangle 1: "<<R1.area()<<'\n';
    cout<<"Area of Rectangle 2: "<<R2.area();
    return 0;
    
}
