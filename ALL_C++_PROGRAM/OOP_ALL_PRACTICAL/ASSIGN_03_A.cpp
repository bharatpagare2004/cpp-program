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

class publication
{
	public:
		char title[20];
		float price;

		virtual void read()
		{
			cout<<"\nEnter the title:";
			cin>>title;
			cout<<"\nEnter the price:";
			cin>>price;
		}

		virtual void show()
		{
			cout<<"Title:"<<title<<endl;
			cout<<"Price:"<<price<<endl;
		}

};

class book:public publication
{
	public:	
		int page_count;

		void read()
		{
			cout<<"\nEnter the no of pages:";
			cin>>page_count;
		}

		void show()
		{
			cout<<"Page Count of book:"<<page_count<<endl;
		}
};

class tape:public publication
{
	public:	
		float playtime;

		void read()
		{
			cout<<"\nEnter the time in minutes:";
			cin>>playtime;
		}

		void show()
		{
			cout<<"Playing time in tape:"<<playtime<<endl;
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

	ptr=&b;
	ptr->read();
	ptr->show();

	ptr=&t;
	ptr->read();
	ptr->show();
	
	return 0;
}
