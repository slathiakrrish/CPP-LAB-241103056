#include <iostream>
using namespace std;

class Item {
public:
    int code;
    string name;
    int quantity;

    void input() {
        cout << "Enter Item Code: ";
        cin >> code;
        cout << "Enter Item Name: ";
        cin >> name;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    Item operator+(Item obj) {
        Item temp;
        temp.code = code;
        temp.name = name;
        temp.quantity = quantity + obj.quantity;
        return temp;
    }

    void display() {
        cout << "Code: " << code << "  Name: " << name << "  Quantity: " << quantity << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of items in each inventory: ";
    cin >> n;

    Item inv1[n], inv2[n], merged[2*n];
    
    for (int i = 0; i < n; i++) inv1[i].input();
    for (int i = 0; i < n; i++) inv2[i].input();

    int k = 0;
    for (int i = 0; i < n; i++) merged[k++] = inv1[i];

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < k; j++) {
            if (inv2[i].code == merged[j].code) {
                merged[j] = merged[j] + inv2[i];
                found = true;
                break;
            }
        }
        if (!found) merged[k++] = inv2[i];
    }

    cout << "\nMerged Inventory:\n";
    for (int i = 0; i < k; i++) merged[i].display();

    return 0;
}
