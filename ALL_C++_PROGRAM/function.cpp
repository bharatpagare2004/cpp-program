// using function addition two number....
#include <iostream>
using namespace std;

int add(int a , int b) //function write before main function.
  {
    int c;
    c = a+b;
    return c; 
   }  
int main() //starting of main function.......
{     
  {int a,b;
  cout<<"enter a first number = ";
  cin>>a;
  cout<<"enter a second number = ";
  cin>>b;
  cout<<"addition of two number = "<<add(a,b); 
  }
  
 
}    