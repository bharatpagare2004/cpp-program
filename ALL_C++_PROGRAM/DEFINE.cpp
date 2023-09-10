// this program for practice array concept using #define
#include <iostream>
# define size 5
using namespace std;
int main ()
{
    int bharat[size],i,n;
    cout<<"enter the array value: "<<endl;
    for(i =0 ;i<size;i++)
    {
        cin>>bharat[i];
    }
    cout<<"displaying array value: ";
    for( i = 0;i<size;i++)
    {
        cout<<bharat[i]<<"\t";
    }
    return 0;
} 