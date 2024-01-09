// this program for catch all exception
#include<iostream>
using namespace std;
void test(int x)
{
    try
    {
   
    
    
    if(x == 0) throw x ; // this is integer

    if(x == -1) throw 'x'; // this is for character
    if(x == 1) throw 1.0; // this is for decimal

    }
    catch(...)
    {
        cout<<" \n exception is caught";
    }

}
int main()
{
    test(1);
    test(0);
    test(0);
    return 0;

}
