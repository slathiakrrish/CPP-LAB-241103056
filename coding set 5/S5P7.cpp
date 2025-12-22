#include <iostream>
using namespace std;

class Car {
public:
    string model;
    string company;
    float price;

    void input() {
        cout << "Enter Car Model: ";
        cin >> model;
        cout << "Enter Company: ";
        cin >> company;
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "Model: " << model
             << "  Company: " << company
             << "  Price: " << price << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    Car c[n];
    for (int i = 0; i < n; i++) c[i].input();

    string comp;
    cout << "\nEnter company to search: ";
    cin >> comp;

    cout << "\nCars of company " << comp << ":\n";
    for (int i = 0; i < n; i++)
        if (c[i].company == comp)
            c[i].display();

    int maxIndex = 0;
    for (int i = 1; i < n; i++)
        if (c[i].price > c[maxIndex].price)
            maxIndex = i;

    cout << "\nMost Expensive Car:\n";
    c[maxIndex].display();

    return 0;
}
