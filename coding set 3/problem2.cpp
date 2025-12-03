#include<iostream>
using namespace std;

class Book{
    string title;
    string author;
    float price;
    
    public:
    void input(string t, string a, float p){
        title = t;
        author = a;
        price = p;
    }
    
    void display(){
        cout<<"Title of Book is "<<title<<'\n';
        cout<<"Author of Book is "<<author<<'\n';
        cout<<"Price of Book is "<<price<<'\n'; 
    }

};

int main(){
    Book B1;
    B1.input("Invisible Man", "HG Wells", 499.00);
    B1.display();
    return 0;
}