// this is program #define
#include<iostream>
#define size 5
using namespace std;
int main()
{
     int a[size],i,n;
     cout<<"enter a value of array: ";
     for( i = 0;i<size ; i++)
     
        
        {
            cin>>a[i];

        }
        cout<<"displaying array value:\n";
        for(i = 0;i<size;i++)
         {
            cout<<a[i]<<'\n';
         } 
          

     return 0;

}
