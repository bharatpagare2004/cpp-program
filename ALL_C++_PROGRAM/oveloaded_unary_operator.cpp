// this program for unary operator overloading..
#include<iostream>
using namespace std;
class Distance
{
    public:
    int feet , inch;
    Distance(int f , int i)
    {
        this -> feet = f;
        this ->inch = i;
    }
    void operator+()
    {
        feet++;
        inch++;
        cout<<"the feet is: "<<feet<<endl;
        cout<<"the inch is: "<<inch<<endl;

    }
};
int main()
{
    Distance d1(8,9);
    +d1;
    return 0;
}