#include <iostream>
using namespace std;

class Animal
{
    public:
    virtual void speak(){
        cout<<"I can speak"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"I am dog and I can speak"<<endl;
    }
};
class Cat: public Animal{
    public:
    void speak(){
        cout<<"I am cat and I can speak"<<endl;
    }
};

int main(){
    Animal *ptr1;
    Animal *ptr2;
    Dog obj1;
    Cat obj2;
    ptr2 = &obj2;
    ptr1 = &obj1;
    ptr1->speak();
    ptr2->speak();

}
