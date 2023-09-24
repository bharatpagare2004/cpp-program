// this program for single inheritance concept
#include<iostream>
using namespace std;
 class account // base class 
 {
   public : 
   float salary = 60000;
 };
 class programmer:public account  // inheritance.
 {
    public:
    float bonus = 5000;

 };
 int main()
 {
    programmer p1; // derived class
    cout<<"salary = "<< p1.salary <<endl;
   
     cout<<"bonus = "<<p1.bonus <<endl;
     return 0;
 }