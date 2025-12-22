#include <iostream>
using namespace std;

class Complex {
public:
    float real, imag;

    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator*(Complex c) {
        Complex temp;
        temp.real = real * c.real - imag * c.imag;
        temp.imag = real * c.imag + imag * c.real;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i\n";
    }
};

int main() {
    int n;
    cout << "Enter number of complex numbers: ";
    cin >> n;

    Complex c[n];
    for (int i = 0; i < n; i++) c[i].input();

    Complex sum = c[0];
    Complex product = c[0];

    for (int i = 1; i < n; i++) {
        sum = sum + c[i];
        product = product * c[i];
    }

    cout << "\nSum: ";
    sum.display();

    cout << "Product: ";
    product.display();

    return 0;
}
