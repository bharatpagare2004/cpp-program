// this program for addition and multiplication of two complex number.
#include<iostream>
#include<iomanip>
using namespace std;
class complex{
    float img,real;
    public:
    complex()
    {
        real = 0;
        img = 0;
    }
    complex operator+(complex);
    complex operator*(complex);
    friend ostream &operator <<(ostream & ,complex&);
    friend istream &operator >>(istream& ,complex&);
};
istream &operator >>(istream &is,complex &obj)
{
    is>>obj.real;
    is>>obj.img;
    return is ;
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
    temp.real = real+obj.real;
    temp.img = img + obj.img;
    return temp;

}
complex complex :: operator*(complex obj)
{
    complex temp;
    temp.real = real*obj.real - img*obj.img;
    temp.img = img*obj.real + real*obj.img;
    return temp;

}
int main()
{
    complex a,b,c,d;
    cout<<"enter the value of two complex number";
    cin>>a;
    cout<<"enter the value of two complec number";
    cin>>b;
    cout<<"result"<<endl;
    cout<<"for addition"<<endl;
    c = a+b;
    cout<<c<<endl;
    cout<<"for multiplication"<<endl;
    d = a*b;
    cout<<d<<endl;

}