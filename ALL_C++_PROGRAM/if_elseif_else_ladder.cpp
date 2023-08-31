// if... else if... else ladder.
#include<iostream>
using namespace std;
int main()
{  
    int a,b,c;
    cout<<"enter value of a,b,c:";
    cin>>a>>b>>c;
    if(a>b&&a>b)
    {
        cout<<"a is greater number.";
    }
    else if(b>a&&b>c)
    {
        cout<<"b is greater number.";
    }
    else if(c>a&&c>b)
    {
        cout<<"c is greater number";
    }
    else
    {
        cout<<"all no is equal";
    }
    return 0;


}
