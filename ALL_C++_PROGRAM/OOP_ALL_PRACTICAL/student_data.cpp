// student database
#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>

using namespace std;

class personal
{
    
    char name[23];
    int height;
    int static count;
    
    public:
    friend class derived;
    personal()
    {
        strcpy(name,"bharat");
        height = 34;
    }
    personal(char name[],int height )
    {
        strcpy(this->name,name);
        this->height=height;
    }
    personal(personal &p)
    {
        strcpy(name,p.name);
        p.height= height;

    }
    static  void showcount()
    {
        count++;
        cout<<"\nthe count is :"<<count<<endl;
    }
    ~personal()
    {
        cout<<"the object is destroyed";

    }
};
class derived
{
    public:
    void accept(personal &p)
    {
        cout<<"enter your name:";
        cin>>p.name;
        cout<<"enter your height:";
        cin>>p.height;
    }
    inline void display(personal &p)
    {
      cout<<endl;
      cout<<setw(10)<<p.name;
      cout<<setw(7)<<p.height;

    }
};
int personal::count;
int main()
{
    personal *d1;
    derived d;
    int i ,n;
    cout<<"\nfor constructor\n";
    cout<<setw(10)<<"name";
    cout<<setw(10)<<"height";

    personal p("bharat",8);
    d.display(p);
    personal :: showcount();

    personal p1;
    d.display(p1);
    personal :: showcount();



    cout<<"\nenter the value you want to insert:";
    cin>>n;
   
    for(i = 0;i<n;i++)
    d.accept(d1[i]);
    cout<<endl;
    cout<<setw(10)<<"NAME";
    cout<<setw(8)<<"HEIGHT";
    for(i = 0;i<n;i++)
    {
       
        d.display(d1[i]);
         personal ::showcount();
    }

    


    
    

}