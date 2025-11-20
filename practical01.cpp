/*Define a class named "trianle" to represent a trianlge using the lenghts of the three sides.Write a constructor to initialize objects of this class . Given the lengths of sides .Also write functions to check 
(a)If a triangle is isosceles
(b)If a triangle is equilateral.*/
#include<iostream>
using namespace std;
class triangle{
    public:
    float a, b, c;
    triangle(float x, float y, float z){
        a = x;
        b = y;
        c = z;
    }
    bool isosceles(){
        return(a == b || a == c || b == c);
    }
    bool equilateral(){
        return(a == b && c == b);
    }
};

int main(){
    triangle t(4.5, 5.0, 4.5);
    if(t.isosceles())
    cout<<"Isosceles triangle";
    else if(t.equilateral())
    cout<<"equilateral triangle";
    else
    cout<<"Scelene triangle";
    return 0;
}