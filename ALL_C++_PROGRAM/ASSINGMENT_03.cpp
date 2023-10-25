// assignment number 03
/*Imagine a publishing company which does marketing for book and audio cassette
versions. Create a class publication that stores the title (a string) and price (type float) of
a publication.
From this class derive two classes: book, which adds a page count (type int), and tape,
which adds a playing time in minutes (type float).
Write a program that instantiates the book and tape classes, allows user to enter data
and displays the data members. If an exception is caught, replace all the data member
values with zero values.*/
#include<iostream>
using namespace std;
// creation of publication  class 
class publication
{
    public:
     
     char title[20];
     float price;
    
     virtual void read()
     {
        cout<<"\n enter the title:";
        cin>>title;
        cout<<"\n enter the price";
        cin>>price;


     }
     virtual void show()
     {
        cout<< " the title of the book is ="<<title<<endl;
        cout<<" the price of the book is ="<<price<<endl;
     }
};
class book :public publication
{
    public:
     int page_count;
     void read()
     {
        cout<<"\n enter the number of pages :";
        cin>>page_count;

     }
     void show()
     {
        cout<<"page count of the book:"<<page_count;

     }

     
};
class tape:public publication
{
    
 public:


      float playtime;
      void read()
      {
        cout<<"\n enter the time in minutes:";
        cin>>playtime;
      }
      void show()
      {
        cout<<"play time in tape :"<<playtime<<endl;
      }

};
int main()
{
    publication *ptr;
    publication o;
    book b;
    tape v;

    o.read();
    o.show();
 // this is for book
    ptr= &b;
    ptr->read();
    ptr->show();
  // this is for tape
  ptr = &v;
   ptr->read();
   ptr->show();

   return 0;



}

