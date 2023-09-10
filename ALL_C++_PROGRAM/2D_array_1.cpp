// this is 2 d array .
#include<iostream>
using namespace std;
int main ()
{
    int arr[3][3] = 
    {
        {67,90,56},
        {90,67,34},
        {90,56,34},

    };
    for(int i=0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}
// this program for practice.
#include<iostream>
using namespace std;
int main ()
{
    int bharat[3][3] = 
    {
        {89,56,35},
        {78,34,23},
        {67,34,23}

    };
     for(int i = 0; i<3;i++)
     {
        for(int j =0;j<3;j++)
        {
            cout<<bharat[i][j]<<" ";

        }
        cout<<"\n"; // this is for new line row ...
     }return 0 ; 
}
