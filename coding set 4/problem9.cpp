#include <iostream>
using namespace std;

class Matrix
{
    int arr[2][2];

    public:
    Matrix()
    {
        arr[0][0] = arr[0][1] = arr[1][0] = arr[1][1] = 0;
    }

    Matrix(int a11, int a12, int a21, int a22)
    {
        arr[0][0] = a11;
        arr[0][1] = a12;
        arr[1][0] = a21;
        arr[1][1] = a22;
    }

    Matrix add(Matrix &m)
    {
        Matrix sum;
        for (int i=0; i<2; i++)
        {
            for (int j=0; j<2; j++)
            {
                sum.arr[i][j] = this->arr[i][j] + m.arr[i][j];
            }
        }
        return sum;

    }

    void display()
    {
        cout<<"Sum of matrix are:"<<'\n';
        for (int i=0; i<2; i++)
        {
            for (int j=0; j<2; j++)
            {
               cout<<""<<arr[i][j];
            }
        }
    }
};

int main()
{
    Matrix m1(1, 2, 3, 4);
    Matrix m2(5, 6, 7, 8);
    Matrix m3 = m1.add(m2);
    m3.display();
    return 0;
}