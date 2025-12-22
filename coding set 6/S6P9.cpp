#include <iostream>
using namespace std;
 
class vector2D
{
    public:
    int x;
    int y;

    vector2D(){}

    vector2D(int a , int b){
        x = a;
        y = b;
    }

    vector2D operator +(vector2D obj){
        vector2D temp;
        temp.x = x + obj.x;
        temp.y = y + obj.y;
        return temp;
    }

};
class vector3D: public vector2D
{
    public:
    int z;

    vector3D(){}

    vector3D(int a , int b , int c){
        vector2D(a,b);
        z = c;
    }
