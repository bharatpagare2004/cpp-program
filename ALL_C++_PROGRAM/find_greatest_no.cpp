// this program for find the greatest number among three number.
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;

    cout<<"Enter a value of three number: ";
    cin>>num1>>num2>>num3; //we can accept input 3 number in at one time.

    if(num1>=num2 && num1>=num3)
    {
         cout<<"num 1 is greatest number among.";

    }

    else if(num2>=num1 && num2>=num3)

    {
         cout<<"num 2 is greatest number among.";

    }

    else if(num3>=num1 && num3>=num2)

    {
         cout<<"num 3 is greatest number among.";
         
    }
    return 0;



}