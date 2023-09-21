// this program for destructor 
#include<iostream>
using namespace std;
class Tbook
 { 
    public :
        Tbook();
        ~Tbook(); // destructor always show with symbol tilde (~)
        void message()
        {
            cout<<"i read the book"<<endl; // fifth time

        }
 };
 Tbook::Tbook() // constructor.
 {
     cout<<"i see the book"<<endl; //second show the this statement. also forth time.

 }
 Tbook::~Tbook() // destructor
 {
    cout<<"i close the book"<<endl;  // call the destructor two time because we creat two object
    
 }
 int main()
 {
    cout<<"i am at the library"<<endl; // first execute this statement
    Tbook A ; // this is first object
    cout<<"i didn't like the book. i will try another."<<endl;// third show this statement
    Tbook B;// this is second object
    B.message(); //
    cout<<"i am getting out of the library"<<endl; // seventh time
    return 0;
 }