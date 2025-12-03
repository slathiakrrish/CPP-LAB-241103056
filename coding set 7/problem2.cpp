#include <iostream>
using namespace std;

template <class T>
T sumArr(T arr[], int n)
{
    T s = 0;

    for (int i = 0; i < n; i++)
    {
        s += arr[i];
    }
    return s;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
   cout<< sumArr(arr, 5);
}
