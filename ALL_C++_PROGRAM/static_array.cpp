// this program for static array.
#include <iostream>
using namespace std;
// creating class
  class employee
  {
    private :
       float salary;  // needed data type.
       char name[20] ,dept[10];
    public :
        void get();   // declaration of the function and also use the semicolon.
        void showdata();

  };   // class always end with semicolon.    
  void employee ::get()  // create the function outside the class without using semicolon.
  {
    cout<<"enter the name of employee: ";
    cin>>name;
    cout<<"enter the salary: ";
    cin>>salary;
    cout<<"enter the name of department: ";
    cin>>dept;
  }
  void employee::showdata()
  {
    cout<<"\n NAME OF EMPLOYEE: "<<name<<endl;
    cout<<"\nSALARY: "<<salary<<endl;
    cout<<"\nNAME OF DEPARTMENT: "<<dept<<endl;

  }
  int main()
  {
    employee e[2]; // this static array object .

    for(int i = 0;i<2;i++) // we can use for loop for static array objet.

    {
        e[i].get(); // this given syntax.

    }
    cout<<"@EMPLOYEE INFORMATION@";
    for(int i = 0;i<2;i++)
    {
        e[i].showdata(); // end with semicolon.
    }
    return 0;
  }