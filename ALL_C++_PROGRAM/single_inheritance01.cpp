// example of single inheritance
#include<iostream>
using namespace std;
class a // this is class 'a' 
{
   int a = 90; // here we declare the variable private 
   int b =78;  // it's  by default private
   public:
   int mult() // we write mult function inside the class 
   {
    int c = a*b;
    return c ;
   }   
}; 
class b : private a // here inherite the class
{
   public:
   void display()
   {
      int result = mult();
      cout<<"multiplication of and b is = "<<result;


   }
};
int main()
{
    b s;//call the function with object.
    s . display();
    return 0;
}