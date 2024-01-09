// this program for catch all the exception
#include<iostream>
using namespace std;


void test(int x)
{
    try
   {
    if(x== 9) throw x;
    if(x == 0) throw 'x';
    if(x == 1) throw 1.0;
   }
   catch(...)
   {
    cout<<"\n the exception is caught";

   }
    
}
int main()
{
    test(9);
    test(0);
    test(2);

}