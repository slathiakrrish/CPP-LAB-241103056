#include <iostream>
using namespace std;

template <class T>
class StringBox
{
    T value;

public:
   void setData(T str)
    {
        value = str;
    }
   void getData()
    {
        cout << value;
    }
};
int main()
{
    StringBox<string>s;
    s.setData("hello");
    s.getData();
}