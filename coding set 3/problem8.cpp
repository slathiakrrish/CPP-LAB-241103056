#include<bits/stdc++.h>

using namespace std;

class Complex{
    public:
    int real;
    int img;

    Complex add(Complex &obj){
        Complex answer;
        int sumReal = real + obj.real;
        int sumImg = img + obj.img;


        answer.img = sumImg;
        answer.real = sumReal;
        return answer;
    }
};

int main(){
    Complex c1,c2;
    c1.real = 3;
    c1.img = 5;
    c2.real = 3;
    c2.img = 5;
    Complex added = c1.add(c2);
    cout << added.real <<'\n' << added.img ;
}