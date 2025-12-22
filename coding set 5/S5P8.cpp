#include <iostream>
using namespace std;

class Product {
public:
    int id;
    string name;
    float price;
    float discount;
    float finalPrice;

    void input() {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Discount (%): ";
        cin >> discount;
        finalPrice = price - (price * discount / 100.0);
    }

    void display() {
        cout << "ID: " << id 
             << "  Name: " << name
             << "  Price: " << price
             << "  Discount: " << discount << "%"
             << "  Final Price: " << finalPrice << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Product p[n];
    for (int i = 0; i < n; i++) p[i].input();

    float total = 0;
    for (int i = 0; i < n; i++) total += p[i].finalPrice;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (p[j].finalPrice > p[j+1].finalPrice) {
                Product temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }

    cout << "\nProducts Sorted by Final Price (Low to High):\n";
    for (int i = 0; i < n; i++) p[i].display();

    cout << "\nTotal Amount Payable: " << total;

    return 0;
}
