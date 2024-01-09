// this program for abstract base class
#include<iostream>
using namespace std;
class a1{


    public:
    virtual void getdata() // we declare pure virtul function
    {
       // by without body
    }
    virtual void show()=0;
     // by pure specifier

};
class derived: public a1
{
    public:
    void getdata()
    {
        cout<<"\n met";
    }
    void show()
    {
        cout<<"\n bkc";
    }

};
int main()
{
    a1 *ptr;
    derived o;

    o.getdata();
    o.show();
    cout<<"\nnashik";

    ptr = &o;
    ptr->getdata();
    ptr->show();


}