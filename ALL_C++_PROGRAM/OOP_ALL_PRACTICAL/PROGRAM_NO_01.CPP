// PROGRAM NUMBER = 01
// for complex number addition and multiplication
#include<iostream>
#include<iomanip>
using namespace std;
class complex

{
    public:
    float real ,img;
    complex()// constructor
    {
        real = 0;
        img = 0; // initialise with zero
    }

    complex operator +(complex);
    complex operator *(complex);
    friend ostream &operator <<(ostream &,complex &);// for output purpose
    friend istream &operator >>(istream &,complex &); // for insert purpose
};

istream &operator >>(istream &is,complex &obj)
{
    is>>obj.real;

    is>>obj.img;
    return is;

}
ostream &operator <<(ostream &out,complex &obj)
{
    out<<" "<<obj.real;
    out<<"+"<<obj.img<<"i";
    return out;
}
complex complex :: operator*(complex obj)
{
    complex temp;
    temp.real = real + obj.real;
    temp.img = img+ obj.img;
    return temp;



}
complex complex :: operator*(complex obj)
{
    complex temp;
    temp.real = real*obj.real - img*obj.img;
    temp .img = img*obj.real +real*obj.img;
    return temp;

}
int main()
{
    complex a,b,c,d;
    int ch ;
    cout<<"choice one for addition ";
    cout<<"enter the value of a,b";
    cin>>a>>b;
    c = a+b;
    cout<<"addition";
    cout<<c<<endl; 

    // for multiplication
    
   // d =a*b;
    //cout<<d<<endl;




}
