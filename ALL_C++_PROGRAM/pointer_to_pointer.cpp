// this program for concept of pointer to pointer 
#include<iostream>
using namespace std;
int main()
{
    int *vptr;
    int**intptr;
    int var = 10;
    vptr = &var;
    intptr = &vptr;
    cout<<"variable var = "<<var<<endl;// here the value of variable
    cout<<"pointer to var ="<<vptr<<endl;// here the value of *vptr, the value assign to the vpter is address of variable 
    cout<<"pointer to pointer = "<<**intptr<<endl;// here address of vptr is assign the intptr and we c all the *value of the intptr.// that's why we get the output is 10
    return 0;

}