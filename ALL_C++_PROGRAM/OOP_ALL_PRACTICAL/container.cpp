
#include <iostream>
#include<vector>
using namespace std;
int main()
{
int x;
vector<int> v;
vector<int>:: iterator p;
cout<<"Enter 5 elements\n";
for(int i=0;i<5;i++)
{
cin>>x;
p=v.begin();
v.insert(p,x);
}
for(p=v.begin();p<v.end();p++)
cout<<*p<<"\n";
}