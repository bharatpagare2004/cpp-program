// this is example of multiple inheritance 
#include<iostream>
using namespace std;
class a 
{
  protected: 
  int a ;
  public:
  void get_a(int n )
   {
    a = n;
   }




};
class b 
{
  protected: 
  int b ;
  public :
  void get_b(int n )
  {
    b = n;
  }
};
class c : public a,public b
{
   public :
   void display()

   {

     cout<<" the value of a : "<< a<<endl;
     cout<<"the value of b: "<< b<<endl;
     cout<< " the addition of a and b is = "<< a+b;

   }
};
int main()
{
    c s;
    s.get_a(13);
    s.get_b(78); 
    s.display();
    return 0;
}
