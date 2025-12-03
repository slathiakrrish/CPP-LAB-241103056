#include<iostream>
using namespace std;

template<class T>
class MinMax
{
    T minVal;
    T maxVal;
public:
    MinMax(T min, T max)
    {
        minVal = min;
        maxVal = max;
    }
    void print()
    {
        cout<<minVal<<" "<<maxVal;
    }
};

int main()
{
    MinMax<float> m1(2.4, 7.1);
    m1.print();

}
