// this  is practice for creating class
#include<iostream>
using namespace std;


 class arithmatic
    {
        private: int a,b,add,sub,mult;
                 float div;
                 char name[23];
        public:
               void getdata();  // declaration part.
               void addition();
               void subtraction();
               void multiplication();
               void division();
               void showdata();
    }; // end with semicolon.
    void arithmatic::getdata()
           {
            cout<<"this is arithmatic opration"<<endl;
            cout<<"ENTER THE VALUE OF A =" ;
            cin>>a;
            cout<<"ENTER THE VALUE OF B = ";
            cin>>b;
           }
    void arithmatic::addition() 
            {
                add =a+b;

            }
    void arithmatic::subtraction()
            {
                sub =a-b;
             }
    void arithmatic::multiplication()
             {
                mult =a*b;
             }
    void arithmatic::division()
             {
                div =a/b ;
             }
    void arithmatic:: showdata() // show data is also important showing data which we have do opration
             {
              
              cout<<" {1}.THE SUM OF A AND B : "<<add<<endl;
              cout<<" {2}.THE SUBSTRACTION OF A AND B : "<<sub<<endl;
              cout<<" {3}.THE MULTIPLICATION OF A AND B : "<<mult<<endl;
              cout<<" {4}.THE DIVISION OF A AND B : "<<div<<endl;
              
             }

    int main()
    {
        arithmatic p; // this is simply we can say calling of function....
        p.getdata();
        p.addition();
        p.subtraction();
        p.multiplication();
        p.division();
        p.showdata();
        return 0;

    }
        


