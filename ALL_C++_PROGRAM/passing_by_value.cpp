#include<iostream>
using namespace std;
void swap(int a,int b); // this is formal parameter...
int main()
{
    int a = 10;
    int b = 20;
      swap(a,b);
    // this is actual parameter
}
void swap(int x,int y)
{   
    cout<<"before swapping "<<endl;
     cout<<x<<endl;
     cout<<y<<endl;
    int t;
    t= x;
    x= y;
    y = t;
    cout<<"after swapping"<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
}