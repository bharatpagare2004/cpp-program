// this program for insertion and extraction overloading.
#include<iostream>
#include<iomanip>
using namespace std;
class sample
{
    int a,b;
    public:

    friend istream& operator>>(istream&,sample&);
    friend ostream& operator<<(ostream&,sample&);

};
istream& operator>>(istream& in ,sample& o)
{
    cout<<"enter the values of a and b:";
    in>>o.a;
    in>>o.b;

}
ostream& operator<<(ostream& out,sample& m)
{
    cout<<"values are:";
    out<<m.a<<endl;
    out<<m.b<<endl;

}
int main()
{
    sample s1,s2;
    cin>>s1;
    cout<<s1<<endl;
    cin>>s2;
    cout<<s2<<endl;
    return 0;
}