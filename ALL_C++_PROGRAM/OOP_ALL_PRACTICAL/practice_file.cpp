// this file for file handling purpose.
#include<iostream>
#include<fstream>
using namespace std;
class student{
    private:
    string name;
    int roll_no;
    public:
    void add_info()
    {
        fstream fs;
        fs.open("sample.txt",ios::app);
        if(!fs)
        cout<<"file creation is failed";
        else{
            cout<<"enter the name of student:";
            cin>>name;
            cout<<"enter the roll number of stdent";
            cin>>roll_no;
            fs<< name<<" ";
            fs<<roll_no<<"\n";
            fs.close();

        }

    }
    void display1()
    {
        fstream fs;
        fs.open("Sample.txt",ios::in);
        if(!fs)
        cout<<"no such file";
        else
        {
            while(!fs.eof())
            {
                fs>>name;
                fs>>roll_no;
                if(!fs.eof())
                
                    cout<<name<<" ";
                    cout<<roll_no<<" ";

                    cout<<"\n";
                
            }
        }
        fs.close();
    }

};
int main()
{
    student s;
    int ch ;
    fstream fs;
    do
    {

        cout<<"\n student database:";
        cout<<"\n menu";
        cout<<"\n1. add the data of member";
        cout<<"\n 2.display the info of student";
        cout<<"\n 3.exit";
        cout<<"\n enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
             s.add_info();
             break;
             case 2:
             s.display1();
             break;
            case 3:
             exit(0);

            
        }
    
    } while (ch != 3);
    
}