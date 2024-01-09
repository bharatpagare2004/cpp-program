// this program for generic function

// we written generilised code for different data type.
#include<iostream>
using namespace std;
template <class T>
void display(T a)
    {
        cout<<"\n  the value is:"<<a;
    }
    int main()
    {
        cout<<"\n for string ";
        display("hellow");
        cout<<"\n for integer";
        display(34);
        cout<<"\n for float";
        display(43.33);
        return 0;
    }
