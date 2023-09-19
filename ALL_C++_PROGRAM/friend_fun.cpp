// this program for friend function
#include <iostream>
using namespace std;
 class sample
 { 
    private:

    float a,b;


    public:
         void setvalue()  // friend function always declare in public area of region
         {
           a=78;
           b=90;

          }
          friend int mean(sample s); // using friend function we can access private area part.

 };
 int mean(sample s )
 {
    return(s.a + s.b)/2;
 }
 int main()
 {
    sample X ;
    X.setvalue();
    cout<<"mean value is = "<<mean(X)<<endl;
    return 0;
 }