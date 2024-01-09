// this program for iterator
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a(6,5);
    vector<int>::iterator p;
    for(p = a.begin();p!=a.end();p++)
    {
        cout<<*p<<endl;
    }
}