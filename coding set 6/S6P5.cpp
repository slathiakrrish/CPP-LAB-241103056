    void Area()
#include <iostream>
using namespace std;

class shape
{
public:
    shape()
    {
        cout << "Person Contructor called " << endl;
    }
};
class Rectangle : public shape
{
public:
    int length;
    int breadth;
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void Area()
    {
        int area;
        area = length * breadth;
        cout << "Area of Rectangle is :" << area<<endl;
    }
};

class Circle : public shape
{
public:
    double radius;

    Circle(double r)
    {
        radius = r;
    }
    void Area()
    {
        double area;
        area = 3.14 * radius * radius;
        cout << "Area of Circle is :" << area;
    }
};
int main()
{
    Rectangle r1(5, 3);
    r1.Area();
    Circle c1(4);
    c1.Area();
}
