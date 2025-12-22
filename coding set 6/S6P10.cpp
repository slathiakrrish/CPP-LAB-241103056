#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w){
        length = l;
        width = w;
    }
    float area(){
        return length * width;
    }
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r){
        radius = r;
    }
    float area(){
        return 3.14 * radius * radius;
    }
};

class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h){
        base = b;
        height = h;
    }
    float area(){
        return 0.5 * base * height;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Rectangle(10, 5);
    shapes[1] = new Circle(7);
    shapes[2] = new Triangle(6, 4);

    for (int i = 0; i < 3; i++) {
        cout << shapes[i]->area() << endl;
    }

    return 0;
}
