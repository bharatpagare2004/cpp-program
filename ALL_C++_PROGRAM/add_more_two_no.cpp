// this program for add more than two no
#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum=0;
    while(true)
    {
        cout<<"enter a number : "; // take input from user.
        cin>>number;
        // break condition.
        if(number<0)
        {
            break;

        }
        // add all positive number.
        sum +=number;
        // display the sum.
    }
    cout<<"the sum is :"<<sum <<endl;
    return 0;
}