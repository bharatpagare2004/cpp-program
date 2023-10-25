// this is first assignment,.
#include<iostream>
#include<iomanip>
using namespace std;

class complex
{
    public:
    float img,real;
    complex()
    {
        real = 0;
        img = 0;

    }
    complex operator +(complex);
    complex operator *(complex);
    friend istream& operator>>(istream&, complex&);
    friend ostream& operator<<(ostream&,complex&);

};
istream& operator>>(istream& bharat,complex& b)
{
    bharat>>b.real;
    bharat>>b.img;
    return bharat;

}
ostream& operator<<(ostream& pagare,complex& c)
{
    pagare<<" "<<c.real;
    pagare<<"+"<<c.img<<"i";
    return pagare;

}
complex complex::operator +(complex obj)
{
    complex temp;
    temp.real =real +obj.real;
    temp.img = img+obj.img;
    return temp;

}
complex complex :: operator *(complex obj)
{
    complex temp;
    temp.real = real*obj.real-img*obj.real;
    temp.img=img*obj.real+real*obj.img;
    return temp ;


}
int main()
{
    complex a,b,c,d;
    int ch;
    cout<<"\n THE FIRST COMPLEX NUMBER IS"<<endl;
    cout<<"enter the real and img number:";
    cin>>a;
    cout<<"\n THE SECOND COMPLEX NUMBER IS"<<endl;
    cout<<"enter the real and ing number:";
    cin>>b;
    do{
        cout<<" @@@@@@(CHOICE YOUR CHOICE)@@@@@@ \n 1.addition.\n 2.multiplication. \n 3.exit"<<"\n ENTRE YOUR CHOICE(1,2,3) = ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            c = a+b;
            cout<<"\n addition = ";
            cout<<c<<endl;
            break;
            case 2:
            d = a*b;
            cout<<"\n multiplication = ";
            cout<<d<<endl;
            break;



        }
       

    }
    while(ch!=3);
        return 0;
    


}
