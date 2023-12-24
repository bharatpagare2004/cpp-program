#include<iostream>
#include<iomanip>
using namespace std;
class complex
{
    public:
    float real,img;
    // create constructor
    complex()
    {
        real= 0;
        img = 0;

    }
    complex operator+(complex);
    complex operator*(complex);
    // for input output purpose.
    friend ostream &operator <<(ostream &,complex &);
    friend istream &operator >>(istream &,complex &);


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
complex complex :: operator+(complex obj)
{
    complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    return temp;


}
complex complex :: operator*(complex obj)
{
    complex temp;
    temp.real = real*obj.real -img*obj.img;
    temp.img = img*obj.real +real*obj.img;
    return temp;

}
int main()
{
    complex a,b,c,d;
    cout<<"this program for addition and multiplication of two complex number"<<endl;
    cout<<"enter the two number for addition"<<endl;
    cin>>a;
    cout<<"enter the two number for multiplication of two number"<<endl;
    cin>>b;


    c = a+b;
    cout<<"the result of addition is"<<endl;
    cout<<c<<endl;
    
    
    d = a*b;
    cout<<"the result of multiplication"<<endl;
    cout<<d<<endl;

}