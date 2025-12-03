#include <iostream>
using namespace std;

class Rectangle{
    int length, breadth;
   
    public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    } 

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void set(int newl, int newb)
    {
        length = newl;
        breadth = newb;
    }

    int getl() {return length;}
    int getb() {return breadth;}

    void show()
    {
        cout<<"Length: "<<length<<'\n'<<"Breadth: "<<breadth<<'\n';
    }

};

void scale(Rectangle &r)
{
   r.set(r.getl()*2, r.getb()*2); 
}

int main(){
    Rectangle R1(10, 20);
    cout<<"Before double, dimensions: "<<'\n';
    R1.show();
    scale(R1);
    cout<<"After double dimensions: "<<'\n';
    R1.show();
    return 0;
}