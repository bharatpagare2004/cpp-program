// this program for greater number
#include<iostream>
using namespace std;
template<class T>
 void max1(T a,T b)
 {
    if(a>b)
    {
        cout<<"\n a is greater:"<<a;

    }
    else{
        cout<<"\n b is greater:"<<b;

    }
 }
 int main()
 {
    max1<int>(45,489);
    max1<float>(45.3,34.4);
    return 0;
 }
 
