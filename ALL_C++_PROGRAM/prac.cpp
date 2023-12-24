// this program for file handling
#include<iostream>
#include<fstream>
using namespace std;

class student 
{
    private:
    string name;
    int rollno;
    public:
    void add_data()
    {
        fstream fs;
        fs.open("bharat.txt",ios::app);
        if(!fs)
        
            cout<<"file creation is failed";
            else
            {
                cout<<"enter the name:";
                cin>>name;
                cout<<"enter the roll number:";
                cin>>rollno;
                fs<<name<<" ";
                fs<<rollno<<"\n";
                fs.close();



            }
        }
        void display()
        {
            fstream fs;
            fs.open("bharat.txt",ios::in);
            if(!fs)
            cout<<"no file exit";
            else
            {
                while(!fs.eof())
                {
                    fs>>name;
                    fs>>rollno;
                    if(!fs.eof())
                
                cout<<name<<" ";
                cout<<rollno<<" ";
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
do{
        cout<<"\n student database:";
        cout<<"\n menu";
        cout<<"\n 1.add student information";
        cout<<"\n 2.display student information";
        cout<<"\n3.exit";
        cout<<"enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            s.add_data();
            break;
            case 2:
            s.display();
            break;
            case 3:
             exit(0);
        }





            
        }
        while(ch != 3);
        return 0;

    }
    