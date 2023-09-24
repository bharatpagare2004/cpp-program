// this program for find the sum of natural number.
#include<iostream>
using namespace std;
int add(int n); // initialise the function.
int main()
{
    int n;
    cout<<"enter the positive intiger: ";
    cin>>n;
    cout<< " the sum is = "<<add(n); 

} 
int add(int n) // function write outside the main function.
{
    if(n !=0) // when their no such type condition 
        return n+ add(n-1);// function return this type output.
    return 0;
}