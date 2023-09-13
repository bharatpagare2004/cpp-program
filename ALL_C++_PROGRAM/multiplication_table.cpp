// this program for generate the multiplication table.
#include<iostream>
using namespace std;
int main()
{
    int n ;\
    cout<<"enter a value which value you want to find table =";
    cin>>n;
    for(int i = 1;i<=10;++i) // by using for loop 
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;// n is value of number you want to find the table and
        //i is the changable value of i  
        
    }
    return 0;
}