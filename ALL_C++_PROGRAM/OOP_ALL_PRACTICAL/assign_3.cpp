/*
Imagine a publishing company which does marketing for book and audio cassette
versions. Create a class publication that stores the title (a string) and price (type float) of
a publication.
From this class derive two classes: book, which adds a page count (type int), and tape,
which adds a playing time in minutes (type float).
Write a program that instantiates the book and tape classes, allows user to enter data
and displays the data members. If an exception is caught, replace all the data member
values with zero values.*/

#include<iostream>
using namespace std;

// create a class publication
class publication
{
    public:
    char title[89];
    float price;

    void virtual read()
    {
        cout<<"enter the title of book:";
        cin>>title;
        cout<<"enter the price of book:";
        cin>>price;

    }
    void virtual show()
    {
        cout<<"the title of book is:"<<title<<endl;
        cout<<"the price of book is:"<<price<<endl;

    }

};
// two derived class
class book :public publication
{
    public:
    int page_count;
    void read()
    {
        cout<<"enter the page count of book:";
        cin>>page_count;
    }
    void show()
    {
        cout<<"the page count is :"<<page_count<<endl;
    }

};
class tape : public publication
{

    public:
    float playing_time;
    void read()
    {
        cout<<"enter the playing time of tape:";
        cin>>playing_time;

    }
    void show()
    {
        cout<<"the playing time of book is:"<<playing_time<<endl;

    }

};
int main()
{
    publication *ptr;
    publication obj;

    book b;
    tape t;

    obj.read();
    obj.show();

    ptr = &b;
    ptr->read();
    ptr->show();

    ptr = &t;
    ptr->read();
    ptr->show();


}
