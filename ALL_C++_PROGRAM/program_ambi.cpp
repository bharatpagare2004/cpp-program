// this program for ambiguity 
# include<iostream>
using namespace std;
class A
{
   protected:
   int a,b1 ;
   public:
   void get()
   {
    a =10;
    b1=20;

   }
   void cal()
   {
    int c ;
    c = a+b1;
    cout<<" the addition is = "<<c<<endl;
   }   
};
class B: public A
{
  
  public:
  void set()
  {
    a = 40;
    b1 =56;
    

  }
  void cal()
  {
    int c;
    c = a-b1;
    cout<<"the subtraction is = "<<c<<endl;
  }
};
int main()
{
    B o;
    o.get();
    o.A::cal(); //call the class A
    o.set(); // here call the class B 

    o.cal(); // then call the function of class B
    return 0;
}