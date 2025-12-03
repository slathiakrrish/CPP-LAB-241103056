#include <iostream>
using namespace std;

class Time
{
    int hours, minutes;

    public:
    Time(int h = 0, int m = 0)
    {
         hours = h;
         minutes = m;
    }

    Time addTime(Time &t)
    {
        Time result;
        result.minutes = this ->minutes + t.minutes;
        result.hours = this->hours + t.hours;

        if (result.minutes>=60)
        {
            result.hours++;
            result.minutes -= 60;
        }
        return result;
    }

    void display()
    {
        cout<<hours<<" hr "<<minutes<<" min";

    }
};

int main()
{
    Time t1(2, 30);
    Time t2(1, 40);
    Time t = t1.addTime(t2);
    t.display();
    return 0;
}