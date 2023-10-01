// this program for pointer concept
#include<iostream>
using namespace std;
int main()
{
    int i ,n ;
    int *p; // here we declare the pointer
    cout<<"how many number would you like to type: "; 
    cin>>i;
    p = new int[i]; // allocate the memory location 
    if(p==0) // if we enter the p = 0 you could not allocated the memory location
    {
        cout<<"error : memory could not allocated"<<endl;

    }
    else
    {
        for(n= 0;n<i;n++) // (n) element is less than i
        {
            cout<<"enter the number :"<<endl;
            cin>>p[n]; // n is for element 

        }
        cout<<"you have entered number:"<<endl;

    }
    for(n = 0;n<i;n++)
    {
        cout<<" "<<p[n];

    }
    delete[]p;// delete the allocated memory location
  
  return 0; 

}