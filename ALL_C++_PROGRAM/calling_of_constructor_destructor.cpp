// how call the constructor in derived class 
#include<iostream>
using namespace std;
class bharat
{
    public:
    bharat()  // firstly call this sentence  // constructor flow down
    {
      cout<<"this is main class."<<endl; 

    }  
      ~bharat() // second call this destructor
      {
        cout<<"this is main sub class of main"<<endl; 
      }
    
};
class sub :public bharat
{
   public:
   sub() // second call this sentence // destructor flow upward
   {
    cout<< " this is sub class."<<endl; 

   }
   ~sub()// first call this destructor
   {
    cout<< "this is sub of sub class."<<endl;   
   }
   
};
int main()
{
    sub c;
    return 0;
}