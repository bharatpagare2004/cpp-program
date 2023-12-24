#include<iostream>
#include<iomanip>
using namespace std;


class complex
{
    public:
      float real,img;
      complex()
      {
        real = 0;
        img = 0;

      }
      complex operator +(complex);
      complex operator *(complex);
      friend ostream &operator <<(ostream &,complex &);
      friend istream &operator >>(istream &,complex &);


};
istream  &operator>>(istream &is,complex &obj )
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
    complex temp ;
    temp.real = real + obj.real;
    temp.img = img +obj.img;
    return temp;


}
int main()
{
    complex a,b,c,d;
    int ch;
    cout<<"\n enter real and img";
    cin>>a;

    cout<<"enter the real and img";
    cin>>b;

    c= a+b;
    cout<<"addition";
    cout<<c<<endl;

    /*d = a*b;
    cout<<"multiplication";
     cout<<d<<endl;*/




}
