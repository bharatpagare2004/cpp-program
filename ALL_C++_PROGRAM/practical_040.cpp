#include<iostream>
#include<fstream> // handle input and output stream
#include<cstdlib> // this is standard library
using namespace std;

class sample // creating sample class
{
    public:
    int roll;
    char name[20];// it is array of int type. and its size is 20

    // create a simple function.
    void accept() // this function for accepting the value.
    {
        cout<<"\n enter the roll number:";
        cin>>roll;
        cout<<"\n enter the name:";
        cin>>name;

    }
    void display() // for displaying purpose
     
     {
        cout<<roll<<"\n";
        cout<<name<<"\n";

     }


};
int main()
{


//  writing the main program
sample obj; // creating the object of sample class.
ofstream os; // creating the object of ofstream as os
os.open("home:\\test.txt",ios::in|ios::out);
if(!os)
{
    cerr<<"could not open output file\n";
    exit(1);
}
cout<<"writing the contents to the file...\n";
obj.accept();
os.write((char*)&obj,sizeof(obj));
if(!os)
{
    cerr<<"could not write to file\n";
    exit(1);

}
os.close();
// opening with help of ifsteam
ifstream is; // object is "is" 
is.open("home:\\test.txt",ios::in|ios::out);
if(!is)
{
    cerr<<"could not open input file\n";
    exit(1);
}


}