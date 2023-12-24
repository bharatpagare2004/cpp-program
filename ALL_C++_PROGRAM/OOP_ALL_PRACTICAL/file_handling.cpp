// this program for file handling
#include<iostream>
#include<fstream>
using namespace std;
class student
{
     private:
     string name;
     int roll_no;
     public:
     void add_data()
     {
        fstream fs;
        fs.open("simple.txt",ios::app);
        if(!fs)
        cout<<"file creation is failed";
        else{
            cout<<"enter the name of student:";
            cin>>name;
            cout<<"enter the roll number of student:";
            cin>> roll_no;
            fs<<name<<" ";
            fs<<roll_no<<"\n";
            fs.close();
        }

     }
     void display()
     {
        fstream fs;
        fs.open("simple.txt",ios::in);
        if(!fs)
        cout<<"file cannot display";
        else
        {
            while(!fs.eof())
            {
                   fs>>name;
                   fs>>roll_no;
                   if(!fs.eof())
                   cout<<name<<" ";
                   cout<<roll_no<<"\n";
                      
            }
        }
        fs.close();
     }

};
int main()
{
  int ch;
  student s;
  fstream fs;

  do
 {
    cout<<"\n 1. add_the_data_of student"<<endl;
    cout<<"\n 2.display the data of student"<<endl;
    cout<<"\n 3.exit"<<endl;
    cout<<"enter your choice:"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        s.add_data();
        break;
        case 2:
        s.display();
        break;

    }
    
    
 }  while(ch != 3);

  
}