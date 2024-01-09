// this program for virtual base class


// class b and c use virtual base class. 
#include<iostream>
using namespace std;
class a1{
    
    public:
    int a;
    a1()
    {
        a= 10;
    }
};
class b : public virtual a1
{

};
class c: public virtual a1
{

};
class d : public b, public c 
{

};
int main()
{
    d p;
    cout<<"the value of a is :"<<p.a;
    return 0;

}


