#include<iostream>
using namespace std;

class publication
{
	private:
		string title;
		float price;
	public:
		void add()
		{
			cout<<"Enter publication Information"<<endl;
			cout<<"Enter title of publication :"<<endl;
			cin.ignore();
			getline(cin,title);
			
			cout<<"Enter the price of publication :"<<endl;
			cin>>price;
		}
void display()
{
	cout<<"Title of publication :"<<title<<endl;
	cout<<"Price of the publication :"<<price<<endl;
}
};
class book:public publication
{
	private:
		int page_count;
	public:
		void add_book()
		{
			try
			{
				add();
				cout<<"Enter page count of book :"<<endl;
				cin>>page_count;
				if(page_count<=0)
				throw page_count;
					
			}
			catch(...)
			{
				cout<<"Invalid page count "<<endl;
				page_count=0;
			}
			}
			void display_book()
			{
				display();
				cout<<"Page count :"<<page_count<<endl;
			}
};
class tape:public publication
{
	private :
		float play_time;
	public :	
		void add_tape()
		{
			try
			{
			add();
			cout<<"Enter play time duration of tape :"<<endl;
			cin>>play_time;
			if(play_time<=0)
			throw play_time;
			}
			catch(...)
			{
				cout<<"Invalid play time "<<endl;
				play_time=0;
			}
		}
		void display_tape()

		{
 	display();
			cout<<"Playtime :"<<play_time<<endl;
			
		}
};
int main()
{
	book b1[10];
	tape t1[10];
	int ch=0, b_count=0, t_count=0;
	do
	{
		cout<<"Publication Detail:"<<endl;
		cout<<"1. Add book detail :"<<endl;
		cout<<"2. Add tape detail :"<<endl;
		cout<<"3. Diplay book detail:"<<endl;
		cout<<"4. Diplay tape detail :"<<endl;
		cout<<"5. Exit "<<endl;
		cout<<"Enter your choice :"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			b1[b_count].add_book();
			b_count++;
			break;
		case 2:
			t1[t_count].add_tape();
			t_count++;
			break;
		case 3:
			cout<<"Public Information System "<<endl;
			for(int j=0; j<b_count;j++)
			{
				b1[j].display_book();
			}
			break;
		case 4:
			cout<<"Public Information System "<<endl;
			for(int j=0; j<t_count; j++)
			{
				t1[j].display_tape();
			}
			break;
		case 5:
			exit(0);
		}
	}while(ch!=5);
	return 0;
}


#include<iostream>
using namespace std;

class publication
{
	private:
		string title;
		float price;
	public:
		void add()
		{
			cout<<"Enter publication Information"<<endl;
			cout<<"Enter title of publication :"<<endl;
			cin.ignore();
			getline(cin,title);
			
			cout<<"Enter the price of publication :"<<endl;
			cin>>price;
		}
void display()
{
	cout<<"Title of publication :"<<title<<endl;
	cout<<"Price of the publication :"<<price<<endl;
}
};
class book:public publication
{
	private:
		int page_count;
	public:
		void add_book()
		{
			try
			{
				add();
				cout<<"Enter page count of book :"<<endl;
				cin>>page_count;
				if(page_count<=0)
				throw page_count;
					
			}
			catch(...)
			{
				cout<<"Invalid page count "<<endl;
				page_count=0;
			}
			}
			void display_book()
			{
				display();
				cout<<"Page count :"<<page_count<<endl;
			}
};
class tape:public publication
{
	private :
		float play_time;
	public :	
		void add_tape()
		{
			try
			{
			add();
			cout<<"Enter play time duration of tape :"<<endl;
			cin>>play_time;
			if(play_time<=0)
			throw play_time;
			}
			catch(...)
			{
				cout<<"Invalid play time "<<endl;
				play_time=0;
			}
		}
		void display_tape()

		{
 	display();
			cout<<"Playtime :"<<play_time<<endl;
			
		}
};
int main()
{
	book b1[10];
	tape t1[10];
	int ch=0, b_count=0, t_count=0;
	do
	{
		cout<<"Publication Detail:"<<endl;
		cout<<"1. Add book detail :"<<endl;
		cout<<"2. Add tape detail :"<<endl;
		cout<<"3. Diplay book detail:"<<endl;
		cout<<"4. Diplay tape detail :"<<endl;
		cout<<"5. Exit "<<endl;
		cout<<"Enter your choice :"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			b1[b_count].add_book();
			b_count++;
			break;
		case 2:
			t1[t_count].add_tape();
			t_count++;
			break;
		case 3:
			cout<<"Public Information System "<<endl;
			for(int j=0; j<b_count;j++)
			{
				b1[j].display_book();
			}
			break;
		case 4:
			cout<<"Public Information System "<<endl;
			for(int j=0; j<t_count; j++)
			{
				t1[j].display_tape();
			}
			break;
		case 5:
			exit(0);
		}
	}while(ch!=5);
	return 0;
}

