// this program for inline function.
#include<iostream>
using namespace std;
int test(int); // initialise the function.
int main()
{
    int x; // intialise the variable.
    cout<<"enter the value: "<<endl;
    cin>>x;
    cout<<"the output is : "<<test(x)<<endl;
    return 0;
}

inline int test(int x1) // this is inline function 
{
    return 5*x1; // here we written the function.
}