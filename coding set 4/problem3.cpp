#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle()
    {
        radius = 0;
    }

    Circle(int r)
    {
        radius = r;
    }

    void set(int newr)
    {
        radius = newr;
    }

    int getR() { return radius; }

    void show()
    {
        cout << "" << radius << '\n';
    }
};

void increaseRadius(Circle *c)
{
    c->set(c->getR() + 5);
}

int main()
{
    Circle C1(5);
    cout << "Radius before increment: " << '\n';
    C1.show();
    increaseRadius(&C1);
    cout << "Radius after increment: " << '\n';
    C1.show();
}