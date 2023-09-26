# include<iostream> 
using  namespace std;
class a
{
   public:
   void display()
   {
    cout<<"se computer "<<endl;
   }   
};
class b
{
   public:
   void display()
   {
    cout<<" studenet "<<endl;
   }
};
class c :public a,public b
{
     public:
  void display()
  {
     cout<<"nashik is city. "<<endl;
  }
};
int main()
{
    c f;
    f.display();
    f . a::display(); // call with derived class object.
    f.b::display();
    return 0;
}   

