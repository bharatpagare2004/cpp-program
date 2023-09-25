// this program for multileval inheritance.
// In multilevel inheritace chain of deriaved class  


#include<iostream>
using namespace std;
class a // this is base class 
{
   public:
         void display()
         {
            cout<<" this is c++ contain";
         }
};
class b : public a  // inherited 
{
     
};
class c : public b  // inherited
{
   
};
int main()
{
    c f; // create derived c class object and call the function.
    f . display();
    return 0;
}