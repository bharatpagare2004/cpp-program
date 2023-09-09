// this program for array concept.
#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    cout<<"enter a array values : ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];

    }
    cout<<"display array values:"<<"\t";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";

    }
    return 0;
}