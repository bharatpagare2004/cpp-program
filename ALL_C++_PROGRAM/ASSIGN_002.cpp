// this is second assignment 
#include<iostream> //manage input output string
#include<iomanip> // manage input output string
#include<cstring> // use for string operation
#include<cstdlib>  // for standard library 

using namespace std;
// creating class 
class personal
{
    char bg[3],name[20];
    static int cnt;
    public:
    friend class derived;
    personal() // this is default constructor.
    {
      strcpy(name,"bharat");
      strcpy(bg,"o+");



    }
    personal(char name[],char bg[]) // this is parametrised constructor
    {
        strcpy(this->name,name);
        strcpy(this->bg,bg);
    }
    personal(personal &p) // this is copy constructor
    {
        strcpy(p.name,name);
        strcpy(p.bg,bg);
    }
    static void showcount()
    {
        cnt++;
        cout<<"\n count is :"<<cnt;
    }
    ~personal() // destructor
    {
        cout<<"\n object is destroyed........"<<endl;
    }

};
class derived
{
  public:
    void accept(personal &p) // simple function
    {
        cout<<"enter your name:";
        cin>>p.name;
        cout<<"enter your blood group:";
        cin>>p.bg;

    }
    inline void display(personal &p) // this inline function.
    {
        cout<<endl;
        cout<<setw(10)<<p.name;
        cout<<setw(7)<<p.bg;
    }




};
int personal ::cnt;
int main()
{
    personal *d1; // we create a pointer
    derived d; // here we create the object of derived class.
    int i,n;
    
    cout<<"\n for constructor values \n"; // THIS IS FOR CONSTRUCTOR.
    cout<<setw(10)<<"[NAME]";
    cout<<setw(10)<<"[BLOOD_GP]";
    
    personal p("vishal","b+");
    d.display(p);
    personal :: showcount();

    // this first
    personal p1;
    d.display(p1);
    personal ::showcount();
    cout<<endl;
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    cout<<"\n enter how many number you want to insert:";
    cin>>n;
    d1 = new personal[n];
    for(i=0;i<n;i++)
    d.accept(d1[i]);
    


    cout<<endl;
    cout<<setw(10)<<"name";
    cout<<setw(12)<<"blood_gp";

    for(i=0;i<n;i++)
    {
        personal::showcount(); // this is for inserting number
        d.display(d1[i]);
    }
    return 0;



}


 