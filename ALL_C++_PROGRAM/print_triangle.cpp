// this is program for printing triangle

#include<iostream>
using namespace std;
int main()
{
     int rows;

     cout<<"enter rows value: ";
     cin>>rows;


     // using double for loop/ nested loop.
     for(int i=rows ;i>=1;--i)
       {
        for(int j =1; j<=i;++j)
        {
            cout<<" bharat ";

        }
        cout<<"\n";
        
       }
       return 0;

}