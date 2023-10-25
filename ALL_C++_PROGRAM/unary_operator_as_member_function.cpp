// this program for unary operator as member function.
#include<iostream>
#include<iomanip>
using namespace std;
class point
{
    int x,y;
    public:
    point(int a,int b)
    {
        x =a;
        y= b ;
    }
                             // this is paramaterised constructor.
    void display();
    void operator -();

};
/*point :: point(int a,int b) // consturctor defination outside the class 
{
    x =a;// value assign
    y= b; // value assign 

}*/
void point :: display() // simple function defination
{
    cout<<"x is = "<<x<<endl;
    cout<<" y is = "<<y<<endl;
}
void point :: operator -() // unary operator defination as a member function
{
    x = -x;
    y = -y;
}
int main()
{
    point p(10,20);
    p.display();
    -p; // invoke the unary operator as member function
    cout<<"after negation: ";
    p.display();
    return 0;
}