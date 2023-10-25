/*// this program for unary operator as friend function.
#include<iostream>
#include<iomanip>
using namespace std;
class point
{
    int x,y;
    public:
    void display();
    friend void operator -(point &p); // this syntax for the unary as friend function
    point(int a,int b)
    {
        x =a;
        y = b;

    }
};

void point::display()
{

    cout<<"x ="<< x<<endl;
    cout<<"y = "<<y<<endl;

}
void operator -(point &p) // defination of unary as friend 
{
   p.x = -p.x;
   p.y = -p.y;

}
int main()
{
    point p(19,68);
    p.display();
    -p; // invoking the object as unary as friend
    cout<<"after negation";
    p.display();
    return 0;
}*/


// unary as firend function.
#include<iostream>
#include<iomanip>
using namespace std;
class negation
{
    int x , y;
    public:

    void display();
    friend void operator -(negation &p);
    negation(int a,int b)
    {
        x =a;
        y= b;

    }
};

void negation:: display()
{
    cout<<"x is =  "<<x<<endl;
    cout<<"y is  =  "<<y<<endl;

}
void operator -(negation &p)
{
    p.x = -p.x;
    p.y = -p.y;
}
int main()
{
    negation m(29,68);
    m.display();

    cout<<"after negation"<<endl;
    -m;// invoking as unary as member function.
     
     m.display();
     return 0;

}

