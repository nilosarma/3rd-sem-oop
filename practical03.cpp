//q3.Define a class "circle" to represent circles.Add a data member radius to store the radius of a circle.Write member functions area() and perimeter() to compute the area and perimeter of a circle.
#include<iostream>
using namespace std;
class circle{
    float radius;
    public:
    float area();
    float perimeter();
    void getData();
    void displayData();
};
float circle:: area(){
    return 3.14*radius*radius;
}
float circle::perimeter(){
    return 2*3.14*radius;
}
void circle::getData(){
    cout<<"Enter radius of the circle:";
    cin>>radius;
}
void circle::displayData(){
    cout<<"\nRadius : "<<radius<<endl;
    cout<<"Area: "<<area()<<endl;
    cout<<"perimeter: "<<perimeter()<<endl;
}
int main()
{
    circle c1;
    c1.getData();
    c1.displayData();
    return 0;
}