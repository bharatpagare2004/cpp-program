// this progrma for fibonacci series 
#include<iostream>
using namespace std;
int main()
{
    int fib1=0,fib2=1,fib3=3;
    while(fib1+fib2<100)// this is condition.
    {
        fib3 = fib1+fib2;
        fib1 = fib2;
        fib2 = fib3;
        cout<<"this is fibonacci series element: "<<fib3<<endl;
        
        

    }
    return 0;

}