// this program for array pointer
#include<iostream>
using namespace std;
const  int MAX =6; // it is constant array size
 int main()
{
  int a[MAX] = {89,67,56,78,56};
  int*p[MAX];
  for(int i =0; i<MAX;i++)
  {
    p[i] = &a[i]; // p[i] is the value of particular index positiion.


  }
  for(int  i = 0;i<MAX;i++)
  {
    cout<<"value of var ["<<i<<"] = "<<*p[i]<<endl;
  }
 return 0;

}