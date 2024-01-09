// this program for overload unary operator
#include<iostream>
#include<iomanip>
using namespace std;
class point
{
    int x , y;
    public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display();
    point operator -();
    
};
void point:: display()
{
    cout<<"x = "<<x;
    cout<<"y = "<<y;

}
point point::operator-()
{
    x = -x;
    y = -y;


}
int main()
{
    point p(45,33);
    p.display();
    cout<<"\n after negation";

    -p;
    p.display();
    return 0;


}