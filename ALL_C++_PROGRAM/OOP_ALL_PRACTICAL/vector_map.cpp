// this program for map concept
#include<iostream>
#include<cstring>
#include<map>
using namespace std;
int main()
{
    typedef map<string ,int>maptype;
    maptype populationmap;

    populationmap.insert(pair<string ,int>("maharashtra",34222));
    populationmap.insert(pair<string,int>("gujrat ",4534343));
    populationmap.insert(pair<string ,int>("hariyana",34343));

    maptype :: iterator iter;
    string state_name;
    cout<<"enter the state name";
    cin>>state_name;
    iter = populationmap.find(state_name);
    if(iter != populationmap.end())
    
        cout<<"the state name is :"<<iter->second;
    
    else
    
    cout<<"key is not found";
    


}