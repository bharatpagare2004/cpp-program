// this program for polymorphism
// what is a function overloadding 
// same function name but different parameter.
// program of function overloading when the number of argument vary(different)
#include<iostream>
using namespace std;
class cal
{
      public:
      int add(int a,int b)
      {
        return a+b;

      }
      int add(int a,int b,int c)
      {
        return a+b+c;

      }
};
int main()
{
    cal c; // this is class object declaration.

    cout<<c.add(10,20)<<endl;
    cout<<c.add(13,67,89);
    return 0 ;

}


