// this program for passed value.
#include<iostream>
using namespace std;
int test(int,int);
int main()
{
    int b ;
    int s =5,u=6; //the copies value 5 and 6 are passed to the function defination 
    // not vatiable s and u. 
    b= test(s,u);
    cout<<"b= "<<b;
    return 0;

}
int test(int x,int y)
{
    int z ;
    z = x+y;
    return z;
}