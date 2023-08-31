// This program for swaping two number.
#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int bharat;
    
    cout<<"type the value of number 1: "<<endl;
    cin>>num1;
    cout<<"type the value of number 2: "<<endl;
    cin>>num2;
     
    //swaping of two number.
    bharat = num1;
    num1 = num2;
    num2= bharat;

    cout<<"after swaping values"<<endl;
    cout<<"the value of number 1: "<<num1<<endl;
    cout<<"the value of number 2: "<<num2<<endl;
    return 0 ;
}