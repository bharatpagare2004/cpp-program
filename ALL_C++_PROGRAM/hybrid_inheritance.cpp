// this is example of hybrid inheritance
# include<iostream>
using namespace std;
class a
{
 protected: 
      int a;

    public:
       void get_a()
       {
        cout<<"enter the value of a = ";
        cin>>a;

       }  
};
class b:public a
{
     protected: 
     int b;
     public:
     void get_b()
     {
        cout<<"enter the value of b = ";
        cin>>b;
     }
};
class c 
{
  protected:
   int c ;
   public:
   void get_c()
   {
    cout<<"enter the value of c = ";
    cin>>c;
   }

};
class d : public b,public c
{  
    protected: 
    int d;
   public:
     void display()
     {
        get_a();// calling all function
        get_b();
        get_c();
        cout<<"the multiplication of a,b,c is  = "<<a*b*c;
     }

};
int main()
{
    d f1; // create the object of "d" class it is derived class .
    f1.display();
    return 0;
    
}