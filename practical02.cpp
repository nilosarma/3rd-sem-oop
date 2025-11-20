/*Define a structure "employee" with the following specifications.
emp no:integer
ename:20 characters
basic hra,da:float
calculate():A function to compute net pay as basic+hra+da with float return type.
getdata():a function to read values for emp no ,ename,basic hra,da.
dispdata():a function to display all the data on the screen .
Write a main program to test the program.*/
#include<iostream>
using namespace std;
struct employee{
    int empno;
    string ename;
    float basic, hra, da;
    float calculate();
    void getdata();
    void dispdata();

};
void employee::getdata(){
    cout<<"Enter the name and phone no of the employee = ";
    cin>>ename>>empno;
    cout<<"Enter their basic pay, hra, da = ";
    cin>>basic>>hra>>da;
}
float employee::calculate(){
    float Net_pay = basic + hra + da;
    return Net_pay;
}
void employee::dispdata(){
    cout<<"Name of the employee = "<<ename<<endl;
    cout<<"Phone no = "<<empno<<endl;
    cout<<"Basic pay = "<<basic<<endl;
    cout<<"HRA = "<<hra<<endl;
    cout<<"DA = "<<da<<endl;
    cout<<"Net pay = "<<calculate()<<endl;
}
int main(){
    employee A;
    A.getdata();
    A.dispdata();
    return 0;
}