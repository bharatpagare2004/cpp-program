// this program for POINTER
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a,b;
    a =10,b=20;
    cout<<"value of a is = "<<a<<endl;// it gives the value of 10 this initially we assign it
    cout<<"value of b is = "<<b<<endl;// it gives the value of 10 this initially we assign it 
    ptr = &a;
    b = *ptr;
    cout<<"changed value of a variable is = "<<a<<endl;
    cout<<"changed value of b variable is = "<<b <<endl; // this value become 10 
    cout<<"address stored in ptr variable is = "<<ptr<<endl;
    cout<<"value of &ptr variable is = "<<&ptr<<endl; // it gives the address of the variable
    cout<<"value of *ptr variable is = "<<*ptr<<endl; // it gives the value of ptr.
    cout<<"value of *(&ptr) variable is = "<<*(&ptr)<<endl;// it will also gives the address of variable
    cout<<"address variable is &a = "<<&a<<endl; // it gives the address of a variable ,
    cout<<"address variable is &b = "<<&b<<endl; // it gives the address of b variable.
    return 0;
}