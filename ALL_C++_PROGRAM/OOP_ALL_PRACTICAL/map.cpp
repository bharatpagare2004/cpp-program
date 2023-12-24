// this program for map container.
#include<iostream>
#include<cstring>
#include<map>
using namespace std;

int main()
{
    typedef map<string,int>maptype;
    maptype population;
    population.insert(pair<string ,int>("pune",9000));
    population.insert(pair<string ,int>("maharashtra",34939));

    maptype :: iterator iter;
    cout<<"========population of India===========";
    cout<<"size of population map"<<population.size()<<endl;

    string name;
    cout<<"enter the name of state:"<<endl;
    cin>>name;
    iter = population.find(name);
    if(iter != population.end())
    cout<<name<<"the population of "<<iter->second;
    else
    cout<<"the key is not found";

}