#include<iostream>
#include<fstream>
using namespace std;
class employee
{
char name[20];
int id;
float salary;
char dept[10];
public:
void accept()
{
cout<<"\nEnter the name:-";
cin>>name;
cout<<"\nEnter the id:-";
cin>>id;
cout<<"\nEnter the salary:-";
cin>>salary;
cout<<"\nEnter the dept:-";
cin>>dept;
}
void display()
{
cout<<"\nEmployee Information Is:";
cout<<"\n"<<name<<"\t"<<id<<"\t"<<salary<<"\t"<<dept<<"\n";
}
};
int main()
{
employee e;
fstream file;
//file_obj_name.open("file_name","file_opening_mode");
file.open("sample",ios::in | ios::out);
//file opened in read and write mode
e.accept();
file.write((char *)&e,sizeof(e));
file.read((char *)&e,sizeof(e));
e.display();
return 0;
}