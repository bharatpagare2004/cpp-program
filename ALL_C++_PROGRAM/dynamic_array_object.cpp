// this program for dynamic array object
#include<iostream>
using namespace std;

class worker
{
  private:int id,w1,w2,w3,w4,w5, total;
  char name[20];
  float percent ;
  public:
  void getdata();
  void result();
  void showdata();
};
void worker::getdata()
{
    cout<<"enter worker id =";
    cin>>id;
    cout<<"enter name of worker = ";
    cin>>name;
    cout<<"enter work marks = ";
    cin>>w1>>w2>>w3>>w4>>w5;
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
}   
    void worker::result()
    {
       total = w1+w2+w3+w4+w5;
       percent  = total/5.0;

    }
    void worker :: showdata()
    {
         cout<< " THE NAME OF WORKER IS = "<<name<<endl;  
         cout<<" THE WORKER ID IS = "<<id<<endl;
         cout<<" THE TOTAL MARKS FOR THEIR WORKS IS = "<<total<<endl;
         cout<<" THE PERCENT OF WORKS IS = " <<percent<<endl;
         cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;

            }

int main()
{
    worker s;
    s.getdata(); // it is normal way acces the function by the object.
    s.result();
    s.showdata();
    return 0;
}















/*int main()
{
    worker s[2];
    for(int i;i<2;i++)
    { 
        s[i].getdata();

    }    
    cout<<"@@@@@@@@@@@@@ THE WORKER INFOMATION IS GIVEN @@@@@@@@@@@@@@@"<<endl;
        
     for(int i;i<2;i++)
     {
        s[i].showdata();
     }
     return 0;

}*/


  
