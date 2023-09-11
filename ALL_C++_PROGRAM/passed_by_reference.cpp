// the symbol used denoting the passed by reference is &(ampersand)
#include<iostream>
using namespace std;
int test(int& ,int& );
int main()
{
    int x =5,y=6;
    test(x,y);
    cout<<"the output is:  \n";
    cout<<"value of x = "<<x<<"\n";
    cout<<"value of y = "<<y<<"\n";
    return 0;


}
int test(int&s,int&u)
{
    s = s*10;
    u = u*10; // whatever changes in s and  u reflects x and y. 
}