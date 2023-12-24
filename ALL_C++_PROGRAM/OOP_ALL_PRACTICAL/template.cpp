// this program for template addition of two number
#include<iostream>
using namespace std;
template <class T>
void add(T a,T b)
{
    cout<<"the addition is:"<<a+b;

}
int main()
{
    int a,b;
    cout<<"\n addition for integer number";
    cout<<"\nenter the value of a & b:";
    cin>>a>>b;
    add(a,b);
    float r,s;
    cout<<"\n addition for float number";
    cout<<"\nenter the value of a & b:";
    cin>>r>>s;
    add(r,s);
    return 0;

}
