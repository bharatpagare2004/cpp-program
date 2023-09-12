// this program for swapping of two number.
#include<iostream>
using namespace std;
int main ()
{
    int a=5,b=9,bharat;
    cout<<"before swapping "<<endl;
    cout<<"a ="<<a<<", b = "<<b<<endl;

    bharat = a; // this is actual swapping take place here.
    a=b;
    b=bharat;
     
    cout<<"after swapping "<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;
    return 0; 

}