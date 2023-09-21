// this program for static data member
// data member - the data member is member variable we declare inside the class.
#include <iostream>
using namespace std;
class item 
 {
   static int count ;// initialise the "zero value."
   int number;// initialize the garbage value/ non sharable.
   public:
   void get(int a)
   {
    number = a;
    count ++;
   }
   void getcount()
   {
    cout<<"count is ="<<count<<endl;
   }
 };
  // ending with semicolan.
int item ::count;// defination static data member.
 int main()
 {
    item a , b ,c,d; // defination to zero.
    a.getcount();
    b.getcount();
    c.getcount();
    d.getcount();

    a.get(100);
    b.get(200);
    c.get(300);
    d.get(400);
    cout<<"after reading data"<<endl;
    a.getcount();  // here one property of static data member is they return the previous result return without resetting.
    b.getcount();
    c.getcount();
    d.getcount();
    return 0;
 }
