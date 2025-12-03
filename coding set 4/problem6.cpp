#include <iostream>
using namespace std;

class Box
{
    int length, width, height;

public:
    Box(int l = 0, int w = 0, int h = 0)
    {
        length = l;
        width = w;
        height = h;
    }

    int volume()
    {
        return length * width * height;
    }

    void compare(Box b)
    {
        int vol1 = this->volume();
        int vol2 = b.volume();

        if (vol1 > vol2)
        {
            cout << "Passed Box has smaller volume";
        }
        else if (vol1 == vol2)
        {
            cout << "Passed Box has same volume";
        }
        else
        {
            cout << "Passed Box has larger volume";
        }
    }
};

int main()
{
    Box B1(2, 3, 6); // 36
    Box B2(6, 4, 8); // 192
    Box B3(2, 2, 4); // 16
    Box B4(2, 3, 6); // 36
    B1.compare(B2);
    return 0;
}