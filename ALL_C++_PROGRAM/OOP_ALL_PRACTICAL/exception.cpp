// this program for exception handling
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\n enter the value of a & b :";
    cin>>a>>b;
    int x = a-b;
    try
    {
        if(x != 0)
        cout<<"\n the result(a/x):"<<(a/x);
        else
         throw x;

    }
    catch(int x)
    {
        cout<<"\n  the exception caught";

    }
    cout<<"\n end";

    
   
    
}