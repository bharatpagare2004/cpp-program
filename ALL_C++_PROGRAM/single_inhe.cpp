// problem statement.
/* write a c++ program to add two number using single inheritance . accept these two
   numbers in base class and display sum of these two numbers in derived class.*/
# include<iostream>
using namespace std;   
class number
{
  private:
  int a =67 ;
  int b= 78 ;
  public:
  int addition()

    {
         int c = a+b;
         return c ;
    }
    

};
class add : public number
{
    public:
    void display()
    { 
        
        cout<<" the addition of two number: "<<addition();
    }

};
int main()
{

    add s;
    s. display();
    return 0;

}
