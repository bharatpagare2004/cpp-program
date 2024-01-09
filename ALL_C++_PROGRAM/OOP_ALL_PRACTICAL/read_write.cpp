// this program for read and write
#include<iostream>
#include<fstream>
using namespace std;
class employee
{
    char name[89];
    int roll_no;
    int id;
    public:
    void accept()
    {
        cout<<"enter the name of student:";
        cin>>name;
        cout<<"enter the roll no:";
        cin>>roll_no;
        cout<<"enter the id of student:";
        cin>>id;

    }
    void display()
    {
        cout<<"\nthe name of student:"<<name;
        cout<<"\nthe roll no of student:"<<roll_no;
        cout<<"\n the id of student:"<<id;

    }


};
int main()
{
    employee e;// creating class object;
    fstream f;

    cout<<"\n for file operation";
    f.open("Home:\\ goodd.txt",ios::in|ios::out);

    e.accept();
    f.write((char *)&e,sizeof(e));

    f.read((char *)&e,sizeof(e));
    e.display();

    return 0;

}