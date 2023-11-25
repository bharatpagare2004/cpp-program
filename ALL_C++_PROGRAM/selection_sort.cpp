// this program for selection sort
#include<iostream>
using namespace std;
class sort
{

    public:

    void getdata()
    { 
        
        int n;
        cout<<"enter how many element you want to insert:";
        cin>>n;

    }
    void selection(int n)
    {
        for(int i = 0;i<n-1;i++)
        { 
            int temp;
            int a[n];
            int min = i;
          for(int j ;j<n;j++)
          {
            if(a[j]<a[min])
            {
                min = j;
            }
            if(min != i)
              {
                 a[i]=temp;
                 temp =a[min];
                 a[min]=a[i];

              }
              cout<<"array element : "<<a[i];
        
          }
          }
    }
};
    int main()
    {
         sort p;
         p.getdata();
         //p.selection();
         return 0;

    }



