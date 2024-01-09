// this program fro read and write the data from the file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{

     char name[23];
     int roll_no;
     double marks;


    ofstream os;
    os . open("Home:\\a.txt",ios::in|ios::out);
    cout<<"\nfile opening operation";
    cout<<"\nenter the name:";
    cin>>name;
    os<<name; // writing in the file

    cout<<"\nenter the roll no:";
    cin>>roll_no;
    os<<roll_no; // writing in the file

    cout<<"\nenter the marks:";
    cin>>marks;
    os<<marks; // writing in the file

    cout<<"\n for showing";

    ifstream op;
    op .open("Home:\\a.txt",ios::in|ios::out);
    op>>name;
    op>>marks;
    op>>roll_no;

    cout<<"\nfor printing the data in the file";
    cout<<"the roll number is :"<<roll_no<<endl;
    cout<<"the name of student is:"<<name<<endl;
    cout<<"the marks of student:"<<marks<<endl;
    return 0;







}