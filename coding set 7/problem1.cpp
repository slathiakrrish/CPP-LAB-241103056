#include<iostream>
using namespace std;

template<class T>
void printTwo(T a, T b)
{
    cout<<a<<" "<<b;
}
int main()
{
    printTwo(3, 4);
}

