// this program for mutable keyboard
#include<iostream>
using namespace std;
class sample
{
    mutable int a;
    mutable int b;
    public:
    sample()
    {
        a= 0;
        b= 0;

    }
    void change()
    {
     a =a+10;
     b =b+46;
    }
};
int main()
{
    const sample o();
    o.change();
    return 0;

}