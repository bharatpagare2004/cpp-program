// this assignment for stl 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class item
{
    public:
    char name[29];
    int quantity;
    int cost;
    int code;

    bool operator == (const item& i1)
    {
        if(code==i1.code)
        return 1;
        return 0;

    }
    bool operator<(const item& i1)
    {
        if(code<i1.code)
        return 1;
        return 0;

    }

};
vector <item> o1;
void print(item &i1);
void display();
void insert();
void search();
void dlt();

bool compare(const item& i1,const item& i2)
{
    return i1.cost<i2.cost;

}
int main()
{
    int ch;
    do
   {
    cout<<"#######menu#########";
    cout<<"\n 1.insert";
    cout<<"\n 2.display";
    cout<<"\n 3.search";
    cout<<"\n 4.sort";
    cout<<"\n 5.delete";
    cout<<"\n 6.exit";
    cout<<"enter the choice:";
    cin>>ch;

    switch(ch)
    {   case 1:
        insert();
        break;
        case 2:
        display();
        break;
        case 3:
        search();
        break;
        case 4:
        sort(o1.begin(),o1.end(),compare);
        cout<<"\n\nthe sorted:";
        display();
        break;
        case 5:
        dlt();
        break;
        case 6:
        exit(0);


    }


   }
   while(ch!=7);
   return 0;
    
}