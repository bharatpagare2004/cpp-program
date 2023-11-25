/*Implement a class Complex which represents the Complex Number data type. Implement
the following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.4. Overloaded << and >> to
print and read Complex Numbers.       
*/

#include<iostream> // general header file
#include<iomanip> // manage input output file
using namespace std;
class complex
{
    public:
    float real,img;
    complex()// this is constructor
    {
        real =0;// initialise the value by 0 both real and img
        img = 0;

    }
    complex operator +(complex);
    complex operator *(complex);
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
complex complex ::operator+(complex obj)
{
    complex temp ;
    temp.real = real +obj.real;
    temp .img = img+obj.img;
    return temp;


}
complex complex ::operator*(complex obj)
{
    complex temp;
    temp .real =real*obj.real -img*obj.img;
    temp .img = real*obj.real+real*obj.img;
    return temp;
}
int main()
{
    complex a,b,c,d;
    int ch ;
    cout<<"enter the first complex number is :";
    cout<<"enter the real and img:";
    cin>>a;

    cout<<"enter the second complex number:";
    cout<<"the real and img:";
    cin>>b;


    do
    {


        cout<<"enter your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1:
            c= a+b;
            cout<<"\n addition is";
            cout<<c<<endl;
            break;

            case 2:
            d = a*b;
            cout<<"multiplication is :";
            cout<<d<<endl;
            break;
        }
        
    } 
    while (ch != 3);
    return 0;
        
    }
    


