// this program fro class have multiple type of also multiple parameter
#include<iostream>
using namespace std;
template<class T1,class T2>
class ex

{
    T1 a;
    T2 b;
    public:
    ex(T1 x ,T2 y)
    {
        a = x ;
        b = y;
    }
    void enter()
    {
        cout<<"\n enter the value of a and b:";
        cin>>a>>b;

    }
    void display()
    {
        cout<<"\n the first value is :"<<a;
        cout<<"\n the second value is:"<<b;

    }


    
};
int main()
{
    ex<int,float>p(34,33.3);
    p.display();

    ex<int,int>o(33,33);
    o.display();

    

}