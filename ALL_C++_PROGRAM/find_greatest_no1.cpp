// this program for find the greatest no.
// using if...elseif ladder 
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a number:";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"a is greatest number.";

    }
    else if(b>a && b>c)
    {
        cout<<"b is greatest number.";
    }
    else
    {
              cout<<"c is a gretest number";
    }
    return 0;
}