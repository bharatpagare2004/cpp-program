// this program for cheakeng leap year
// by using if .... else condition.
#include<iostream>
using namespace std;
int main()
{
    int year ;
    cout<<"enter a year : "; // this is for taking value of year
    cin>>year;


    // by using if....else condition.
    if(year%4 == 0)// this is main contion for cheaking leap year
    {
      cout<<"this is leap year.";

    }  
    else
      printf("this is not leap year.");//printf function for printing purpose.
}