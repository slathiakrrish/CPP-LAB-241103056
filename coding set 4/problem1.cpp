#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point()
    {
        cout << "Default constructor created" << '\n';
        x = 0;
        y = 0;
    }

    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    void set(int newx, int newy)
    {
        x = newx;
        y = newy;
    }

    int getX() { return x; }
    int getY() { return y; }

    void show()
    {
        cout << "(" << x << ", " << y << ")" << '\n';
    }
};
void incr(Point p)
{
    p.set(p.getX() + 1, p.getY() + 1);
    cout << "After increment" << '\n';
    p.show(); 
    
}

int main()
{
    Point p1(2, 3);
    cout << "before increment" << '\n';
    p1.show();
    incr(p1);
    p1.show(); //original stays same
    return 0;
}