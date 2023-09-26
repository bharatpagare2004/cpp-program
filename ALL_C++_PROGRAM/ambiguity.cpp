// this program for ambiguity resolution
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
    void view()
    {
       a:: display(); // this way we resolve the problem of ambiguity
       b::display(); // with help of scope resolution operator.
    }
};
int main()
{
    c f;
    f.view();
    return 0;
}