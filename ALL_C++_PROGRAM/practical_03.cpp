// this is opp practical number 3
#include<iostream>
using namespace std;
// creating class
class publication
{  public:
    char title[20]; // this is array.
    float price; // here price in float
    virtual void read()
    {
        cout<<"\n enter the title: ";
        cin>>title;
        cout<<"\n enter the price:";
        cin>>price;

    }
    virtual void show()
    {
        cout<<"title of the book is :"<<title<<endl;
        cout<<"the price of the book is :"<<price<<endl;

    }
}; // end of the class.
// creating book class
class book :public publication{
    public:
    int page_count;

           void read()
           {
            cout<<"\n enter the number of pages:";
            cin>>page_count;
             

           }
           void show()
           {
            cout<<"page count:"<<page_count;

           }
};
// creating the second tape class
class tape :public publication{
    public:
    float playtime;
     void read()
     {
        cout<<"\n enter the time in minutes:";
        cin>>playtime;

     }
     void show(){
        cout<<"playtime in tape:"<<playtime<<endl;

     }
};
int main()
{
    publication *p; //creating pointer here
    publication obj; //creating obj here
     book b;
     tape t;
     obj. read();// here output of base class


     obj.show(); // here output generated of base class

     p =&b; // store the address of book  class
     p->read();
     p->show();
     p =&t; //  // store the address of tape class.
     p->read();
     p->show();
     return 0;





}
