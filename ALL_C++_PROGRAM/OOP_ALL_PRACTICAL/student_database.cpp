/*develop an oop in c++ to create a database of student information system
containin the following infornation:name,roll no ,class, div,dob,blood group,contact address ,telephone no,
driving liecene no and other 
construct the database with suitable member function for initilizing and destroying data vize constructor default constructor, copy consturctor,destructor,static member function,
friend class, this pointer, inline code, dynamic memory allocation.*/

#include<iostream>// input output purpose.
#include<iomanip>// input output formating.
#include<cstring>// for string purpose
#include<cstdlib>// generelised code of c++

using namespace std;

class personal
{
   
    char bg[3];
    char name[78];
    char dob[78];
    float height;
    float weight;
    char cadd[56];
    char phone[67];
    int dlno;
    static int count;
    public:
    friend class derived;

personal() // it is constuctor with no argument.
{
    strcpy(name,"bhrat");
    strcpy(dob,"56oct59");
    height=34.3;


}
personal(char name[],char dob[],float height)
{
    strcpy(this->name,name);
    strcpy(this->dob,dob);
    this->height = height;
}
personal(personal &p)
{
    strcpy(p.name,name);
    strcpy(p.dob,dob);
    p.height = height;
}
static void showcount()
{
    
    count ++;
    cout<<"\n count is :"<<count;
}
~personal()
{
    cout<<"\n object is destroyed"<<endl;
}

};
class derived
{
    public:
    void accept(personal &p)
    {
        cout<<"enter the name:";
        cin>>p.name;
        cout<<"enter the date of birth";
        cin>>p.dob;
        cout<<"enter the height";
        cin>>p.height;

    }
    inline void display(personal &p)
    {
     cout<<endl;
     cout<<setw(10)<<p.name;
     cout<<setw(8)<<p.dob;
     cout<<setw(7)<<p.height;

}
};
int personal ::count;
int main()
{
    personal *d1;
    derived d;
    int i ,n;
    cout<<"constructor values....\n";
    cout<<setw(10)<<"NAME";
    cout<<setw(10)<<"DATA";
    cout<<setw(10)<<"height";
     
   
    personal p("vishal","56oct4533",6.8);
    d.display(p);
    personal :: showcount();

    personal p1;
    d.display(p1);
    personal ::showcount();

    cout<<"\n enter the how many number information:";
    cin>>n;
    d1 = new personal[n];
    for(i = 0;i<n;i++)
    d.accept(d1[i]);

    cout<<endl;
    cout<<setw(10)<<"NAME";
    cout<<setw(10)<<"DATE";
    cout<<setw(10)<<"HEIGHT";
    for(i = 0;i<n;i++)
    {
        personal :: showcount;
        d.display(d1[i]);


    }
    return 0;

    

}

