#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

    public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    int getReal(){return real;}
    int getImag(){return imag;}

    void show()
    {
        cout<<real<<" + "<<imag<<"i"<<'\n';
      
    }
    
};

Complex add(Complex c1, Complex c2)
{
    int r = c1.getReal() + c2.getReal();
    int i = c1.getImag() + c2.getImag();
    return Complex(r, i);
}

int main()
{
    Complex C1(2, 4);
    Complex C2(3, 6);
    Complex C3 = add(C1, C2);
    C3.show();
    return 0;
}