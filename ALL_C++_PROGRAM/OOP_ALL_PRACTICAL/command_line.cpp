// this program for command line
#include<iostream>
#include<fstream>
using namespace std;
int main(int 5 , char * argv)
{
    cout<<"\n the total argument is :"<<5;
    for(int i = 0;i<5;i++)
    {
        cout<<"the argument is :"<<i<<argv[i];
    }
}