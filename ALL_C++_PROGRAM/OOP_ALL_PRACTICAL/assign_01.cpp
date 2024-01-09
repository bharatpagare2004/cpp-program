//this program for practice
#include<iostream>
#include<iomanip>
using namespace std;
class complex 
{
    public:
    float real ,img;
    complex()
    {
        real = 0;
        img = 0;
    }
    complex operator +(complex);
    //complex operator *(complex);
    friend ostream& operator<<(ostream &,complex &);
    friend istream& operator>>(istream &,complex &);



};
istream& operator >>(istream &is,complex &obj)
{
    is>>obj.real;
    is>>obj.img;
    return is;
}
ostream& operator <<(ostream &out,complex &obj)
{
    out<<" "<<obj.real;
    out<<"+"<<obj.img<<"i";
    return out;

}
complex complex :: operator +(complex obj)
{
    complex temp;
    temp.real =real+obj.real;
    temp.img = img+obj.img;
    return temp;
}
/*
complex complex :: operator *(complex obj)
{
    complex temp;
    temp.real = real*obj.real+img*obj.img;
    temp.img = real*obj.real-img*obj.img;
    return temp;



}
*/
int main()
{
    complex a,b ,c,d;
    cout<<"enter the values for first complex number:";
    cin>>a;

    cout<<"enter the value of second complex number:";
    cin>>b;

    c = a+b;
    cout<<"addition is "<<endl;
    cout<<c;

   // d =a*b;
    //cout<<"\nmultiplication is "<<endl;
    //cout<<d;

    return 0;

}