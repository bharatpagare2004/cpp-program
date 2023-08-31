// this program for find leap year.
#include <iostream>
using namespace std;
int main()
{
    int year ;
    cout<<"Enter a year : ";
    cin>>year;
    if(year%4==0)//this is actual logic by using if...else condition.
    {
        cout<<"This year is leap year.";

    }
    else
    {
        cout<<"This is not leap year.";
        return 0;
    }
}