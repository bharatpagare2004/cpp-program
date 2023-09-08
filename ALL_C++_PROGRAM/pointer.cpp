// this is for pointer.
#include <iostream>
using namespace std;
int main ()
{
    int number = 30;
    int *p;
    p = &number;// store the address of number variable.
    cout<<"address of number a variable is = "<<&number<<endl;
    cout<<"address of p variabe is = "<<p<<endl;
    cout<<"value of p variable is = "<<*p<<endl;
    return 0;

} 