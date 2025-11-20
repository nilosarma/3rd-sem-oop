//Define a class "complex" with two data members "real" and "imag" to represent real and imaginary parts of a complex number.Write member functions rpart(): to return the real part of a complex number.ipart():to return the imaginary part of a complex number .add():to add complex numbers. mul():to multiply two complex numbers. write constructors with zero,one and two arguments to initialize object.
#include<iostream>
using namespace std;
class complex{
    double real, imag;
    public:
    complex()
    {
        input ();
    }
    complex(double r)
    {
real = r;
imag = 0;
    }
    complex(double r, double i){
        real = r;
        imag = i;
    }
    void input()
    {
        cout<<"Enter the real part: ";
        cin>> real;
        cout<<"Enter the imaginry part: ";
        cin>> imag;
    }
    void display()
    {
       cout<< real << "+ i"<<imag <<endl; 
    }
    double rpart()
    {
        return real;
    }
    double ipart()
    {
        return imag;
    }
    void add(complex &c)
    {
        this->real += c.real;
        this->imag += c.imag;
    }
    void mul(complex &c)
    {
        double r = this->real;
        this->real = this->real*c.real-this->imag*c.imag;
        this->imag = this->imag *c.real +r *c.imag;
    }
};
int main(){
    complex c1, c2(3,4);
    c1.display();
    c2.display();
    c1.add(c2);
    c1.display();
    c1.mul(c2);
    c1.display();
    return 0;
}