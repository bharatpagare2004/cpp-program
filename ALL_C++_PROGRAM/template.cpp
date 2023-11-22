// this program for template purpose.
#include<iostream>
using namespace std;
template <class T> // syntax for template
void add(T a,T b)// t is generic data type
{
    cout<<"addition is = "<<a+b<<endl;

}
int main()
{   cout<<"for integer purpose"<<endl;
    int p,q;
    cout<<"enter the value of p and q:"<<endl;
    cin>>p>>q;
    add(p,q);

    cout<<"for float value purpose"<<endl;
    float a,b;
    cout<<"enter the value of p and q:"<<endl;
    cin>>a>>b;
    add(a,b);
    return 0;

    // we can create one code for different data type purpose.
}