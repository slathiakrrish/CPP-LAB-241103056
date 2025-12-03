#include <iostream>
using namespace std;

template <class T>
void scaleVector(T arr[], int n, T num)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= num;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int arr[]= {1, 2, 3};
    scaleVector(arr, 3, 2);
}
