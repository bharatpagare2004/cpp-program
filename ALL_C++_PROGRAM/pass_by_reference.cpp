#include<iostream>
using namespace std;
 void swap(int *,int*);
 int main()
 {
    int a =20;
    int b =78;
    swap(&a,&b);
 }
 void swap(int*x,int*y)
 {
    cout<<"before swap";
    cout<<*x<<endl;
    cout<<*y<<endl;
    int t;
    t = *x;
    *x = *y;
    *y = t;
    cout<<"after swaping";
    cout<<*x<<endl;
    cout<<*y<<endl;


 }