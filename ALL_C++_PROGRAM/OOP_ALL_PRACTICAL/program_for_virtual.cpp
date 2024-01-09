// program for virtual function
#include<iostream>
using namespace std;
class a{
    int a1;
    public:
    a()
    {
        a1= 1;

    }
    virtual void show()
    {
        cout<<a1;
    }
};
class b :public a
{
    int b1;
    public:
    b()
    {
        b1 =4;
    }
    virtual void show()
    {
        cout<<b1;
    }

};
int main()
{
    a *po;
    b o;
    po = &o;
    po->show();
    return 0;
}