// this program for dynamic array object.
#include<iostream>
using namespace std;

 class teacher
  {
    private : int salary;
             char name[20],dept[10];
    public :
             void getdata();
             void showdata();
  };

  void teacher::getdata()
  {
    cout<<"enter teacher name: "<<endl;
    cin>>name;
    cout<<"enter teacher salary : "<<endl;
    cin>>salary;
    cout<<"enter teacher department:  "<<endl;
    cin>>dept;
  }
  void teacher ::showdata()
  {
    cout<<"NAME OF TEACHER : "<<name<<endl;
    cout<<"SALARY OF TEACHER: "<<salary<<endl;
    cout<<"TEACHER DEPARTMENT:"<<dept<<endl;

  }
  int main()
  {
    teacher *e;int n ; // this part is imp when we use dynamic array object.
    cout<<"how many teacher information you want fill: ";
    cin>>n;
    e = new teacher[n]; // use of new 
    for(int i =0;i<n;i++)
    {
        e[i].getdata();

    }
    cout<<"&&_TEACHER INFORMATION_&&"<<"\n";
    for(int i =0;i<n;i++)
    {
        e[i].showdata();
    }
    return 0;
  }
